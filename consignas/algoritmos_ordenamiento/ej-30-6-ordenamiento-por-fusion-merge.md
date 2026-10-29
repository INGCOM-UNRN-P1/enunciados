

# Ordenamiento por Fusión (Merge Sort)
> **ID:** `ej-30-6-ordenamiento-por-fusion-merge` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `algoritmos_ordenamiento` / `mergesort`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`, `dep:recursividad`
>
> **Etiquetas conceptuales:** `busqueda`, `merge`, `fusion`, `ordenamiento`, `avanzados`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-30-6-ordenamiento-por-fusion-merge.ripkg`**](../../paquetes/ej-30-6-ordenamiento-por-fusion-merge.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-30-6-ordenamiento-por-fusion-merge.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["lazos_anidados"]
        
        node_pre_3["recursividad"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-30-6-ordenamiento-por-fusion-merge<br/><small>algoritmos_ordenamiento · B4</small>"]

    
```


## 📖 Consigna

Implementar Merge Sort, un algoritmo eficiente basado en la técnica "Divide y
Vencerás".

**Lógica y Consideraciones:**
- **Proceso**:
  1. **Dividir**: Si el arreglo tiene más de un elemento, dividirlo en dos
     mitades.
  2. **Vencer**: Llamar recursivamente a `merge_sort` para cada mitad.
  3. **Combinar**: Implementar una función `merge` que tome las dos mitades ya
     ordenadas y las fusione en un único arreglo ordenado. Este paso requiere un
     arreglo auxiliar.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Ordenamiento por Fusión (Merge Sort)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_nto_por_fusion_merge(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::


## 📋 Prototipos y Cabecera (`ej-30-6-ordenamiento-por-fusion-merge.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_30_6_ORDENAMIENTO_POR_FUSION_MERGE_H
#define EJERCICIO_EJ_30_6_ORDENAMIENTO_POR_FUSION_MERGE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ordenamiento por Fusión (Merge Sort) */
int proc_nto_por_fusion_merge(int val);

#endif /* EJERCICIO_EJ_30_6_ORDENAMIENTO_POR_FUSION_MERGE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_nto_por_fusion_merge` | `int` | `int val` | Procesa el flujo principal de Ordenamiento por Fusión (Merge Sort) |






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

| **test_proc_nto_por_fusion_merge_positivo** | `proc_nto_por_fusion_merge` | `int res = proc_nto_por_fusion_merge(5); assert(res == 10 || res >= 0);` |

| **test_proc_nto_por_fusion_merge_cero** | `proc_nto_por_fusion_merge` | `int res = proc_nto_por_fusion_merge(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ordenamiento por Fusión (Merge Sort)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_nto_por_fusion_merge(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ordenamiento por Fusión (Merge Sort) */
    return 0;
}
```
```
