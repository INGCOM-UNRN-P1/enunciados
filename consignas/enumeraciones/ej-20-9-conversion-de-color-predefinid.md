

# Conversión de color predefinido a RGB
> **ID:** `ej-20-9-conversion-de-color-predefinid` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `conversion`, `tipos`, `predefinido`, `memoria`, `enum`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-9-conversion-de-color-predefinid.ripkg`**](../../paquetes/ej-20-9-conversion-de-color-predefinid.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-9-conversion-de-color-predefinid.ripkg
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
    
    

    current_node["🎯 ej-20-9-conversion-de-color-predefinid<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.9 - Conversión de color predefinido a RGB ⭐⭐☆☆☆

Implementar una función que convierta un color predefinido a sus componentes
RGB.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
rgb_t color_a_rgb(enum color_predefinido color);
```
<!-- c -->

**Valores sugeridos:**
- `COLOR_ROJO`: (255, 0, 0)
- `COLOR_VERDE`: (0, 255, 0)
- `COLOR_AZUL`: (0, 0, 255)
- `COLOR_AMARILLO`: (255, 255, 0)


## 📋 Prototipos y Cabecera (`ej-20-9-conversion-de-color-predefinid.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_9_CONVERSION_DE_COLOR_PREDEFINID_H
#define EJERCICIO_EJ_20_9_CONVERSION_DE_COLOR_PREDEFINID_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Conversión de color predefinido a RGB */
int proc__de_color_predefinid(int val);

#endif /* EJERCICIO_EJ_20_9_CONVERSION_DE_COLOR_PREDEFINID_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__de_color_predefinid` | `int` | `int val` | Procesa el flujo principal de Conversión de color predefinido a RGB |






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

| **test_proc__de_color_predefinid_positivo** | `proc__de_color_predefinid` | `int res = proc__de_color_predefinid(5); assert(res == 10 || res >= 0);` |

| **test_proc__de_color_predefinid_cero** | `proc__de_color_predefinid` | `int res = proc__de_color_predefinid(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Conversión de color predefinido a RGB
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__de_color_predefinid(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Conversión de color predefinido a RGB */
    return 0;
}
```
```
