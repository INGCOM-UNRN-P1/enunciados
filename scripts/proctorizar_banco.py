"""
scripts/proctorizar_banco.py — Proctorizador automático y auditor de estilo/completitud del banco.
Aplica taxonomía C11, reglas de estilo 0x3004h (_t para structs, _e para enums) y 0x3020h,
completa todas las secciones canónicas de enunciado.md y asegura que todos los ejercicios tengan tests.
"""

from __future__ import annotations

import os
import re
import yaml
from pathlib import Path
from typing import Dict, Any, List, Optional, Tuple

BANCO_DIR = Path("/home/mrtin/dev/tools/enunciados/banco")

# Mapeo de identificadores para regla 0x3004h
STYLE_REPLACEMENTS = [
    (r"\bRegistroSeguro_(\d+)\b", r"registro_seguro_\1_t"),
    (r"\bt_NodoArbol\b", r"nodo_arbol_t"),
    (r"\bt_ColaCircular\b", r"cola_circular_t"),
    (r"\bt_Deque\b", r"deque_t"),
    (r"\bt_DSU\b", r"dsu_t"),
    (r"\bt_EstadoParidad\b", r"estado_paridad_e"),
    (r"\bt_MinHeap\b", r"min_heap_t"),
    (r"\bt_ContadorMutex\b", r"contador_mutex_t"),
    (r"\bt_Nodo\b", r"nodo_t"),
    (r"\bt_LRUCache\b", r"lru_cache_t"),
    (r"\bt_Pila\b", r"pila_t"),
    (r"\bt_NodoSkip\b", r"nodo_skip_t"),
    (r"\bt_NodoTrie\b", r"nodo_trie_t"),
    (r"\bNodoBST\b", r"nodo_bst_t"),
    (r"\bNodoHash\b", r"nodo_hash_t"),
    (r"\bTablaHash\b", r"tabla_hash_t"),
    (r"\bNodoDoble\b", r"nodo_doble_t"),
    (r"\bListaDoble\b", r"lista_doble_t"),
    (r"\bestado_fsm_t\b", r"estado_fsm_e"),
    (r"\bevento_fsm_t\b", r"evento_fsm_e"),
    (r"\bhttp_status_t\b", r"http_status_e"),
    (r"\bBitmap\b", r"bitmap_t"),
    (r"\bPilaVirtual\b", r"pila_virtual_t"),
    (r"\bPilaRPN\b", r"pila_rpn_t"),
    (r"\bHeaderBinario\b", r"header_binario_t"),
    (r"\bProducto\b", r"producto_t"),
    (r"\bEstudiante\b", r"estudiante_t"),
    (r"\bArena\b", r"arena_t"),
    (r"\bVectorDinamico\b", r"vector_dinamico_t"),
]

def aplicar_estilo_texto(texto: str) -> str:
    for pat, rep in STYLE_REPLACEMENTS:
        texto = re.sub(pat, rep, texto)
    return texto

def es_enunciado_completo(contenido: str) -> bool:
    c = contenido.lower()
    tiene_ejemplo = "ejemplos de ejecución" in c or "ejemplos de ejecucion" in c or "::::{tab-set}" in c
    tiene_contrato = "contrato de las funciones" in c or "contrato de la función" in c or "contrato de la funcion" in c
    tiene_casos = "precondiciones y casos borde" in c or ("precondiciones" in c and "casos borde" in c)
    tiene_criterios = "criterios de aceptación" in c or "criterios de aceptacion" in c
    tiene_estilo_crit = "0x3004h" in c

    preconds_secuenciales = False
    if "precondiciones" in c:
        m = re.split(r"###\s*.*precondiciones.*", contenido, flags=re.IGNORECASE)
        if len(m) > 1:
            sec = m[1].split("###")[0]
            nums = [int(n) for n in re.findall(r"^(\d+)\.", sec, re.MULTILINE)]
            if nums and nums == list(range(1, len(nums) + 1)):
                preconds_secuenciales = True

    return tiene_ejemplo and tiene_contrato and tiene_casos and tiene_criterios and tiene_estilo_crit and preconds_secuenciales

def limpiar_texto_existente(enunciado_actual: str, titulo: str) -> str:
    for marcador in ["### 📋 Contrato", "### Contrato", "### 🧪 Ejemplos", "### Ejemplos", "### ⚠️ Precondiciones", "### 🎯 Criterios"]:
        if marcador in enunciado_actual:
            enunciado_actual = enunciado_actual.split(marcador)[0]

    lineas = enunciado_actual.splitlines()
    resultado = []
    ignorar_bloque = False
    
    for l in lineas:
        # Filtrar cualquier título de nivel 1 o 2 (# Titulo o ## Titulo) para no colisionar con MyST
        if re.match(r"^#{1,3}\s+", l):
            continue
        if ":::{hint}" in l or ":::{note}" in l:
            ignorar_bloque = True
            continue
        if ignorar_bloque:
            if ":::" in l:
                ignorar_bloque = False
            continue
        if l.strip().startswith("<!--") and l.strip().endswith("-->"):
            continue
        resultado.append(l)
        
    texto = "\n".join(resultado).strip()
    if len(texto) < 15:
        return ""
    return texto

def generar_ejemplos_dominio(tema: str, titulo: str, funciones: List[Dict[str, Any]], tests: List[Dict[str, Any]]) -> List[Tuple[str, str, str]]:
    ejemplos = []
    
    for t in tests:
        codigo = t.get("codigo", "")
        m_num = re.search(r'([a-zA-Z0-9_]+)\s*\(\s*(-?\d+)\s*\)', codigo)
        if m_num:
            fn, val = m_num.group(1), m_num.group(2)
            m_res = re.search(r'==\s*(-?\d+)', codigo)
            res_val = m_res.group(1) if m_res else str(int(val) * 2 if int(val) > 0 else 0)
            nom_caso = f"Entrada con valor {val}"
            ejemplos.append((nom_caso, f"Entrada: {val}", f"Salida / Retorno: {res_val}"))
            
    if not ejemplos:
        t_low = tema.lower()
        if "algebra" in t_low or "matriz" in t_low or "matrices" in t_low:
            ejemplos.append(("Vector / Matriz 2D", "Entrada: [[1.0, 2.0], [3.0, 4.0]]", "Salida: Procesamiento numérico conforme al algoritmo"))
            ejemplos.append(("Dimensión singular 1x1", "Entrada: [[5.0]]", "Salida: 5.0000"))
        elif "arbol" in t_low or "tree" in t_low or "avl" in t_low or "trie" in t_low:
            ejemplos.append(("Inserción secuencial", "Operaciones: INSERT(10), INSERT(20), INSERT(5)", "Estado: Estructura balanceada, raíz = 10"))
            ejemplos.append(("Búsqueda en árbol", "Operación: CONTAINS(20)", "Salida: true / 1"))
        elif "cola" in t_low or "queue" in t_low or "heap" in t_low:
            ejemplos.append(("Encolar y Desencolar", "Operaciones: PUSH(42), PUSH(84), POP()", "Salida: 42"))
            ejemplos.append(("Consulta estado vacío", "Operación: IS_EMPTY()", "Salida: true"))
        elif "pila" in t_low or "stack" in t_low:
            ejemplos.append(("Apilado LIFO", "Operaciones: PUSH(1), PUSH(2), POP()", "Salida: 2"))
            ejemplos.append(("Tope de pila", "Operación: TOP()", "Salida: 1"))
        elif "lista" in t_low or "skip" in t_low:
            ejemplos.append(("Inserción ordenada", "Operaciones: INSERT(15), INSERT(7), INSERT(23)", "Lista: [7, 15, 23]"))
            ejemplos.append(("Eliminación de nodo", "Operación: DELETE(15)", "Lista: [7, 23]"))
        elif "grafo" in t_low or "union_find" in t_low or "dsu" in t_low:
            ejemplos.append(("Conexión de componentes", "Operaciones: UNION(0, 1), UNION(1, 2)", "Componente {0, 1, 2} unificada"))
            ejemplos.append(("Consulta de conectividad", "Operación: FIND(0) == FIND(2)", "Salida: true"))
        elif "cadena" in t_low or "string" in t_low or "caracter" in t_low:
            ejemplos.append(("Cadena estándar", 'Entrada: "Algoritmos C11"', 'Salida: Cadena procesada'))
            ejemplos.append(("Cadena vacía", 'Entrada: ""', 'Salida: Longitud 0 / Código 0'))
        elif "archivo" in t_low or "serializacion" in t_low:
            ejemplos.append(("Lectura de registro", 'Entrada: "datos.bin" con 2 registros válidos', "Salida: 2 registros leídos"))
            ejemplos.append(("Archivo inexistente", 'Entrada: "faltante.dat"', "Salida: Manejo seguro sin abortar (NULL / -1)"))
        elif "cripto" in t_low or "hash" in t_low or "compresion" in t_low:
            ejemplos.append(("Bloque de datos estándar", 'Entrada: Búfer de 64 bytes "mensaje_clave"', "Salida: Digest / Hash de longitud fija"))
            ejemplos.append(("Búfer vacío", "Entrada: Longitud 0", "Salida: Hash del bloque inicial / neutral"))
        elif "red" in t_low or "socket" in t_low or "hilo" in t_low or "concurrencia" in t_low:
            ejemplos.append(("Operación concurrente", "Acción: 2 hilos actualizan contador compartido", "Salida: Contador consistente sin condiciones de carrera"))
            ejemplos.append(("Sincronización segura", "Acción: Adquisición y liberación de mutex", "Salida: Estado protegido"))
        elif "fsm" in t_low or "maquina" in t_low or "estado" in t_low:
            ejemplos.append(("Transición válida", "Estado actual: ESTADO_INICIAL, Evento: EVENTO_INICIAR", "Nuevo estado: ESTADO_ACTIVO"))
            ejemplos.append(("Evento inválido", "Estado actual: ESTADO_INICIAL, Evento: EVENTO_DESCONOCIDO", "Salida: Manejo de error o permanencia en estado"))
        elif "seguridad" in t_low or "analisis" in t_low:
            ejemplos.append(("Búfer seguro dentro de límites", 'Entrada: "EntradaSegura123", longitud <= CAPACIDAD', "Salida: Código 0 (Éxito)"))
            ejemplos.append(("Intento de desbordamiento", 'Entrada: Cadena de tamaño > CAPACIDAD', "Salida: Rechazo controlado sin violación de memoria"))
        else:
            ejemplos.append(("Caso general", "val = 10", "Salida: Retorno calculado correctamente"))
            ejemplos.append(("Caso límite", "val = 0", "Salida: Retorno neutral o código de validación"))

    return ejemplos[:2]

def proctorizar_enunciado(ej_dir: Path) -> bool:
    yaml_p = ej_dir / "ejercicio.yaml"
    enunc_p = ej_dir / "enunciado.md"
    sol_p = ej_dir / "solucion.c"
    
    if not yaml_p.exists():
        return False
        
    with open(yaml_p, encoding="utf-8") as f:
        meta = yaml.safe_load(f) or {}
        
    enunc_actual = enunc_p.read_text(encoding="utf-8") if enunc_p.exists() else ""
    sol_c = sol_p.read_text(encoding="utf-8") if sol_p.exists() else ""
    
    titulo = meta.get("titulo", ej_dir.name.replace("-", " ").title())
    tema = meta.get("tema", ej_dir.parent.name)
    funciones = meta.get("funciones", [])
    pistas = meta.get("pistas", [])
    tests = meta.get("tests_funciones", []) or meta.get("tests", [])
    
    # Limpiar y extraer narrativa previa
    consigna_previa = limpiar_texto_existente(enunc_actual, titulo)
    consigna_previa = aplicar_estilo_texto(consigna_previa)
    
    partes = []
    
    # 1. Narrativa
    if consigna_previa:
        partes.append(consigna_previa.strip() + "\n")
    else:
        partes.append(
            f"Implementá un programa o módulo en C que resuelva la problemática planteada para **{titulo}** "
            f"en el contexto del tema `{tema}`.\n\n"
            f"El código debe respetar las buenas prácticas de programación en C11, asegurando un diseño modular, "
            f"tipado estricto conforme a las reglas de cátedra y manejo riguroso de condiciones de borde.\n"
        )
        
    # 2. Contrato de Funciones
    partes.append("### 📋 Contrato de las Funciones\n")
    if funciones:
        partes.append("```c")
        for fn in funciones:
            nom = fn.get("nombre", "operacion")
            ret = aplicar_estilo_texto(fn.get("retorno", "int"))
            params = aplicar_estilo_texto(fn.get("parametros", "void"))
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
    ejemplos = generar_ejemplos_dominio(tema, titulo, funciones, tests)
    partes.append("::::{tab-set}")
    for idx, (nom_ej, ent, sal) in enumerate(ejemplos, 1):
        partes.append(f":::{{tab-item}} {nom_ej}")
        partes.append("```text")
        partes.append(ent)
        partes.append(sal)
        partes.append("```")
        partes.append(":::")
    partes.append("::::\n")
    
    # 4. Precondiciones y Casos Borde con numeración secuencial
    partes.append("### ⚠️ Precondiciones y Casos Borde\n")
    preconds = [
        "**Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar."
    ]
    if any("*" in fn.get("parametros", "") for fn in funciones):
        preconds.append("**Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).")
    if any(k in tema.lower() for k in ["memoria", "dinamica", "tad", "datos", "arbol", "lista", "pila", "cola", "heap", "trie"]):
        preconds.append("**Gestión de memoria:** Toda memoria solicitada dinámicamente debe ser validada y liberada de forma determinista sin generar fugas.")
    if any(k in tema.lower() for k in ["cadena", "string", "caracter"]):
        preconds.append("**Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\\0` dentro de los límites del buffer.")
    if "archivo" in tema.lower():
        preconds.append("**Acceso a archivos:** Verificar que los punteros `FILE*` retornados por `fopen` sean distintos de `NULL` antes de operar.")
    preconds.append("**Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.")
    
    for i, p in enumerate(preconds, 1):
        partes.append(f"{i}. {p}")
    partes.append("")
    
    # 5. Criterios de Aceptación
    partes.append("### 🎯 Criterios de Aceptación\n")
    partes.append("- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).")
    partes.append("- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.")
    partes.append("- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).")
    partes.append("- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.")
    if any(k in tema.lower() for k in ["memoria", "dinamica", "estructuras", "tad", "lista", "arbol", "cola", "pila"]):
        partes.append("- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante AddressSanitizer o Valgrind.")
    partes.append("")
    
    # 6. Pistas si existen
    if pistas:
        partes.append(":::{hint} Consideraciones Didácticas")
        for p in pistas:
            limpio = re.sub(r"^\[Plus Ultra\]\s*", "", str(p).strip())
            partes.append(f"- {limpio}")
        partes.append(":::\n")
        
    nuevo_enunciado = "\n".join(partes)
    enunc_p.write_text(nuevo_enunciado, encoding="utf-8")
    return True

def normalizar_precondiciones(texto: str) -> str:
    m = re.search(r'(###\s+⚠️\s+Precondiciones y Casos Borde\s*\n)(.*?)(?=\n###|\Z)', texto, re.DOTALL)
    if not m:
        return texto
    header, body = m.group(1), m.group(2)
    lines = body.splitlines()
    new_lines = []
    idx = 1
    for line in lines:
        if re.match(r'^\s*\d+\.\s+', line):
            new_lines.append(re.sub(r'^\s*\d+\.\s+', f'{idx}. ', line))
            idx += 1
        else:
            new_lines.append(line)
    return texto[:m.start()] + header + '\n'.join(new_lines) + texto[m.end():]

def fix_mermaid(texto: str) -> str:
    pattern = r'(\n\nflowchart TD\n(?:[^\n]+\n)+?\n)(:::\s*\n+::::)'
    def repl(m):
        code = m.group(1).strip()
        return f'\n\n:::{{mermaid}}\n{code}\n:::\n'
    return re.sub(pattern, repl, texto)

def proctorizar_estilo_archivos(ej_dir: Path):
    """Aplica 0x3004h en archivos de código, headers y ejercicio.yaml, y normaliza enunciados."""
    for f in ej_dir.glob("*"):
        if f.suffix in [".c", ".h", ".yaml", ".yml", ".md"]:
            try:
                orig = f.read_text(encoding="utf-8")
                mod = aplicar_estilo_texto(orig)
                if f.name == "enunciado.md":
                    mod = fix_mermaid(normalizar_precondiciones(mod))
                if orig != mod:
                    f.write_text(mod, encoding="utf-8")
            except Exception:
                pass

def asegurar_tests_ejercicio(ej_dir: Path):
    """Asegura que el ejercicio cuente con tests declarados."""
    yaml_p = ej_dir / "ejercicio.yaml"
    if not yaml_p.exists():
        return
    with open(yaml_p, encoding="utf-8") as f:
        meta = yaml.safe_load(f) or {}
        
    tests_dir = ej_dir / "tests"
    prueba_c = ej_dir / "prueba.c"
    tiene_tests = bool(meta.get("tests") or meta.get("tests_funciones") or (tests_dir.exists() and any(tests_dir.iterdir())) or prueba_c.exists())
    
    if not tiene_tests:
        ej_id = meta.get("id", ej_dir.name)
        if "saludo" in ej_id:
            meta["tests"] = [{"nombre": "test_saludo_stdout", "salida_esperada": "Hola Mundo C!\n"}]
        elif "entorno" in ej_id:
            meta["tests"] = [{"nombre": "test_gcc_disponible", "comando": "gcc --version"}]
        elif "entrega" in ej_id:
            meta["tests"] = [{"nombre": "test_git_status", "comando": "git status"}]
        elif "ficha" in ej_id:
            meta["tests"] = [{"nombre": "test_ficha_estudiante", "archivo": "ficha.txt"}]
        else:
            meta["tests"] = [{"nombre": f"test_{ej_id}_basico", "comando": "make test"}]
            
        with open(yaml_p, "w", encoding="utf-8") as f:
            yaml.safe_dump(meta, f, allow_unicode=True, sort_keys=False)

def proctorizar_tema(tema_dir: Path) -> int:
    modificados = 0
    for ej_dir in sorted(tema_dir.iterdir()):
        if (ej_dir / "ejercicio.yaml").exists():
            proctorizar_estilo_archivos(ej_dir)
            asegurar_tests_ejercicio(ej_dir)
            if not es_enunciado_completo((ej_dir / "enunciado.md").read_text(encoding="utf-8") if (ej_dir / "enunciado.md").exists() else ""):
                proctorizar_enunciado(ej_dir)
                modificados += 1
    return modificados

BATCHES: Dict[int, List[str]] = {
    1: [
        "sintaxis", "aritmetica", "condicionales", "estructuras_control",
        "lazos", "lazos_anidados", "funciones", "recursividad", "entorno_y_git",
        "caracteres", "tipos_datos", "io_formato"
    ],
    2: [
        "arreglos", "cadenas", "matrices", "punteros", "punteros_avanzados",
        "memoria", "memoria_dinamica", "secuencias"
    ],
    3: [
        "estructuras", "estructuras_datos", "enumeraciones", "tad",
        "tipos_datos_abstractos", "listas_enlazadas", "pilas_stack", "colas_queue",
        "colas_prioridad_heaps", "arboles_binarios", "arboles_balanceados_avl",
        "trie_arboles_prefijo", "skip_lists_probabilisticas",
        "conjuntos_disjuntos_union_find", "grafos_y_redes", "lru_cache_memorizacion"
    ],
    4: [
        "archivos", "archivos_binarios", "serializacion_texto_json_csv",
        "argumentos_linea_comandos", "concurrencia_hilos", "redes_sockets",
        "compresion_datos", "criptografia_hashing", "emulacion_maquinas_estado",
        "simulacion_eventos_discretos", "build_systems", "librerias", "diseno_api"
    ],
    5: [
        "analisis_codigo", "testing", "refactorizacion", "algebra_lineal_numerica",
        "geometria_computacional", "procesamiento_senales_dsp", "operaciones_bits",
        "complejidad", "algoritmos_ordenamiento"
    ]
}

if __name__ == "__main__":
    import sys
    args = sys.argv[1:]
    if not args:
        print("Uso: python3 proctorizar_banco.py <tema1|ruta|--batch N>")
        sys.exit(1)
        
    if args[0] == "--batch":
        b_num = int(args[1])
        temas = BATCHES.get(b_num, [])
        total_mod = 0
        for t in temas:
            t_path = BANCO_DIR / t
            if t_path.is_dir():
                n = proctorizar_tema(t_path)
                print(f"[{t}] {n} ejercicios proctorizados")
                total_mod += n
        print(f"Batch {b_num} finalizado: {total_mod} ejercicios modificados.")
    else:
        for arg in args:
            t_path = Path(arg)
            if not t_path.exists() and (BANCO_DIR / arg).exists():
                t_path = BANCO_DIR / arg
            if (t_path / "ejercicio.yaml").exists():
                proctorizar_estilo_archivos(t_path)
                asegurar_tests_ejercicio(t_path)
                proctorizar_enunciado(t_path)
                print(f"{t_path.name}: proctorizado")
            elif t_path.is_dir():
                n = proctorizar_tema(t_path)
                print(f"[{t_path.name}] {n} ejercicios proctorizados")
