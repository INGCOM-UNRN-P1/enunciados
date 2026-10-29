

# Ejecutor de menú
> **ID:** `ej-20-24-ejecutor-de-menu` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `ejecutor`, `tipos`, `enum`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-24-ejecutor-de-menu.ripkg`**](../../paquetes/ej-20-24-ejecutor-de-menu.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-24-ejecutor-de-menu.ripkg
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
    
    

    current_node["🎯 ej-20-24-ejecutor-de-menu<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.24 - Ejecutor de menú ⭐⭐☆☆☆

Implementar una función que ejecute la acción correspondiente a cada opción del
menú.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void ejecutar_opcion(enum opcion_menu opcion);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-20-24-ejecutor-de-menu.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_24_EJECUTOR_DE_MENU_H
#define EJERCICIO_EJ_20_24_EJECUTOR_DE_MENU_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ejecutor de menú */
int proc__24_ejecutor_de_menu(int val);

#endif /* EJERCICIO_EJ_20_24_EJECUTOR_DE_MENU_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__24_ejecutor_de_menu` | `int` | `int val` | Procesa el flujo principal de Ejecutor de menú |






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

| **test_proc__24_ejecutor_de_menu_positivo** | `proc__24_ejecutor_de_menu` | `int res = proc__24_ejecutor_de_menu(5); assert(res == 10 || res >= 0);` |

| **test_proc__24_ejecutor_de_menu_cero** | `proc__24_ejecutor_de_menu` | `int res = proc__24_ejecutor_de_menu(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ejecutor de menú
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__24_ejecutor_de_menu(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ejecutor de menú */
    return 0;
}
```
```
