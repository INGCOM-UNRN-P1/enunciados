

# Crear y llenar matriz dinámica
> **ID:** `ej-21-13-crear-y-llenar-matriz-dinamica` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `crear`, `llenar`, `dinamica`, `matriz`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-13-crear-y-llenar-matriz-dinamica.ripkg`**](../../paquetes/ej-21-13-crear-y-llenar-matriz-dinamica.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-13-crear-y-llenar-matriz-dinamica.ripkg
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
    
    

    current_node["🎯 ej-21-13-crear-y-llenar-matriz-dinamica<br/><small>matrices · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.13 - Crear y llenar matriz dinámica ⭐⭐⭐☆☆

#### Descripción
Escribir una función que solicite al usuario las dimensiones (filas y columnas)
y luego los elementos de una matriz, para finalmente imprimirla.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
Se le pedirá al usuario que ingrese el número de filas y columnas, y luego cada
uno de los elementos.

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
La matriz ingresada por el usuario, impresa de forma ordenada.

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Entrada:** Se debe usar una función para leer la entrada del usuario para
    las dimensiones y los elementos.
-   **Proceso:**
    1.  Solicitar el número de filas (`filas`).
    2.  Solicitar el número de columnas (`columnas`).
    3.  Crear una matriz vacía con las dimensiones especificadas.
    4.  Usar dos lazos anidados para recorrer la matriz y solicitar cada
        elemento al usuario, asignándolo a la posición correspondiente.
    5.  Finalmente, llamar a la función `mostrar_matriz` (del ejercicio 1.1)
        para imprimir la matriz creada.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
PROCEDIMIENTO crear_y_llenar_matriz_dinamica()
INICIO
    ESCRIBIR "Ingrese el número de filas: " SIN SALTO DE LÍNEA
    LEER filas
    ESCRIBIR "Ingrese el número de columnas: " SIN SALTO DE LÍNEA
    LEER columnas

    // Crear una matriz de 'filas' x 'columnas'
    CREAR matriz[filas][columnas]

    ESCRIBIR "Ingrese los elementos de la matriz:"
    PARA i DESDE 0 HASTA filas-1 HACER
        PARA j DESDE 0 HASTA columnas-1 HACER
            ESCRIBIR "Elemento [", i, "][ ", j, "]: " SIN SALTO DE LÍNEA
            LEER matriz[i][j]
        FIN PARA
    FIN PARA

    // Asumiendo que la función mostrar_matriz está definida
    mostrar_matriz(matriz, filas, columnas)
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Ayuda (Pseudocódigo) -->

## Más Algoritmos con Matrices


## 📋 Prototipos y Cabecera (`ej-21-13-crear-y-llenar-matriz-dinamica.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_13_CREAR_Y_LLENAR_MATRIZ_DINAMICA_H
#define EJERCICIO_EJ_21_13_CREAR_Y_LLENAR_MATRIZ_DINAMICA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Crear y llenar matriz dinámica */
int proc_enar_matriz_dinamica(int val);

#endif /* EJERCICIO_EJ_21_13_CREAR_Y_LLENAR_MATRIZ_DINAMICA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_enar_matriz_dinamica` | `int` | `int val` | Procesa el flujo principal de Crear y llenar matriz dinámica |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Se debe usar una función para leer la entrada del usuario para las dimensiones y los elementos.
```

```{tab-item} Pista 2
**Proceso:**
```

```{tab-item} Pista 3
Solicitar el número de filas (`filas`).
```

```{tab-item} Pista 4
Solicitar el número de columnas (`columnas`).
```

```{tab-item} Pista 5
Crear una matriz vacía con las dimensiones especificadas.
```

```{tab-item} Pista 6
Usar dos lazos anidados para recorrer la matriz y solicitar cada elemento al usuario, asignándolo a la posición correspondiente.
```

```{tab-item} Pista 7
Finalmente, llamar a la función `mostrar_matriz` (del ejercicio 1.1) para imprimir la matriz creada.
```

```{tab-item} Pista 8
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 9
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_enar_matriz_dinamica_positivo** | `proc_enar_matriz_dinamica` | `int res = proc_enar_matriz_dinamica(5); assert(res == 10 || res >= 0);` |

| **test_proc_enar_matriz_dinamica_cero** | `proc_enar_matriz_dinamica` | `int res = proc_enar_matriz_dinamica(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Crear y llenar matriz dinámica
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_enar_matriz_dinamica(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Crear y llenar matriz dinámica */
    return 0;
}
```
```
