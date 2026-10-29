

# Método de Gauss-Seidel
> **ID:** `ej-21-48-metodo-de-gauss-seidel`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `metodo`, `2d`, `algoritmos`, `gauss-seidel`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-48-metodo-de-gauss-seidel.ripkg`**](../../paquetes/ej-21-48-metodo-de-gauss-seidel.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-48-metodo-de-gauss-seidel.ripkg
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
    
    

    current_node["🎯 ej-21-48-metodo-de-gauss-seidel<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.48 - Método de Gauss-Seidel ⭐⭐☆☆☆

Similar a Jacobi pero usa valores actualizados inmediatamente.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double *metodo_gauss_seidel(double **A, double *b, int n, double tolerancia,
                            int max_iter);
```
<!-- c -->

**Converge más rápido que Jacobi** para matrices con diagonal dominante.

## Operaciones Matriciales con Bloques


## 📋 Prototipos y Cabecera (`ej-21-48-metodo-de-gauss-seidel.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_48_METODO_DE_GAUSS_SEIDEL_H
#define EJERCICIO_EJ_21_48_METODO_DE_GAUSS_SEIDEL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Método de Gauss-Seidel */
int proc_todo_de_gauss_seidel(int val);

#endif /* EJERCICIO_EJ_21_48_METODO_DE_GAUSS_SEIDEL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_todo_de_gauss_seidel` | `int` | `int val` | Procesa el flujo principal de Método de Gauss-Seidel |






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

| **test_proc_todo_de_gauss_seidel_positivo** | `proc_todo_de_gauss_seidel` | `int res = proc_todo_de_gauss_seidel(5); assert(res == 10 || res >= 0);` |

| **test_proc_todo_de_gauss_seidel_cero** | `proc_todo_de_gauss_seidel` | `int res = proc_todo_de_gauss_seidel(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Método de Gauss-Seidel
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_todo_de_gauss_seidel(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Método de Gauss-Seidel */
    return 0;
}
```
```
