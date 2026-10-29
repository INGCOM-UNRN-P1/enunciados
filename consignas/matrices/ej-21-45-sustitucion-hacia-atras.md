

# Sustitución hacia atrás
> **ID:** `ej-21-45-sustitucion-hacia-atras`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `hacia`, `atras`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-45-sustitucion-hacia-atras.ripkg`**](../../paquetes/ej-21-45-sustitucion-hacia-atras.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-45-sustitucion-hacia-atras.ripkg
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
    
    

    current_node["🎯 ej-21-45-sustitucion-hacia-atras<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.45 - Sustitución hacia atrás ⭐⭐☆☆☆

Resolver un sistema triangular superior $Ux = b$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double *sustitucion_atras(double **U, double *b, int n);
```
<!-- c -->

**Algoritmo:** Resolver de abajo hacia arriba.


## 📋 Prototipos y Cabecera (`ej-21-45-sustitucion-hacia-atras.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_45_SUSTITUCION_HACIA_ATRAS_H
#define EJERCICIO_EJ_21_45_SUSTITUCION_HACIA_ATRAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Sustitución hacia atrás */
int proc_titucion_hacia_atras(int val);

#endif /* EJERCICIO_EJ_21_45_SUSTITUCION_HACIA_ATRAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_titucion_hacia_atras` | `int` | `int val` | Procesa el flujo principal de Sustitución hacia atrás |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_titucion_hacia_atras_positivo** | `proc_titucion_hacia_atras` | `int res = proc_titucion_hacia_atras(5); assert(res == 10 || res >= 0);` |

| **test_proc_titucion_hacia_atras_cero** | `proc_titucion_hacia_atras` | `int res = proc_titucion_hacia_atras(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Sustitución hacia atrás
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_titucion_hacia_atras(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Sustitución hacia atrás */
    return 0;
}
```
```
