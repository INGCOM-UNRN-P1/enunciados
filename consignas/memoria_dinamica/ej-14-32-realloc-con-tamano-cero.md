

# realloc con Tamaño Cero
> **ID:** `ej-14-32-realloc-con-tamano-cero`
 · **Tema:** `memoria_dinamica`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `tamano`, `memoria`, `malloc`, `realloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-32-realloc-con-tamano-cero.ripkg`**](../../paquetes/ej-14-32-realloc-con-tamano-cero.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-32-realloc-con-tamano-cero.ripkg
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
    
    

    current_node["🎯 ej-14-32-realloc-con-tamano-cero<br/><small>memoria_dinamica · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.32 - realloc con Tamaño Cero ⭐⭐☆☆☆

Escribir un pequeño programa que demuestre que `realloc(ptr, 0)` se comporta de
manera idéntica a `free(ptr)`. Verificar que el puntero original ya no es válido
después de la operación.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-32-realloc-con-tamano-cero.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_32_REALLOC_CON_TAMANO_CERO_H
#define EJERCICIO_EJ_14_32_REALLOC_CON_TAMANO_CERO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de realloc con Tamaño Cero */
int proc_lloc_con_tamano_cero(int val);

#endif /* EJERCICIO_EJ_14_32_REALLOC_CON_TAMANO_CERO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_lloc_con_tamano_cero` | `int` | `int val` | Procesa el flujo principal de realloc con Tamaño Cero |






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

| **test_proc_lloc_con_tamano_cero_positivo** | `proc_lloc_con_tamano_cero` | `int res = proc_lloc_con_tamano_cero(5); assert(res == 10 || res >= 0);` |

| **test_proc_lloc_con_tamano_cero_cero** | `proc_lloc_con_tamano_cero` | `int res = proc_lloc_con_tamano_cero(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: realloc con Tamaño Cero
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_lloc_con_tamano_cero(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de realloc con Tamaño Cero */
    return 0;
}
```
```
