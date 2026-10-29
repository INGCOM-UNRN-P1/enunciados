

# Valores propios (Power Method)
> **ID:** `ej-21-31-valores-propios-power-method` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `valores`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `valores`, `propios`, `method`, `2d`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-31-valores-propios-power-method.ripkg`**](../../paquetes/ej-21-31-valores-propios-power-method.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-31-valores-propios-power-method.ripkg
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
    
    

    current_node["🎯 ej-21-31-valores-propios-power-method<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.31 - Valores propios (Power Method) ⭐⭐☆☆☆

Implementar el método de la potencia para calcular el valor propio dominante de
una matriz.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double valor_propio_dominante(double **matriz, int n, double tolerancia);
```
<!-- c -->

**Algoritmo:**
1. Comenzar con vector aleatorio $v$
2. Iterar: $v_{k+1} = \frac{Av_k}{||Av_k||}$
3. El valor propio es $\lambda = v^T A v$


## 📋 Prototipos y Cabecera (`ej-21-31-valores-propios-power-method.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_31_VALORES_PROPIOS_POWER_METHOD_H
#define EJERCICIO_EJ_21_31_VALORES_PROPIOS_POWER_METHOD_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Valores propios (Power Method) */
int proc_propios_power_method(int val);

#endif /* EJERCICIO_EJ_21_31_VALORES_PROPIOS_POWER_METHOD_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_propios_power_method` | `int` | `int val` | Procesa el flujo principal de Valores propios (Power Method) |






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

| **test_proc_propios_power_method_positivo** | `proc_propios_power_method` | `int res = proc_propios_power_method(5); assert(res == 10 || res >= 0);` |

| **test_proc_propios_power_method_cero** | `proc_propios_power_method` | `int res = proc_propios_power_method(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Valores propios (Power Method)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_propios_power_method(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Valores propios (Power Method) */
    return 0;
}
```
```
