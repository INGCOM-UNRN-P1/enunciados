

# Matriz Irregular (Ragged Array)
> **ID:** `ej-14-21-matriz-irregular-ragged-array` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `matrices_2d`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `irregular`, `array`, `ragged`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-21-matriz-irregular-ragged-array.ripkg`**](../../paquetes/ej-14-21-matriz-irregular-ragged-array.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-21-matriz-irregular-ragged-array.ripkg
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
    
    

    current_node["🎯 ej-14-21-matriz-irregular-ragged-array<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.21 - Matriz Irregular (Ragged Array) ⭐⭐⭐☆☆

Reservar memoria para una matriz dinámica donde cada fila puede tener un número
diferente de columnas. Las dimensiones (número de columnas de cada fila) se
deben leer de un arreglo de configuración.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-21-matriz-irregular-ragged-array.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_21_MATRIZ_IRREGULAR_RAGGED_ARRAY_H
#define EJERCICIO_EJ_14_21_MATRIZ_IRREGULAR_RAGGED_ARRAY_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz Irregular (Ragged Array) */
int proc_regular_ragged_array(int val);

#endif /* EJERCICIO_EJ_14_21_MATRIZ_IRREGULAR_RAGGED_ARRAY_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_regular_ragged_array` | `int` | `int val` | Procesa el flujo principal de Matriz Irregular (Ragged Array) |






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

| **test_proc_regular_ragged_array_positivo** | `proc_regular_ragged_array` | `int res = proc_regular_ragged_array(5); assert(res == 10 || res >= 0);` |

| **test_proc_regular_ragged_array_cero** | `proc_regular_ragged_array` | `int res = proc_regular_ragged_array(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz Irregular (Ragged Array)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_regular_ragged_array(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz Irregular (Ragged Array) */
    return 0;
}
```
```
