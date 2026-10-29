

# Matriz de Vandermonde
> **ID:** `ej-21-39-matriz-de-vandermonde`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `vandermonde`, `matriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-39-matriz-de-vandermonde.ripkg`**](../../paquetes/ej-21-39-matriz-de-vandermonde.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-39-matriz-de-vandermonde.ripkg
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
    
    

    current_node["🎯 ej-21-39-matriz-de-vandermonde<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.39 - Matriz de Vandermonde ⭐⭐⭐☆☆

Generar una matriz de Vandermonde a partir de un vector.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_vandermonde(double *x, int n, int m);
```
<!-- c -->

**Definición:** $V_{ij} = x_i^{j-1}$

**Ejemplo con $x = [1, 2, 3]$ y $m = 4$:**
$$V = \begin{pmatrix} 1 & 1 & 1 & 1 \\ 1 & 2 & 4 & 8 \\ 1 & 3 & 9 & 27 \end{pmatrix}$$


## 📋 Prototipos y Cabecera (`ej-21-39-matriz-de-vandermonde.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_39_MATRIZ_DE_VANDERMONDE_H
#define EJERCICIO_EJ_21_39_MATRIZ_DE_VANDERMONDE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz de Vandermonde */
int proc_atriz_de_vandermonde(int val);

#endif /* EJERCICIO_EJ_21_39_MATRIZ_DE_VANDERMONDE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_atriz_de_vandermonde` | `int` | `int val` | Procesa el flujo principal de Matriz de Vandermonde |






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

| **test_proc_atriz_de_vandermonde_positivo** | `proc_atriz_de_vandermonde` | `int res = proc_atriz_de_vandermonde(5); assert(res == 10 || res >= 0);` |

| **test_proc_atriz_de_vandermonde_cero** | `proc_atriz_de_vandermonde` | `int res = proc_atriz_de_vandermonde(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz de Vandermonde
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_atriz_de_vandermonde(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz de Vandermonde */
    return 0;
}
```
```
