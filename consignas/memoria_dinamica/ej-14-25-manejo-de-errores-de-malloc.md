

# Manejo de Errores de malloc
> **ID:** `ej-14-25-manejo-de-errores-de-malloc`
 · **Tema:** `memoria_dinamica`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `errores`, `memoria`, `malloc`, `free`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-25-manejo-de-errores-de-malloc.ripkg`**](../../paquetes/ej-14-25-manejo-de-errores-de-malloc.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-25-manejo-de-errores-de-malloc.ripkg
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
    
    

    current_node["🎯 ej-14-25-manejo-de-errores-de-malloc<br/><small>memoria_dinamica · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.25 - Manejo de Errores de malloc ⭐⭐☆☆☆

Modificar uno de los ejercicios anteriores (ej. 1.2, Duplicadora) para que, si
`malloc` o `realloc` devuelven `NULL`, el programa lo notifique con un mensaje
de error claro a `stderr` y termine de forma controlada (ej.
`exit(EXIT_FAILURE)`), en lugar de fallar por desreferenciar un puntero nulo.

## Más Ejercicios de Memoria Dinámica
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-25-manejo-de-errores-de-malloc.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_25_MANEJO_DE_ERRORES_DE_MALLOC_H
#define EJERCICIO_EJ_14_25_MANEJO_DE_ERRORES_DE_MALLOC_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Manejo de Errores de malloc */
int proc_de_errores_de_malloc(int val);

#endif /* EJERCICIO_EJ_14_25_MANEJO_DE_ERRORES_DE_MALLOC_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_de_errores_de_malloc` | `int` | `int val` | Procesa el flujo principal de Manejo de Errores de malloc |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_de_errores_de_malloc_positivo** | `proc_de_errores_de_malloc` | `int res = proc_de_errores_de_malloc(5); assert(res == 10 || res >= 0);` |

| **test_proc_de_errores_de_malloc_cero** | `proc_de_errores_de_malloc` | `int res = proc_de_errores_de_malloc(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Manejo de Errores de malloc
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_de_errores_de_malloc(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Manejo de Errores de malloc */
    return 0;
}
```
```
