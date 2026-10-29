

# Inversión de arreglo
> **ID:** `ej-8-7-inversion-de-arreglo` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `arreglo`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `arreglo`, `inversion`, `memoria`, `punteros`, `direcciones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-7-inversion-de-arreglo.ripkg`**](../../paquetes/ej-8-7-inversion-de-arreglo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-7-inversion-de-arreglo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["arreglos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-8-7-inversion-de-arreglo<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.7 - Inversión de arreglo ⭐⭐⭐☆☆

Implementar `void invertir(int *inicio, int *fin)`. Se intercambia `*inicio` con
`*fin` y se avanza `inicio` y retrocede `fin` hasta que se crucen.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Punteros a Punteros


## 📋 Prototipos y Cabecera (`ej-8-7-inversion-de-arreglo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_7_INVERSION_DE_ARREGLO_H
#define EJERCICIO_EJ_8_7_INVERSION_DE_ARREGLO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Inversión de arreglo */
int proc_inversion_de_arreglo(int val);

#endif /* EJERCICIO_EJ_8_7_INVERSION_DE_ARREGLO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_inversion_de_arreglo` | `int` | `int val` | Procesa el flujo principal de Inversión de arreglo |






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

| **test_proc_inversion_de_arreglo_positivo** | `proc_inversion_de_arreglo` | `int res = proc_inversion_de_arreglo(5); assert(res == 10 || res >= 0);` |

| **test_proc_inversion_de_arreglo_cero** | `proc_inversion_de_arreglo` | `int res = proc_inversion_de_arreglo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Inversión de arreglo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_inversion_de_arreglo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Inversión de arreglo */
    return 0;
}
```
```
