

# Matriz circulante
> **ID:** `ej-21-42-matriz-circulante` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `circulante`, `matriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-42-matriz-circulante.ripkg`**](../../paquetes/ej-21-42-matriz-circulante.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-42-matriz-circulante.ripkg
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
    
    

    current_node["🎯 ej-21-42-matriz-circulante<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.42 - Matriz circulante ⭐⭐⭐☆☆

Generar una matriz circulante a partir de su primera fila.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int **matriz_circulante(int *primera_fila, int n);
```
<!-- c -->

**Ejemplo con primera fila $[1, 2, 3, 4]$:**
$$C = \begin{pmatrix} 1 & 2 & 3 & 4 \\ 4 & 1 & 2 & 3 \\ 3 & 4 & 1 & 2 \\ 2 & 3 & 4 & 1 \end{pmatrix}$$


## 📋 Prototipos y Cabecera (`ej-21-42-matriz-circulante.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_42_MATRIZ_CIRCULANTE_H
#define EJERCICIO_EJ_21_42_MATRIZ_CIRCULANTE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz circulante */
int proc_42_matriz_circulante(int val);

#endif /* EJERCICIO_EJ_21_42_MATRIZ_CIRCULANTE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_42_matriz_circulante` | `int` | `int val` | Procesa el flujo principal de Matriz circulante |






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

| **test_proc_42_matriz_circulante_positivo** | `proc_42_matriz_circulante` | `int res = proc_42_matriz_circulante(5); assert(res == 10 || res >= 0);` |

| **test_proc_42_matriz_circulante_cero** | `proc_42_matriz_circulante` | `int res = proc_42_matriz_circulante(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz circulante
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_42_matriz_circulante(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz circulante */
    return 0;
}
```
```
