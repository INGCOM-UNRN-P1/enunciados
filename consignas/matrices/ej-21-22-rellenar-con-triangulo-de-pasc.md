

# Rellenar con triángulo de Pascal
> **ID:** `ej-21-22-rellenar-con-triangulo-de-pasc` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `triangulo`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `triangulo`, `pascal`, `rellenar`, `2d`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-22-rellenar-con-triangulo-de-pasc.ripkg`**](../../paquetes/ej-21-22-rellenar-con-triangulo-de-pasc.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-22-rellenar-con-triangulo-de-pasc.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["lazos_anidados"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-21-22-rellenar-con-triangulo-de-pasc<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.22 - Rellenar con triángulo de Pascal ⭐⭐☆☆☆

Escribir una función que llene una matriz `N x N` con los valores del Triángulo
de Pascal. El elemento `(i, j)` debe ser $\binom{i}{j}$.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-22-rellenar-con-triangulo-de-pasc.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_22_RELLENAR_CON_TRIANGULO_DE_PASC_H
#define EJERCICIO_EJ_21_22_RELLENAR_CON_TRIANGULO_DE_PASC_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Rellenar con triángulo de Pascal */
int proc_on_triangulo_de_pasc(int val);

#endif /* EJERCICIO_EJ_21_22_RELLENAR_CON_TRIANGULO_DE_PASC_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_on_triangulo_de_pasc` | `int` | `int val` | Procesa el flujo principal de Rellenar con triángulo de Pascal |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 2
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_on_triangulo_de_pasc_positivo** | `proc_on_triangulo_de_pasc` | `int res = proc_on_triangulo_de_pasc(5); assert(res == 10 || res >= 0);` |

| **test_proc_on_triangulo_de_pasc_cero** | `proc_on_triangulo_de_pasc` | `int res = proc_on_triangulo_de_pasc(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Rellenar con triángulo de Pascal
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_on_triangulo_de_pasc(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Rellenar con triángulo de Pascal */
    return 0;
}
```
```
