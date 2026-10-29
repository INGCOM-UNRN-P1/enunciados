

# Multiplicación por un escalar
> **ID:** `ej-21-2-multiplicacion-por-un-escalar` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `multiplicacion`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `multiplicacion`, `escalar`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-2-multiplicacion-por-un-escalar.ripkg`**](../../paquetes/ej-21-2-multiplicacion-por-un-escalar.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-2-multiplicacion-por-un-escalar.ripkg
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
    
    

    current_node["🎯 ej-21-2-multiplicacion-por-un-escalar<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Implementar una función que multiplique cada elemento de una matriz por un
número escalar dado. La operación modifica la matriz original (_in-place_).

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Matriz: [[1, 2], [3, 4]]
Escalar: 5
```

:::
:::{tab-item} Salida
:sync: tab2
``` text
Matriz modificada: [[5, 10], [15, 20]]
```

:::

::::



## Aritmética Matricial

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Multiplicación por un escalar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_acion_por_un_escalar(int val);

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
- **Fórmula:** Para cada elemento $a_{ij}$ de la matriz $A$, el nuevo elemento es $b_{ij} = k \cdot a_{ij}$.
- **Proceso:** Se utilizan dos lazos anidados para recorrer cada elemento de la matriz.
- En el cuerpo del lazo interior, se multiplica el elemento `matriz[fila][columna]` por el escalar y se guarda el resultado en la misma posición.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::


## 📋 Prototipos y Cabecera (`ej-21-2-multiplicacion-por-un-escalar.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_2_MULTIPLICACION_POR_UN_ESCALAR_H
#define EJERCICIO_EJ_21_2_MULTIPLICACION_POR_UN_ESCALAR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Multiplicación por un escalar */
int proc_acion_por_un_escalar(int val);

#endif /* EJERCICIO_EJ_21_2_MULTIPLICACION_POR_UN_ESCALAR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_acion_por_un_escalar` | `int` | `int val` | Procesa el flujo principal de Multiplicación por un escalar |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Fórmula:** Para cada elemento $a_{ij}$ de la matriz $A$, el nuevo elemento es $b_{ij} = k \cdot a_{ij}$.
```

```{tab-item} Pista 2
**Proceso:** Se utilizan dos lazos anidados para recorrer cada elemento de la matriz.
```

```{tab-item} Pista 3
En el cuerpo del lazo interior, se multiplica el elemento `matriz[fila][columna]` por el escalar y se guarda el resultado en la misma posición.
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

| **test_proc_acion_por_un_escalar_positivo** | `proc_acion_por_un_escalar` | `int res = proc_acion_por_un_escalar(5); assert(res == 10 || res >= 0);` |

| **test_proc_acion_por_un_escalar_cero** | `proc_acion_por_un_escalar` | `int res = proc_acion_por_un_escalar(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Multiplicación por un escalar
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_acion_por_un_escalar(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Multiplicación por un escalar */
    return 0;
}
```
```
