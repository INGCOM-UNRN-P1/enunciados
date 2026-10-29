

# Mensaje de error
> **ID:** `ej-20-13-mensaje-de-error`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `error`, `tipos`, `mensaje`, `memoria`, `enum`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-13-mensaje-de-error.ripkg`**](../../paquetes/ej-20-13-mensaje-de-error.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-13-mensaje-de-error.ripkg
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
    
    

    current_node["🎯 ej-20-13-mensaje-de-error<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.13 - Mensaje de error ⭐⭐☆☆☆

Implementar una función que retorne un mensaje descriptivo para cada código de
error.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
const char *mensaje_error(enum codigo_error error);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-20-13-mensaje-de-error.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_13_MENSAJE_DE_ERROR_H
#define EJERCICIO_EJ_20_13_MENSAJE_DE_ERROR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Mensaje de error */
int proc__13_mensaje_de_error(int val);

#endif /* EJERCICIO_EJ_20_13_MENSAJE_DE_ERROR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__13_mensaje_de_error` | `int` | `int val` | Procesa el flujo principal de Mensaje de error |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__13_mensaje_de_error_positivo** | `proc__13_mensaje_de_error` | `int res = proc__13_mensaje_de_error(5); assert(res == 10 || res >= 0);` |

| **test_proc__13_mensaje_de_error_cero** | `proc__13_mensaje_de_error` | `int res = proc__13_mensaje_de_error(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Mensaje de error
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__13_mensaje_de_error(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Mensaje de error */
    return 0;
}
```
```
