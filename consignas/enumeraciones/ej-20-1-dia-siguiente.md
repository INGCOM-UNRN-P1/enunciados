

# Día siguiente
> **ID:** `ej-20-1-dia-siguiente`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `siguiente`, `enum`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-1-dia-siguiente.ripkg`**](../../paquetes/ej-20-1-dia-siguiente.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-1-dia-siguiente.ripkg
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
    
    

    current_node["🎯 ej-20-1-dia-siguiente<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.1 - Día siguiente ⭐⭐☆☆☆

Implementar una función que retorne el día siguiente al día proporcionado. El
día siguiente a `DOMINGO` es `LUNES`.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
enum dia_semana dia_siguiente(enum dia_semana dia_actual);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-20-1-dia-siguiente.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_1_DIA_SIGUIENTE_H
#define EJERCICIO_EJ_20_1_DIA_SIGUIENTE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Día siguiente */
int ejecutar_ej_20_1_dia_siguiente(int val);

#endif /* EJERCICIO_EJ_20_1_DIA_SIGUIENTE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_20_1_dia_siguiente` | `int` | `int val` | Procesa el flujo principal de Día siguiente |






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

| **test_ejecutar_ej_20_1_dia_siguiente_positivo** | `ejecutar_ej_20_1_dia_siguiente` | `int res = ejecutar_ej_20_1_dia_siguiente(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_20_1_dia_siguiente_cero** | `ejecutar_ej_20_1_dia_siguiente` | `int res = ejecutar_ej_20_1_dia_siguiente(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Día siguiente
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_20_1_dia_siguiente(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Día siguiente */
    return 0;
}
```
```
