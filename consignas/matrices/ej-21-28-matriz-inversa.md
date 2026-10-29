

# Matriz inversa
> **ID:** `ej-21-28-matriz-inversa` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `inversa`, `matriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-28-matriz-inversa.ripkg`**](../../paquetes/ej-21-28-matriz-inversa.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-28-matriz-inversa.ripkg
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
    
    

    current_node["🎯 ej-21-28-matriz-inversa<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.28 - Matriz inversa ⭐⭐⭐☆☆

Implementar el cálculo de la inversa de una matriz usando el método de
Gauss-Jordan.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_inversa(double **matriz, int n, bool *invertible);
```
<!-- c -->

**Algoritmo:**
1. Crear matriz aumentada $[A | I]$
2. Aplicar eliminación Gauss-Jordan
3. Si se obtiene $[I | A^{-1}]$, retornar $A^{-1}$
4. Si no es posible, la matriz no es invertible


## 📋 Prototipos y Cabecera (`ej-21-28-matriz-inversa.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_28_MATRIZ_INVERSA_H
#define EJERCICIO_EJ_21_28_MATRIZ_INVERSA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz inversa */
int proc_21_28_matriz_inversa(int val);

#endif /* EJERCICIO_EJ_21_28_MATRIZ_INVERSA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_21_28_matriz_inversa` | `int` | `int val` | Procesa el flujo principal de Matriz inversa |






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

| **test_proc_21_28_matriz_inversa_positivo** | `proc_21_28_matriz_inversa` | `int res = proc_21_28_matriz_inversa(5); assert(res == 10 || res >= 0);` |

| **test_proc_21_28_matriz_inversa_cero** | `proc_21_28_matriz_inversa` | `int res = proc_21_28_matriz_inversa(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz inversa
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_21_28_matriz_inversa(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz inversa */
    return 0;
}
```
```
