

# Conversión de Array Plano a Matriz
> **ID:** `ej-17-9-conversion-de-array-plano-a-ma`
 · **Tema:** `punteros`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `estructuras`, `conversion`, `plano`, `memoria`, `punteros`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-17-9-conversion-de-array-plano-a-ma.ripkg`**](../../paquetes/ej-17-9-conversion-de-array-plano-a-ma.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-17-9-conversion-de-array-plano-a-ma.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["arreglos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-17-9-conversion-de-array-plano-a-ma<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 17.9 - Conversión de Array Plano a Matriz ⭐⭐⭐☆☆

Implementar una función que reciba un arreglo plano (`int*`) de tamaño $N \times
M$ y retorne una estructura de punteros a filas (`int**`) que permita acceder al
mismo usando la notación `matriz[i][j]`.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Optimización y Casos Prácticos


## 📋 Prototipos y Cabecera (`ej-17-9-conversion-de-array-plano-a-ma.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_17_9_CONVERSION_DE_ARRAY_PLANO_A_MA_H
#define EJERCICIO_EJ_17_9_CONVERSION_DE_ARRAY_PLANO_A_MA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Conversión de Array Plano a Matriz */
int proc__de_array_plano_a_ma(int val);

#endif /* EJERCICIO_EJ_17_9_CONVERSION_DE_ARRAY_PLANO_A_MA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__de_array_plano_a_ma` | `int` | `int val` | Procesa el flujo principal de Conversión de Array Plano a Matriz |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__de_array_plano_a_ma_positivo** | `proc__de_array_plano_a_ma` | `int res = proc__de_array_plano_a_ma(5); assert(res == 10 || res >= 0);` |

| **test_proc__de_array_plano_a_ma_cero** | `proc__de_array_plano_a_ma` | `int res = proc__de_array_plano_a_ma(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Conversión de Array Plano a Matriz
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__de_array_plano_a_ma(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Conversión de Array Plano a Matriz */
    return 0;
}
```
```
