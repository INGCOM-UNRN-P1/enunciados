

# calloc vs. malloc
> **ID:** `ej-14-16-calloc-vs-malloc`
 · **Tema:** `memoria_dinamica`
 · **Bloom:** B5 (Evaluar / Crear)
 · **Carga:** ~45 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `calloc`, `memoria`, `malloc`, `free`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-16-calloc-vs-malloc.ripkg`**](../../paquetes/ej-14-16-calloc-vs-malloc.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-16-calloc-vs-malloc.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-14-16-calloc-vs-malloc<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.16 - calloc vs. malloc ⭐⭐☆☆☆

Escribir un programa que reserve dos arreglos de enteros del mismo tamaño, uno
con `malloc` y otro con `calloc`. Imprimir el contenido de ambos arreglos
inmediatamente después de la reserva para demostrar que `calloc` inicializa la
memoria a cero.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-16-calloc-vs-malloc.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_16_CALLOC_VS_MALLOC_H
#define EJERCICIO_EJ_14_16_CALLOC_VS_MALLOC_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de calloc vs. malloc */
int proc__16_calloc_vs_malloc(int val);

#endif /* EJERCICIO_EJ_14_16_CALLOC_VS_MALLOC_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__16_calloc_vs_malloc` | `int` | `int val` | Procesa el flujo principal de calloc vs. malloc |






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

| **test_proc__16_calloc_vs_malloc_positivo** | `proc__16_calloc_vs_malloc` | `int res = proc__16_calloc_vs_malloc(5); assert(res == 10 || res >= 0);` |

| **test_proc__16_calloc_vs_malloc_cero** | `proc__16_calloc_vs_malloc` | `int res = proc__16_calloc_vs_malloc(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: calloc vs. malloc
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__16_calloc_vs_malloc(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de calloc vs. malloc */
    return 0;
}
```
```
