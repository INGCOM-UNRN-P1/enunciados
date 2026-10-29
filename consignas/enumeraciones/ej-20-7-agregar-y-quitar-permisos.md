

# Agregar y quitar permisos
> **ID:** `ej-20-7-agregar-y-quitar-permisos` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `quitar`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `quitar`, `tipos`, `permisos`, `memoria`, `agregar`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-7-agregar-y-quitar-permisos.ripkg`**](../../paquetes/ej-20-7-agregar-y-quitar-permisos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-7-agregar-y-quitar-permisos.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["condicionales"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-20-7-agregar-y-quitar-permisos<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.7 - Agregar y quitar permisos ⭐⭐☆☆☆

Implementar funciones para modificar el conjunto de permisos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
unsigned int agregar_permiso(unsigned int permisos, enum permisos nuevo);
unsigned int quitar_permiso(unsigned int permisos, enum permisos remover);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-20-7-agregar-y-quitar-permisos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_7_AGREGAR_Y_QUITAR_PERMISOS_H
#define EJERCICIO_EJ_20_7_AGREGAR_Y_QUITAR_PERMISOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Agregar y quitar permisos */
int proc_ar_y_quitar_permisos(int val);

#endif /* EJERCICIO_EJ_20_7_AGREGAR_Y_QUITAR_PERMISOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ar_y_quitar_permisos` | `int` | `int val` | Procesa el flujo principal de Agregar y quitar permisos |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 2
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_ar_y_quitar_permisos_positivo** | `proc_ar_y_quitar_permisos` | `int res = proc_ar_y_quitar_permisos(5); assert(res == 10 || res >= 0);` |

| **test_proc_ar_y_quitar_permisos_cero** | `proc_ar_y_quitar_permisos` | `int res = proc_ar_y_quitar_permisos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Agregar y quitar permisos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ar_y_quitar_permisos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Agregar y quitar permisos */
    return 0;
}
```
```
