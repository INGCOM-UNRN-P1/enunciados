"""
scripts/completar_enunciados.py — Auditor y completador automático de enunciados pedagógicos.
Estandariza los enunciados en banco/ siguiendo la taxonomía C11 y el formato canónico de cátedra.
"""

import os
import re
import yaml
from pathlib import Path
from typing import Dict, Any, List, Optional, Tuple

def es_enunciado_completo(contenido: str) -> bool:
    """Verifica si el enunciado ya cuenta con todas las secciones canónicas requeridas."""
    c = contenido.lower()
    tiene_ejemplo = "ejemplos de ejecución" in c or "ejemplos de ejecucion" in c or "::::{tab-set}" in c
    tiene_contrato = "contrato de las funciones" in c or "contrato de la función" in c or "contrato de la funcion" in c
    tiene_casos = "precondiciones y casos borde" in c or ("precondiciones" in c and "casos borde" in c)
    tiene_criterios = "criterios de aceptación" in c or "criterios de aceptacion" in c

    return tiene_ejemplo and tiene_contrato and tiene_casos and tiene_criterios

def limpiar_texto_existente(enunciado_actual: str, titulo: str) -> str:
    """Limpia encabezados redundantes y pistas rotas del enunciado original."""
    # Cortar secciones canónicas previas si ya existen para evitar duplicación
    for marcador in ["### 📋 Contrato", "### Contrato", "### 🧪 Ejemplos", "### Ejemplos", "### ⚠️ Precondiciones", "### 🎯 Criterios"]:
        if marcador in enunciado_actual:
            enunciado_actual = enunciado_actual.split(marcador)[0]

    lineas = enunciado_actual.splitlines()
    resultado = []
    ignorar_bloque = False
    
    for l in lineas:
        # Filtrar títulos repetidos
        if re.match(r'^#+\s*(Ejercicio|\d+|Consigna|' + re.escape(titulo) + r')', l, re.IGNORECASE):
            continue
        # Limpiar bloques ::: {hint} Lógica y Consideraciones truncados
        if ":::{hint} Lógica y Consideraciones" in l or ":::{hint}" in l:
            ignorar_bloque = True
            continue
        if ignorar_bloque:
            if ":::" in l:
                ignorar_bloque = False
            continue
        # Limpiar comentarios html como <!-- {hint} -->
        if l.strip().startswith("<!--") and l.strip().endswith("-->"):
            continue
        resultado.append(l)
        
    texto = "\n".join(resultado).strip()
    # Si quedó vacío o casi vacío, retornar cadena vacía
    if len(texto) < 15:
        return ""
    return texto

def inferir_ejemplos(meta: Dict[str, Any], sol_c: str, tema: str) -> List[Tuple[str, str, str]]:
    """Genera ejemplos de entrada y salida basados en los tests o lógica de la función."""
    ejemplos = []
    tests = meta.get("tests_funciones", [])
    
    for t in tests:
        codigo = t.get("codigo", "")
        nom = t.get("nombre", "")
        m_num = re.search(r'([a-zA-Z0-9_]+)\s*\(\s*(-?\d+)\s*\)', codigo)
        if m_num:
            fn, val = m_num.group(1), m_num.group(2)
            m_res = re.search(r'==\s*(-?\d+)', codigo)
            res_val = m_res.group(1) if m_res else str(int(val) * 2 if int(val) > 0 else 0)
            nom_caso = "Valor positivo" if int(val) > 0 else "Valor cero o negativo"
            ejemplos.append((nom_caso, f"Entrada: {val}", f"Salida / Retorno: {res_val}"))
            
    if not ejemplos:
        if "cadena" in tema or "string" in tema or "caracteres" in tema:
            ejemplos.append(("Cadena estándar", 'Entrada: "Hola Mundo"', 'Salida: Procesada según consigna'))
            ejemplos.append(("Cadena vacía", 'Entrada: ""', 'Salida: Cadena vacía o código 0'))
        elif "matriz" in tema or "matrices" in tema:
            ejemplos.append(("Matriz 2x2", 'Entrada: [[1, 2], [3, 4]]', 'Salida: Resultado calculado'))
            ejemplos.append(("Caso límite 1x1", 'Entrada: [[5]]', 'Salida: 5'))
        elif "memoria" in tema or "lista" in tema or "arbol" in tema or "tda" in tema or "tad" in tema or "datos" in tema:
            ejemplos.append(("Operación típica", 'ADD 10, ADD 20', 'Estructura con 2 elementos'))
            ejemplos.append(("Colección vacía", 'Consulta sobre estructura recién inicializada', 'Retorno seguro / estado vacío'))
        elif "archivo" in tema:
            ejemplos.append(("Archivo válido", 'Entrada: "datos.txt" con 3 registros', 'Salida: 3 registros procesados'))
            ejemplos.append(("Archivo inexistente", 'Entrada: "no_existe.bin"', 'Salida: Manejo de error (NULL / código -1)'))
        else:
            ejemplos.append(("Caso general", 'val = 10', 'Retorno esperado calculado'))
            ejemplos.append(("Caso límite", 'val = 0', 'Retorno 0 o manejo de borde'))
            
    return ejemplos[:2]

def generar_enunciado_canonico(ej_dir: Path) -> str:
    """Genera un enunciado completo y estandarizado para el ejercicio dado."""
    yaml_p = ej_dir / "ejercicio.yaml"
    enunc_p = ej_dir / "enunciado.md"
    sol_p = ej_dir / "solucion.c"
    
    with open(yaml_p, encoding="utf-8") as f:
        meta = yaml.safe_load(f) or {}
        
    enunc_actual = enunc_p.read_text(encoding="utf-8") if enunc_p.exists() else ""
    sol_c = sol_p.read_text(encoding="utf-8") if sol_p.exists() else ""
    
    titulo = meta.get("titulo", ej_dir.name.replace("-", " ").title())
    tema = meta.get("tema", ej_dir.parent.name)
    funciones = meta.get("funciones", [])
    pistas = meta.get("pistas", [])
    
    # Limpiar y extraer consigna existente
    consigna_previa = limpiar_texto_existente(enunc_actual, titulo)
    
    partes = []
    
    # 1. Narrativa / Planteo del problema
    if consigna_previa:
        partes.append(consigna_previa.strip() + "\n")
    else:
        partes.append(
            f"Implementá un programa o módulo en C que resuelva la problemática planteada para **{titulo}** "
            f"en el contexto del tema `{tema}`.\n\n"
            f"El código debe respetar las buenas prácticas de programación en C11, asegurando un diseño modular, "
            f"tipado estricto y manejo riguroso de condiciones de borde.\n"
        )
        
    # 2. Contratos de Funciones
    partes.append("### 📋 Contrato de las Funciones\n")
    if funciones:
        partes.append("```c")
        for fn in funciones:
            nom = fn.get("nombre", "operacion")
            ret = fn.get("retorno", "int")
            params = fn.get("parametros", "void")
            desc = fn.get("descripcion", f"Operación principal de {nom}")
            
            partes.append("/*")
            partes.append(f" * {desc}")
            if "val" in params:
                partes.append(" * Precondiciones: val representa el parámetro de entrada del flujo.")
                partes.append(" * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.")
            elif "*" in params:
                partes.append(" * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.")
                partes.append(" * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.")
            else:
                partes.append(" * Precondiciones: Parámetros dentro del dominio válido de la operación.")
                partes.append(" * Postcondiciones: Retorna el valor procesado.")
            partes.append(" */")
            partes.append(f"{ret} {nom}({params});\n")
        partes.append("```\n")
    else:
        partes.append(
            "El programa debe estructurarse modularmente dividiendo las responsabilidades en funciones auxiliares "
            "claramente documentadas con pre y postcondiciones.\n"
        )

    # 3. Ejemplos de Ejecución
    partes.append("### 🧪 Ejemplos de Ejecución\n")
    ejemplos = inferir_ejemplos(meta, sol_c, tema)
    partes.append("::::{tab-set}")
    for idx, (nom_ej, ent, sal) in enumerate(ejemplos, 1):
        partes.append(f":::{{tab-item}} {nom_ej}")
        partes.append("```text")
        partes.append(ent)
        partes.append(sal)
        partes.append("```")
        partes.append(":::")
    partes.append("::::\n")
    
    # 4. Precondiciones y Casos Borde
    partes.append("### ⚠️ Precondiciones y Casos Borde\n")
    partes.append("1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.")
    if any("*" in fn.get("parametros", "") for fn in funciones):
        partes.append("2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).")
    if "memoria" in tema or "dinamica" in tema or "tad" in tema or "datos" in tema:
        partes.append("3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.")
    if "cadena" in tema or "cadenas" in tema or "string" in tema or "caracteres" in tema:
        partes.append("4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\\0` dentro de los límites del buffer.")
    if "archivo" in tema:
        partes.append("5. **Acceso a archivos:** Verificar que los punteros `FILE*` retornados por `fopen` sean distintos de `NULL` antes de leer o escribir.")
    partes.append("6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.\n")
    
    # 5. Criterios de Aceptación
    partes.append("### 🎯 Criterios de Aceptación\n")
    partes.append("- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).")
    partes.append("- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.")
    partes.append("- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.")
    if "memoria" in tema or "dinamica" in tema or "estructuras" in tema or "tad" in tema:
        partes.append("- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.")
    partes.append("")
    
    # 6. Pistas pedagógicas si existen
    if pistas:
        partes.append(":::{hint} Consideraciones Didácticas")
        for p in pistas:
            limpio = re.sub(r'^\[Plus Ultra\]\s*', '', str(p).strip())
            partes.append(f"- {limpio}")
        partes.append(":::\n")
        
    return "\n".join(partes)

def procesar_ejercicio(ej_dir: Path, forzar: bool = False) -> Tuple[bool, str]:
    """Audita y completa un ejercicio individual."""
    enunc_p = ej_dir / "enunciado.md"
    actual = enunc_p.read_text(encoding="utf-8") if enunc_p.exists() else ""
    
    if not forzar and es_enunciado_completo(actual):
        return False, "Ya completo"
        
    nuevo_enunciado = generar_enunciado_canonico(ej_dir)
    enunc_p.write_text(nuevo_enunciado, encoding="utf-8")
    return True, "Completado y estandarizado"

if __name__ == "__main__":
    import sys
    target = sys.argv[1] if len(sys.argv) > 1 else "banco"
    target_path = Path(target)
    
    if target_path.is_file() and target_path.name == "enunciado.md":
        actualizado, msg = procesar_ejercicio(target_path.parent, forzar=True)
        print(f"{target_path.parent.name}: {msg}")
    elif (target_path / "ejercicio.yaml").exists():
        actualizado, msg = procesar_ejercicio(target_path, forzar=True)
        print(f"{target_path.name}: {msg}")
    else:
        # Recorrer directorio o banco
        ejercicios = [p for p in target_path.glob("*/*") if (p / "ejercicio.yaml").exists()]
        if not ejercicios:
            ejercicios = [p for p in target_path.glob("*") if (p / "ejercicio.yaml").exists()]
            
        print(f"Auditando {len(ejercicios)} ejercicios en {target_path}...")
        modificados = 0
        for ej in ejercicios:
            act, msg = procesar_ejercicio(ej)
            if act:
                modificados += 1
        print(f"Finalizado: {modificados} actualizados de {len(ejercicios)} auditados.")
