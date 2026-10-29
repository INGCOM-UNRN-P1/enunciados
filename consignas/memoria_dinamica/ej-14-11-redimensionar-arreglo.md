

# Redimensionar Arreglo
> **ID:** `ej-14-11-redimensionar-arreglo` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `arreglo`, `memoria`, `redimensionar`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-11-redimensionar-arreglo.ripkg`**](../../paquetes/ej-14-11-redimensionar-arreglo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-11-redimensionar-arreglo.ripkg
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
    
    

    current_node["🎯 ej-14-11-redimensionar-arreglo<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.11 - Redimensionar Arreglo ⭐⭐⭐☆☆

Implementar una función `int* redimensionar_arreglo(int* arr, size_t
nuevo_tamano)` que utilice `realloc` para cambiar el tamaño de un arreglo
dinámico. La función debe manejar tanto la expansión como la contracción del
arreglo y gestionar posibles fallos de `realloc`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-11-redimensionar-arreglo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_11_REDIMENSIONAR_ARREGLO_H
#define EJERCICIO_EJ_14_11_REDIMENSIONAR_ARREGLO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Redimensionar Arreglo */
int proc_edimensionar_arreglo(int val);

#endif /* EJERCICIO_EJ_14_11_REDIMENSIONAR_ARREGLO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_edimensionar_arreglo` | `int` | `int val` | Procesa el flujo principal de Redimensionar Arreglo |






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

| **test_proc_edimensionar_arreglo_positivo** | `proc_edimensionar_arreglo` | `int res = proc_edimensionar_arreglo(5); assert(res == 10 || res >= 0);` |

| **test_proc_edimensionar_arreglo_cero** | `proc_edimensionar_arreglo` | `int res = proc_edimensionar_arreglo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Redimensionar Arreglo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_edimensionar_arreglo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Redimensionar Arreglo */
    return 0;
}
```
```
