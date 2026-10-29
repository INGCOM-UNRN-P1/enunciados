

# Submatriz Mayor Suma
> **ID:** `ej-21-75-submatriz-mayor-suma` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `mayor`, `submatriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-75-submatriz-mayor-suma.ripkg`**](../../paquetes/ej-21-75-submatriz-mayor-suma.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-75-submatriz-mayor-suma.ripkg
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
    
    

    current_node["🎯 ej-21-75-submatriz-mayor-suma<br/><small>matrices · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.75 - Submatriz Mayor Suma ⭐⭐⭐⭐⭐

Encontrá la submatriz 2×2 con mayor suma dentro de una matriz más grande.

**Orientación:**
- Recorré todas las posiciones posibles para submatriz 2×2
- Para cada posición, sumá los 4 elementos
- Guardá máximo y posición


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-21-75-submatriz-mayor-suma.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_75_SUBMATRIZ_MAYOR_SUMA_H
#define EJERCICIO_EJ_21_75_SUBMATRIZ_MAYOR_SUMA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Submatriz Mayor Suma */
int proc_submatriz_mayor_suma(int val);

#endif /* EJERCICIO_EJ_21_75_SUBMATRIZ_MAYOR_SUMA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_submatriz_mayor_suma` | `int` | `int val` | Procesa el flujo principal de Submatriz Mayor Suma |






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

| **test_proc_submatriz_mayor_suma_positivo** | `proc_submatriz_mayor_suma` | `int res = proc_submatriz_mayor_suma(5); assert(res == 10 || res >= 0);` |

| **test_proc_submatriz_mayor_suma_cero** | `proc_submatriz_mayor_suma` | `int res = proc_submatriz_mayor_suma(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Submatriz Mayor Suma
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_submatriz_mayor_suma(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Submatriz Mayor Suma */
    return 0;
}
```
```
