

# Elemento "Silla"
> **ID:** `ej-21-11-elemento-silla`
 · **Tema:** `matrices`
 · **Bloom:** B5 (Evaluar / Crear)
 · **Carga:** ~45 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `silla`, `matrices`, `2d`, `algoritmos`, `elemento`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-11-elemento-silla.ripkg`**](../../paquetes/ej-21-11-elemento-silla.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-11-elemento-silla.ripkg
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
    
    

    current_node["🎯 ej-21-11-elemento-silla<br/><small>matrices · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.11 - Elemento "Silla" ⭐⭐☆☆☆

#### Descripción
Encontrar un "punto de silla" en una matriz. Un punto de silla es un elemento
que es simultáneamente el valor mínimo en su fila y el valor máximo en su
columna.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
Matriz (3x3):
``` text
[ 1, 2, 3 ]
[ 4, 5, 6 ]
[ 7, 8, 9 ]
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
``` text
Punto de silla encontrado en (2, 0) con valor 7.
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Proceso:**
    1.  Iterar a través de cada fila `i` de la matriz.
    2.  En cada fila, encontrar el valor mínimo y su índice de columna
        `min_col_idx`.
    3.  Una vez encontrado el candidato (el mínimo de la fila), verificar si
        este elemento es también el máximo de su columna (`min_col_idx`).
    4.  Para ello, iterar a través de la columna `min_col_idx` y comparar el
        candidato con todos los demás elementos de esa columna.
    5.  Si el candidato es el mayor de su columna, se ha encontrado un punto de
        silla.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO encontrar_punto_silla(matriz, filas, cols)
INICIO
    PARA i DESDE 0 HASTA filas-1 HACER
        // Encontrar el mínimo en la fila i
        min_fila = matriz[i][0]
        min_col_idx = 0
        PARA j DESDE 1 HASTA cols-1 HACER
            SI matriz[i][j] < min_fila ENTONCES
                min_fila = matriz[i][j]
                min_col_idx = j
            FIN SI
        FIN PARA

        // Verificar si es el máximo en su columna
        es_max_columna = VERDADERO
        PARA k DESDE 0 HASTA filas-1 HACER
            SI matriz[k][min_col_idx] > min_fila ENTONCES
                es_max_columna = FALSO
                SALIR DEL LAZO // break
            FIN SI
        FIN PARA

        SI es_max_columna ENTONCES
            ESCRIBIR "Punto de silla en (", i, ", ", min_col_idx, ") con valor ", min_fila
            RETORNAR
        FIN SI
    FIN PARA
    ESCRIBIR "No se encontraron puntos de silla."
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Ayuda (Pseudocódigo) -->
## Ejercicio 21.12 - s de Matrices Dinámicas ⭐⭐⭐☆☆

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-11-elemento-silla.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_11_ELEMENTO_SILLA_H
#define EJERCICIO_EJ_21_11_ELEMENTO_SILLA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Elemento "Silla" */
int proc_21_11_elemento_silla(int val);

#endif /* EJERCICIO_EJ_21_11_ELEMENTO_SILLA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_21_11_elemento_silla` | `int` | `int val` | Procesa el flujo principal de Elemento "Silla" |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Proceso:**
```

```{tab-item} Pista 2
Iterar a través de cada fila `i` de la matriz.
```

```{tab-item} Pista 3
En cada fila, encontrar el valor mínimo y su índice de columna `min_col_idx`.
```

```{tab-item} Pista 4
Una vez encontrado el candidato (el mínimo de la fila), verificar si este elemento es también el máximo de su columna (`min_col_idx`).
```

```{tab-item} Pista 5
Para ello, iterar a través de la columna `min_col_idx` y comparar el candidato con todos los demás elementos de esa columna.
```

```{tab-item} Pista 6
Si el candidato es el mayor de su columna, se ha encontrado un punto de silla.
```

```{tab-item} Pista 7
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 8
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

```{tab-item} Pista 9
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 10
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_21_11_elemento_silla_positivo** | `proc_21_11_elemento_silla` | `int res = proc_21_11_elemento_silla(5); assert(res == 10 || res >= 0);` |

| **test_proc_21_11_elemento_silla_cero** | `proc_21_11_elemento_silla` | `int res = proc_21_11_elemento_silla(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Elemento "Silla"
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_21_11_elemento_silla(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Elemento "Silla" */
    return 0;
}
```
```
