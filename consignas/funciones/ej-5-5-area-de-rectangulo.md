

# Área de rectángulo
> **ID:** `ej-5-5-area-de-rectangulo`
 · **Tema:** `funciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-5-area-de-rectangulo.ripkg`**](../../paquetes/ej-5-5-area-de-rectangulo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-5-area-de-rectangulo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
        node_pre_2["secuencias"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-5-5-area-de-rectangulo<br/><small>funciones · B2</small>"]

    
```


## 📖 Consigna

# Área de rectángulo

### Ejercicio 5.5 - Área de rectángulo ⭐⭐☆☆☆

:::{exercise}
:label: funcion_area
Implementá una función `area_rectangulo` que reciba base y altura, y devuelva el
área.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que la base y la altura sean valores positivos (`@pre base > 0 && altura > 0`).
-   **[*plus ultra*]:** Implementar una función complementaria para calcular el perímetro.

:::
<!-- {exercise} -->

:::{solution} funcion_area
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int area_rectangulo(int base, int altura)
{
    return base * altura;
}
int main(void)
{
    printf("Área: %d\n", area_rectangulo(5, 4));
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} funcion_area -->
(ejercicio_5_6)=


## 📋 Prototipos y Cabecera (`ej-5-5-area-de-rectangulo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_5_AREA_DE_RECTANGULO_H
#define EJERCICIO_EJ_5_5_AREA_DE_RECTANGULO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación area_rectangulo */
int area_rectangulo(int base, int altura);

#endif /* EJERCICIO_EJ_5_5_AREA_DE_RECTANGULO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_5` | `int` | `int n` | Lógica de Área de rectángulo |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_5** | `resolver_ej_5` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
int area_rectangulo(int base, int altura)
{
    return base * altura;
}
int main(void)
{
    printf("Área: %d\n", area_rectangulo(5, 4));
    return 0;
}
```
```
