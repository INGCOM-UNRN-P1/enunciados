

# Stack vs Heap
> **ID:** `ej-15-30-b29-stack-vs-heap` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-30-b29-stack-vs-heap.ripkg`**](../../paquetes/ej-15-30-b29-stack-vs-heap.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-30-b29-stack-vs-heap.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["punteros"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-15-30-b29-stack-vs-heap<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

**Pregunta:** ¿Por qué no podemos simplemente usar el stack para todas las
asignaciones de memoria? ¿Qué limitaciones tiene?

**Respuesta esperada:** El stack tiene tamaño limitado (típicamente 1-8 MB),
crece automáticamente en cada llamada a función, y su memoria tiene scope
limitado al bloque actual. El heap permite asignaciones grandes, persistencia
más allá del scope, y tamaño determinado en runtime.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Stack vs Heap
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_30_b29_stack_vs_heap(int val);

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
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
:::


## 📋 Prototipos y Cabecera (`ej-15-30-b29-stack-vs-heap.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_30_B29_STACK_VS_HEAP_H
#define EJERCICIO_EJ_15_30_B29_STACK_VS_HEAP_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Stack vs Heap */
int proc_30_b29_stack_vs_heap(int val);

#endif /* EJERCICIO_EJ_15_30_B29_STACK_VS_HEAP_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_30_b29_stack_vs_heap` | `int` | `int val` | Procesa el flujo principal de Stack vs Heap |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_30_b29_stack_vs_heap_positivo** | `proc_30_b29_stack_vs_heap` | `int res = proc_30_b29_stack_vs_heap(5); assert(res == 10 || res >= 0);` |

| **test_proc_30_b29_stack_vs_heap_cero** | `proc_30_b29_stack_vs_heap` | `int res = proc_30_b29_stack_vs_heap(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.29 - Stack vs Heap
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_30_b29_stack_vs_heap(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.29 - Stack vs Heap */
    return 0;
}
```
```
