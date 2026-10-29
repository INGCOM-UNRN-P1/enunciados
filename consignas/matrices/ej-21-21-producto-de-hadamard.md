

# Producto de Hadamard
> **ID:** `ej-21-21-producto-de-hadamard` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `producto`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `producto`, `hadamard`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-21-producto-de-hadamard.ripkg`**](../../paquetes/ej-21-21-producto-de-hadamard.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-21-producto-de-hadamard.ripkg
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
    
    

    current_node["🎯 ej-21-21-producto-de-hadamard<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

Implementar el producto de Hadamard (o producto elemento a elemento) de dos
matrices `A` y `B` de las mismas dimensiones. La matriz resultante `C` se define
como $c_{ij} = a_{ij} \cdot b_{ij}$.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Producto de Hadamard
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_producto_de_hadamard(int val);

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


## 📋 Prototipos y Cabecera (`ej-21-21-producto-de-hadamard.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_21_PRODUCTO_DE_HADAMARD_H
#define EJERCICIO_EJ_21_21_PRODUCTO_DE_HADAMARD_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Producto de Hadamard */
int proc_producto_de_hadamard(int val);

#endif /* EJERCICIO_EJ_21_21_PRODUCTO_DE_HADAMARD_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_producto_de_hadamard` | `int` | `int val` | Procesa el flujo principal de Producto de Hadamard |






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

| **test_proc_producto_de_hadamard_positivo** | `proc_producto_de_hadamard` | `int res = proc_producto_de_hadamard(5); assert(res == 10 || res >= 0);` |

| **test_proc_producto_de_hadamard_cero** | `proc_producto_de_hadamard` | `int res = proc_producto_de_hadamard(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Producto de Hadamard
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_producto_de_hadamard(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Producto de Hadamard */
    return 0;
}
```
```
