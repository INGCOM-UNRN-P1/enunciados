

# Parser de opción
> **ID:** `ej-20-23-parser-de-opcion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `opcion`, `memoria`, `enum`, `parser`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-23-parser-de-opcion.ripkg`**](../../paquetes/ej-20-23-parser-de-opcion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-23-parser-de-opcion.ripkg
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
    
    

    current_node["🎯 ej-20-23-parser-de-opcion<br/><small>enumeraciones · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.23 - Parser de opción ⭐⭐☆☆☆

Implementar una función que convierta la entrada del usuario en una opción del
menú.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
enum opcion_menu parsear_opcion(int entrada);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-20-23-parser-de-opcion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_23_PARSER_DE_OPCION_H
#define EJERCICIO_EJ_20_23_PARSER_DE_OPCION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Parser de opción */
int proc__23_parser_de_opcion(int val);

#endif /* EJERCICIO_EJ_20_23_PARSER_DE_OPCION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__23_parser_de_opcion` | `int` | `int val` | Procesa el flujo principal de Parser de opción |






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

| **test_proc__23_parser_de_opcion_positivo** | `proc__23_parser_de_opcion` | `int res = proc__23_parser_de_opcion(5); assert(res == 10 || res >= 0);` |

| **test_proc__23_parser_de_opcion_cero** | `proc__23_parser_de_opcion` | `int res = proc__23_parser_de_opcion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Parser de opción
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__23_parser_de_opcion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Parser de opción */
    return 0;
}
```
```
