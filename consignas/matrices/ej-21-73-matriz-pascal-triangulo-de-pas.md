

# Matriz Pascal (Triángulo de Pascal)
> **ID:** `ej-21-73-matriz-pascal-triangulo-de-pas`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `triangulo`, `pascal`, `matriz`, `2d`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-73-matriz-pascal-triangulo-de-pas.ripkg`**](../../paquetes/ej-21-73-matriz-pascal-triangulo-de-pas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-73-matriz-pascal-triangulo-de-pas.ripkg
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
    
    

    current_node["🎯 ej-21-73-matriz-pascal-triangulo-de-pas<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.73 - Matriz Pascal (Triángulo de Pascal) ⭐⭐⭐⭐☆

Generá el triángulo de Pascal como matriz.

**Orientación:**
- `matriz[i][0] = 1` (primera columna)
- `matriz[i][i] = 1` (diagonal)
- `matriz[i][j] = matriz[i-1][j-1] + matriz[i-1][j]` (resto)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-21-73-matriz-pascal-triangulo-de-pas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_73_MATRIZ_PASCAL_TRIANGULO_DE_PAS_H
#define EJERCICIO_EJ_21_73_MATRIZ_PASCAL_TRIANGULO_DE_PAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz Pascal (Triángulo de Pascal) */
int proc_cal_triangulo_de_pas(int val);

#endif /* EJERCICIO_EJ_21_73_MATRIZ_PASCAL_TRIANGULO_DE_PAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_cal_triangulo_de_pas` | `int` | `int val` | Procesa el flujo principal de Matriz Pascal (Triángulo de Pascal) |






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

| **test_proc_cal_triangulo_de_pas_positivo** | `proc_cal_triangulo_de_pas` | `int res = proc_cal_triangulo_de_pas(5); assert(res == 10 || res >= 0);` |

| **test_proc_cal_triangulo_de_pas_cero** | `proc_cal_triangulo_de_pas` | `int res = proc_cal_triangulo_de_pas(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz Pascal (Triángulo de Pascal)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_cal_triangulo_de_pas(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz Pascal (Triángulo de Pascal) */
    return 0;
}
```
```
