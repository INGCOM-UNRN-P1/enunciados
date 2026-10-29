

# Doble de un número
> **ID:** `ej-5-1-doble-de-un-numero`
 · **Tema:** `funciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-1-doble-de-un-numero.ripkg`**](../../paquetes/ej-5-1-doble-de-un-numero.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-1-doble-de-un-numero.ripkg
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
    
    

    current_node["🎯 ej-5-1-doble-de-un-numero<br/><small>funciones · B2</small>"]

    
```


## 📖 Consigna

# Doble de un número

### Ejercicio 5.1 - Doble de un número ⭐⭐☆☆☆

:::{exercise}
:label: ej-funcion-doble
Escribí una función que reciba un número entero y devuelva su doble:

- `int doble(int n);`

Probala desde `main()` con distintos valores y aserciones.

-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen (`@param`, `@return`).
-   **[*plus ultra*]:** Escribir una función de prueba con assert() que verifique casos positivos, negativos y cero.

:::
<!-- {exercise} -->

:::{solution} ej-funcion-doble
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int doble(int n)
{
    return 2 * n;
}
int main(void)
{
    printf("Doble de 5: %d\n", doble(5));
    printf("Doble de 12: %d\n", doble(12));
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} ej-funcion-doble -->
(ejercicio_5_2)=


## 📋 Prototipos y Cabecera (`ej-5-1-doble-de-un-numero.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_1_DOBLE_DE_UN_NUMERO_H
#define EJERCICIO_EJ_5_1_DOBLE_DE_UN_NUMERO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación doble */
int doble(int n);

#endif /* EJERCICIO_EJ_5_1_DOBLE_DE_UN_NUMERO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `doble` | `int` | `int n` | Devuelve el doble de n |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_doble_pos** | `doble` | `assert(doble(5) == 10);` |

| **test_doble_cero** | `doble` | `assert(doble(0) == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
int doble(int n)
{
    return 2 * n;
}
int main(void)
{
    printf("Doble de 5: %d\n", doble(5));
    printf("Doble de 12: %d\n", doble(12));
    return 0;
}
```
```
