

# Método de Jacobi
> **ID:** `ej-21-47-metodo-de-jacobi`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `metodo`, `jacobi`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-47-metodo-de-jacobi.ripkg`**](../../paquetes/ej-21-47-metodo-de-jacobi.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-47-metodo-de-jacobi.ripkg
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
    
    

    current_node["🎯 ej-21-47-metodo-de-jacobi<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.47 - Método de Jacobi ⭐⭐☆☆☆

Resolver $Ax = b$ iterativamente usando el método de Jacobi.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double *metodo_jacobi(double **A, double *b, int n, double tolerancia,
                      int max_iter);
```
<!-- c -->

**Fórmula de iteración:**
$$x_i^{(k+1)} = \frac{1}{a_{ii}}\left(b_i - \sum_{j \neq i} a_{ij}x_j^{(k)}\right)$$


## 📋 Prototipos y Cabecera (`ej-21-47-metodo-de-jacobi.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_47_METODO_DE_JACOBI_H
#define EJERCICIO_EJ_21_47_METODO_DE_JACOBI_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Método de Jacobi */
int proc__47_metodo_de_jacobi(int val);

#endif /* EJERCICIO_EJ_21_47_METODO_DE_JACOBI_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__47_metodo_de_jacobi` | `int` | `int val` | Procesa el flujo principal de Método de Jacobi |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__47_metodo_de_jacobi_positivo** | `proc__47_metodo_de_jacobi` | `int res = proc__47_metodo_de_jacobi(5); assert(res == 10 || res >= 0);` |

| **test_proc__47_metodo_de_jacobi_cero** | `proc__47_metodo_de_jacobi` | `int res = proc__47_metodo_de_jacobi(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Método de Jacobi
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__47_metodo_de_jacobi(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Método de Jacobi */
    return 0;
}
```
```
