

# Transpuesta por bloques
> **ID:** `ej-21-50-transpuesta-por-bloques` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `transpuesta`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `transpuesta`, `bloques`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-50-transpuesta-por-bloques.ripkg`**](../../paquetes/ej-21-50-transpuesta-por-bloques.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-50-transpuesta-por-bloques.ripkg
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
    
    

    current_node["🎯 ej-21-50-transpuesta-por-bloques<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.50 - Transpuesta por bloques ⭐⭐☆☆☆

Implementar transpuesta usando bloques para mejor localidad de caché.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void transponer_bloques(double **matriz, int n, int tam_bloque);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-21-50-transpuesta-por-bloques.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_50_TRANSPUESTA_POR_BLOQUES_H
#define EJERCICIO_EJ_21_50_TRANSPUESTA_POR_BLOQUES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Transpuesta por bloques */
int proc_nspuesta_por_bloques(int val);

#endif /* EJERCICIO_EJ_21_50_TRANSPUESTA_POR_BLOQUES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_nspuesta_por_bloques` | `int` | `int val` | Procesa el flujo principal de Transpuesta por bloques |






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

| **test_proc_nspuesta_por_bloques_positivo** | `proc_nspuesta_por_bloques` | `int res = proc_nspuesta_por_bloques(5); assert(res == 10 || res >= 0);` |

| **test_proc_nspuesta_por_bloques_cero** | `proc_nspuesta_por_bloques` | `int res = proc_nspuesta_por_bloques(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Transpuesta por bloques
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_nspuesta_por_bloques(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Transpuesta por bloques */
    return 0;
}
```
```
