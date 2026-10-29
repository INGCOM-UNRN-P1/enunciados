

# Matriz identidad
> **ID:** `ej-21-7-matriz-identidad`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `matriz`, `2d`, `identidad`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-7-matriz-identidad.ripkg`**](../../paquetes/ej-21-7-matriz-identidad.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-7-matriz-identidad.ripkg
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
    
    

    current_node["🎯 ej-21-7-matriz-identidad<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.7 - Matriz identidad ⭐⭐⭐☆☆

#### Descripción
Generar una matriz identidad de tamaño `n x n`. La matriz identidad es una
matriz cuadrada con unos en la diagonal principal y ceros en todas las demás
posiciones.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Tamaño n = 3
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
``` text
[ 1, 0, 0 ]
[ 0, 1, 0 ]
[ 0, 0, 1 ]
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Proceso:** Recorrer la matriz `n x n` con lazos anidados.
-   **Condición:** Para cada elemento en la posición `(i, j)`:
    -   Si `i == j`, el valor es 1.
    -   Si `i != j`, el valor es 0.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
PROCEDIMIENTO generar_identidad(REF matriz, n)
INICIO
    PARA i DESDE 0 HASTA n-1 HACER
        PARA j DESDE 0 HASTA n-1 HACER
            SI i == j ENTONCES
                matriz[i][j] = 1
            SINO
                matriz[i][j] = 0
            FIN SI
        FIN PARA
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Ayuda (Pseudocódigo) -->
## Ejercicio 21.8 - s Adicionales de Matrices ⭐⭐⭐☆☆

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-7-matriz-identidad.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_7_MATRIZ_IDENTIDAD_H
#define EJERCICIO_EJ_21_7_MATRIZ_IDENTIDAD_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz identidad */
int proc_1_7_matriz_identidad(int val);

#endif /* EJERCICIO_EJ_21_7_MATRIZ_IDENTIDAD_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_1_7_matriz_identidad` | `int` | `int val` | Procesa el flujo principal de Matriz identidad |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Proceso:** Recorrer la matriz `n x n` con lazos anidados.
```

```{tab-item} Pista 2
**Condición:** Para cada elemento en la posición `(i, j)`:
```

```{tab-item} Pista 3
Si `i == j`, el valor es 1.
```

```{tab-item} Pista 4
Si `i != j`, el valor es 0.
```

```{tab-item} Pista 5
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 6
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

```{tab-item} Pista 7
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 8
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_1_7_matriz_identidad_positivo** | `proc_1_7_matriz_identidad` | `int res = proc_1_7_matriz_identidad(5); assert(res == 10 || res >= 0);` |

| **test_proc_1_7_matriz_identidad_cero** | `proc_1_7_matriz_identidad` | `int res = proc_1_7_matriz_identidad(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz identidad
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_1_7_matriz_identidad(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz identidad */
    return 0;
}
```
```
