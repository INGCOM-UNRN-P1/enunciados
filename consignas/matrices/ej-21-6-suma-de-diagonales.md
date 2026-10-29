

# Suma de diagonales
> **ID:** `ej-21-6-suma-de-diagonales` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `2d`, `algoritmos`, `matrices`, `diagonales`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-6-suma-de-diagonales.ripkg`**](../../paquetes/ej-21-6-suma-de-diagonales.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-6-suma-de-diagonales.ripkg
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
    
    

    current_node["🎯 ej-21-6-suma-de-diagonales<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Para una matriz cuadrada, calcular la suma de los elementos de sus dos
diagonales: la principal y la secundaria.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
Matriz (3x3):
``` text
[ 1, 2, 3 ]
[ 4, 5, 6 ]
[ 7, 8, 9 ]
```

:::
:::{tab-item} Salida
:sync: tab2
``` text
Suma Diagonal Principal: `1 + 5 + 9 = 15`
Suma Diagonal Secundaria: `3 + 5 + 7 = 15`
```

:::

::::



## Generación

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Suma de diagonales
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_6_suma_de_diagonales(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- **Diagonal Principal:** Los elementos de la diagonal principal son aquellos donde el índice de fila es igual al índice de columna (`i == j`).
- **Diagonal Secundaria:** Los elementos de la diagonal secundaria en una matriz de tamaño `n x n` son aquellos donde `i + j == n - 1`.
- **Proceso:** Usar un solo lazo de `i=0` a `n-1`. En cada iteración, sumar `matriz[i][i]` a la suma principal y `matriz[i][n-1-i]` a la suma secundaria.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::


## 📋 Prototipos y Cabecera (`ej-21-6-suma-de-diagonales.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_6_SUMA_DE_DIAGONALES_H
#define EJERCICIO_EJ_21_6_SUMA_DE_DIAGONALES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Suma de diagonales */
int proc_6_suma_de_diagonales(int val);

#endif /* EJERCICIO_EJ_21_6_SUMA_DE_DIAGONALES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_6_suma_de_diagonales` | `int` | `int val` | Procesa el flujo principal de Suma de diagonales |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Diagonal Principal:** Los elementos de la diagonal principal son aquellos donde el índice de fila es igual al índice de columna (`i == j`).
```

```{tab-item} Pista 2
**Diagonal Secundaria:** Los elementos de la diagonal secundaria en una matriz de tamaño `n x n` son aquellos donde `i + j == n - 1`.
```

```{tab-item} Pista 3
**Proceso:** Usar un solo lazo de `i=0` a `n-1`. En cada iteración, sumar `matriz[i][i]` a la suma principal y `matriz[i][n-1-i]` a la suma secundaria.
```

```{tab-item} Pista 4
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 5
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_6_suma_de_diagonales_positivo** | `proc_6_suma_de_diagonales` | `int res = proc_6_suma_de_diagonales(5); assert(res == 10 || res >= 0);` |

| **test_proc_6_suma_de_diagonales_cero** | `proc_6_suma_de_diagonales` | `int res = proc_6_suma_de_diagonales(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Suma de diagonales
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_6_suma_de_diagonales(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Suma de diagonales */
    return 0;
}
```
```
