

# Medición de Overhead de malloc
> **ID:** `ej-15-15-b15-medicion-de-overhead-de-ma` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `medicion`, `memoria`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-15-b15-medicion-de-overhead-de-ma.ripkg`**](../../paquetes/ej-15-15-b15-medicion-de-overhead-de-ma.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-15-b15-medicion-de-overhead-de-ma.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["punteros"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-15-15-b15-medicion-de-overhead-de-ma<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.15 - b.15 - Medición de Overhead de malloc ⭐⭐☆☆☆

Escribir un programa que mida el overhead de `malloc` comparando el tamaño
solicitado vs. el espacio realmente consumido (usando herramientas como
`malloc_usable_size` en glibc):


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
#include <malloc.h>
int main()
{
    size_t tamaños[] = {1, 8, 16, 32, 64, 100, 128, 256, 512, 1024};
    for (size_t i = 0; i < sizeof(tamaños) / sizeof(tamaños[0]); i++)
    {
        void *ptr = malloc(tamaños[i]);
        size_t real = malloc_usable_size(ptr);
        printf(
            "Solicitado: %5zu bytes -> Real: %5zu bytes (%.1f%% overhead)\n",
            tamaños[i], real, 100.0 * (real - tamaños[i]) / tamaños[i]);
        free(ptr);
    }
    return 0;
}
```
<!-- {code-block} c -->


## 📋 Prototipos y Cabecera (`ej-15-15-b15-medicion-de-overhead-de-ma.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_15_B15_MEDICION_DE_OVERHEAD_DE_MA_H
#define EJERCICIO_EJ_15_15_B15_MEDICION_DE_OVERHEAD_DE_MA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Medición de Overhead de malloc */
int proc_on_de_overhead_de_ma(int val);

#endif /* EJERCICIO_EJ_15_15_B15_MEDICION_DE_OVERHEAD_DE_MA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_on_de_overhead_de_ma` | `int` | `int val` | Procesa el flujo principal de Medición de Overhead de malloc |






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

| **test_proc_on_de_overhead_de_ma_positivo** | `proc_on_de_overhead_de_ma` | `int res = proc_on_de_overhead_de_ma(5); assert(res == 10 || res >= 0);` |

| **test_proc_on_de_overhead_de_ma_cero** | `proc_on_de_overhead_de_ma` | `int res = proc_on_de_overhead_de_ma(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

#include <malloc.h>

int proc_on_de_overhead_de_ma(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    size_t tamaños[] = {1, 8, 16, 32, 64, 100, 128, 256, 512, 1024};
    for (size_t i = 0; i < sizeof(tamaños) / sizeof(tamaños[0]); i++)
    {
        void *ptr = malloc(tamaños[i]);
        size_t real = malloc_usable_size(ptr);
        printf(
            "Solicitado: %5zu bytes -> Real: %5zu bytes (%.1f%% overhead)\n",
            tamaños[i], real, 100.0 * (real - tamaños[i]) / tamaños[i]);
        free(ptr);
    }
    return 0;
}
```
```
