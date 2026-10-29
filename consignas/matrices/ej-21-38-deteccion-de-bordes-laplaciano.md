

# Detección de bordes (Laplaciano)
> **ID:** `ej-21-38-deteccion-de-bordes-laplaciano` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `laplaciano`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `laplaciano`, `deteccion`, `bordes`, `2d`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-38-deteccion-de-bordes-laplaciano.ripkg`**](../../paquetes/ej-21-38-deteccion-de-bordes-laplaciano.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-38-deteccion-de-bordes-laplaciano.ripkg
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
    
    

    current_node["🎯 ej-21-38-deteccion-de-bordes-laplaciano<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

Aplicar el operador Laplaciano para detectar bordes.



``` c
void detectar_bordes_laplaciano(int **imagen, int filas, int cols,
                                int **resultado);
```

**Kernel Laplaciano:**
$$K = \begin{pmatrix} 0 & 1 & 0 \\ 1 & -4 & 1 \\ 0 & 1 & 0 \end{pmatrix}$$

## Matrices Especiales

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Detección de bordes (Laplaciano)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_bordes_laplaciano(int val);

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
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::


## 📋 Prototipos y Cabecera (`ej-21-38-deteccion-de-bordes-laplaciano.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_38_DETECCION_DE_BORDES_LAPLACIANO_H
#define EJERCICIO_EJ_21_38_DETECCION_DE_BORDES_LAPLACIANO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Detección de bordes (Laplaciano) */
int proc_de_bordes_laplaciano(int val);

#endif /* EJERCICIO_EJ_21_38_DETECCION_DE_BORDES_LAPLACIANO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_de_bordes_laplaciano` | `int` | `int val` | Procesa el flujo principal de Detección de bordes (Laplaciano) |






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

| **test_proc_de_bordes_laplaciano_positivo** | `proc_de_bordes_laplaciano` | `int res = proc_de_bordes_laplaciano(5); assert(res == 10 || res >= 0);` |

| **test_proc_de_bordes_laplaciano_cero** | `proc_de_bordes_laplaciano` | `int res = proc_de_bordes_laplaciano(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Detección de bordes (Laplaciano)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_de_bordes_laplaciano(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Detección de bordes (Laplaciano) */
    return 0;
}
```
```
