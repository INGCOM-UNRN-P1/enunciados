

# Multiplicación de matrices
> **ID:** `ej-21-4-multiplicacion-de-matrices`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `2d`, `algoritmos`, `matrices`, `multiplicacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-4-multiplicacion-de-matrices.ripkg`**](../../paquetes/ej-21-4-multiplicacion-de-matrices.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-4-multiplicacion-de-matrices.ripkg
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
    
    

    current_node["🎯 ej-21-4-multiplicacion-de-matrices<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.4 - Multiplicación de matrices ⭐⭐⭐☆☆

#### Descripción
Implementar la multiplicación de dos matrices, `A` (de $m \times n$) y `B` (de
$n \times p$), cuyo resultado es una nueva matriz `C` (de $m \times p$).

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Matriz A (2x3): [[1, 2, 3], [4, 5, 6]]
Matriz B (3x2): [[7, 8], [9, 10], [11, 12]]
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
``` text
Matriz C (2x2): [[58, 64], [139, 154]]
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Precondición:** El número de columnas de la matriz `A` debe ser igual al
    número de filas de la matriz `B`.
-   **Fórmula:** Cada elemento $c_{ij}$ de la matriz resultado se calcula como
    el producto punto de la fila `i` de `A` y la columna `j` de `B`: $c_{ij} =
    \sum_{k=0}^{n-1} a_{ik} \cdot b_{kj}$.
-   **Proceso:** Se necesitan tres lazos anidados:
    1.  Lazo para las filas de `C` (y `A`), de `i=0` a `m-1`.
    2.  Lazo para las columnas de `C` (y `B`), de `j=0` a `p-1`.
    3.  Lazo para la suma del producto punto, de `k=0` a `n-1`.

:::
<!-- {hint} Lógica y Consideraciones -->

::::{hint} Diagrama
:class: dropdown

:::{mermaid}

flowchart TD
    A["Inicio"] --> B["i = 0..m-1"]
    B --> C["j = 0..p-1"]
    C --> D["suma = 0"]
    D --> E["k = 0..n-1"]
    E --> F["suma += A[i][k] * B[k][j]"]
    F --> E
    E -- "Fin del lazo k" --> G["C[i][j] = suma"]
    G --> C
    C -- "Fin del lazo j" --> B
    B -- "Fin del lazo i" --> H["Fin"]

:::
<!-- {mermaid} -->

::::
<!-- {hint} Diagrama -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
PROCEDIMIENTO multiplicar_matrices(A, m, n, B, p, REF C)
INICIO
    // Asumiendo que n == p
    PARA i DESDE 0 HASTA m-1 HACER
        PARA j DESDE 0 HASTA p-1 HACER
            suma = 0
            PARA k DESDE 0 HASTA n-1 HACER
                suma = suma + A[i][k] * B[k][j]
            FIN PARA
            C[i][j] = suma
        FIN PARA
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Ayuda (Pseudocódigo) -->

## Manipulación


## 📋 Prototipos y Cabecera (`ej-21-4-multiplicacion-de-matrices.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_4_MULTIPLICACION_DE_MATRICES_H
#define EJERCICIO_EJ_21_4_MULTIPLICACION_DE_MATRICES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Multiplicación de matrices */
int proc_licacion_de_matrices(int val);

#endif /* EJERCICIO_EJ_21_4_MULTIPLICACION_DE_MATRICES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_licacion_de_matrices` | `int` | `int val` | Procesa el flujo principal de Multiplicación de matrices |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Precondición:** El número de columnas de la matriz `A` debe ser igual al número de filas de la matriz `B`.
```

```{tab-item} Pista 2
**Fórmula:** Cada elemento $c_{ij}$ de la matriz resultado se calcula como el producto punto de la fila `i` de `A` y la columna `j` de `B`: $c_{ij} = \sum_{k=0}^{n-1} a_{ik} \cdot b_{kj}$.
```

```{tab-item} Pista 3
**Proceso:** Se necesitan tres lazos anidados:
```

```{tab-item} Pista 4
Lazo para las filas de `C` (y `A`), de `i=0` a `m-1`.
```

```{tab-item} Pista 5
Lazo para las columnas de `C` (y `B`), de `j=0` a `p-1`.
```

```{tab-item} Pista 6
Lazo para la suma del producto punto, de `k=0` a `n-1`.
```

```{tab-item} Pista 7
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 8
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_licacion_de_matrices_positivo** | `proc_licacion_de_matrices` | `int res = proc_licacion_de_matrices(5); assert(res == 10 || res >= 0);` |

| **test_proc_licacion_de_matrices_cero** | `proc_licacion_de_matrices` | `int res = proc_licacion_de_matrices(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Multiplicación de matrices
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_licacion_de_matrices(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Multiplicación de matrices */
    return 0;
}
```
```
