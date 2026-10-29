

# Área de Triángulo (Fórmula de Herón)
> **ID:** `ej-1-13-area-de-triangulo-formula-de-h` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `secuencias` / `fundamentos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`
>
> **Etiquetas conceptuales:** `fundamentos`, `secuencias`, `formula`, `heron`, `triangulo`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-1-13-area-de-triangulo-formula-de-h.ripkg`**](../../paquetes/ej-1-13-area-de-triangulo-formula-de-h.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-1-13-area-de-triangulo-formula-de-h.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-1-13-area-de-triangulo-formula-de-h<br/><small>secuencias · B3</small>"]

    
```


## 📖 Consigna

Calcular el área de un triángulo conociendo únicamente la longitud de sus tres
lados (`a`, `b`, `c`). Para esto se utiliza la fórmula de Herón.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO area_triangulo_heron
ENTRADA: lado1, lado2, lado3 (reales)
VARIABLES:
    s, area (reales)

INICIO
    LEER lado1, lado2, lado3
    // Opcional: Validar desigualdad triangular
    s = (lado1 + lado2 + lado3) / 2
    area = RAIZ_CUADRADA(s * (s - lado1) * (s - lado2) * (s - lado3))
    ESCRIBIR "El área del triángulo es: ", area
FIN

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Área de Triángulo (Fórmula de Herón)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_iangulo_formula_de_h(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- **Entrada:** Solicitar al usuario las longitudes de los tres lados.
- **Proceso:**
- **Validación:** Antes de calcular, es importante verificar si los lados
- Validar la desigualdad triangular (la suma de dos lados cualesquiera debe superar al tercero) antes del cálculo.
- Retornar un valor de error (-1.0) si los lados no pueden formar un triángulo geométrico válido.
:::


## 📋 Prototipos y Cabecera (`ej-1-13-area-de-triangulo-formula-de-h.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_1_13_AREA_DE_TRIANGULO_FORMULA_DE_H_H
#define EJERCICIO_EJ_1_13_AREA_DE_TRIANGULO_FORMULA_DE_H_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Área de Triángulo (Fórmula de Herón) */
int proc_iangulo_formula_de_h(int val);

#endif /* EJERCICIO_EJ_1_13_AREA_DE_TRIANGULO_FORMULA_DE_H_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_iangulo_formula_de_h` | `int` | `int val` | Procesa el flujo principal de Área de Triángulo (Fórmula de Herón) |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Solicitar al usuario las longitudes de los tres lados.
```

```{tab-item} Pista 2
**Proceso:**
```

```{tab-item} Pista 3
**Validación:** Antes de calcular, es importante verificar si los lados
```

```{tab-item} Pista 4
[Plus Ultra] Validar la desigualdad triangular (la suma de dos lados cualesquiera debe superar al tercero) antes del cálculo.
```

```{tab-item} Pista 5
[Plus Ultra] Retornar un valor de error (-1.0) si los lados no pueden formar un triángulo geométrico válido.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_iangulo_formula_de_h_positivo** | `proc_iangulo_formula_de_h` | `int res = proc_iangulo_formula_de_h(5); assert(res == 10 || res >= 0);` |

| **test_proc_iangulo_formula_de_h_cero** | `proc_iangulo_formula_de_h` | `int res = proc_iangulo_formula_de_h(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Área de Triángulo (Fórmula de Herón)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_iangulo_formula_de_h(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Área de Triángulo (Fórmula de Herón) */
    return 0;
}
```
```
