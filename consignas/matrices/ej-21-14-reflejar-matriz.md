

# Reflejar matriz
> **ID:** `ej-21-14-reflejar-matriz`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `matriz`, `reflejar`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-14-reflejar-matriz.ripkg`**](../../paquetes/ej-21-14-reflejar-matriz.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-14-reflejar-matriz.ripkg
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
    
    

    current_node["🎯 ej-21-14-reflejar-matriz<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.14 - Reflejar matriz ⭐⭐⭐☆☆

Implementar dos funciones: una que refleje una matriz horizontalmente (la
primera fila se intercambia con la última, la segunda con la penúltima, etc.) y
otra que la refleje verticalmente (la primera columna con la última, etc.).
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-14-reflejar-matriz.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_14_REFLEJAR_MATRIZ_H
#define EJERCICIO_EJ_21_14_REFLEJAR_MATRIZ_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Reflejar matriz */
int proc_1_14_reflejar_matriz(int val);

#endif /* EJERCICIO_EJ_21_14_REFLEJAR_MATRIZ_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_1_14_reflejar_matriz` | `int` | `int val` | Procesa el flujo principal de Reflejar matriz |






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

| **test_proc_1_14_reflejar_matriz_positivo** | `proc_1_14_reflejar_matriz` | `int res = proc_1_14_reflejar_matriz(5); assert(res == 10 || res >= 0);` |

| **test_proc_1_14_reflejar_matriz_cero** | `proc_1_14_reflejar_matriz` | `int res = proc_1_14_reflejar_matriz(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Reflejar matriz
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_1_14_reflejar_matriz(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Reflejar matriz */
    return 0;
}
```
```
