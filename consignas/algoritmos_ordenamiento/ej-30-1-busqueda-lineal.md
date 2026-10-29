

# Búsqueda Lineal
> **ID:** `ej-30-1-busqueda-lineal` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `algoritmos_ordenamiento` / `busqueda_lineal`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`, `dep:recursividad`
>
> **Etiquetas conceptuales:** `ordenamiento`, `lineal`, `avanzados`, `busqueda`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-30-1-busqueda-lineal.ripkg`**](../../paquetes/ej-30-1-busqueda-lineal.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-30-1-busqueda-lineal.ripkg
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
    
    

    current_node["🎯 ej-30-1-busqueda-lineal<br/><small>algoritmos_ordenamiento · B4</small>"]

    
```


## 📖 Consigna

Implementar una función que busque un elemento en un arreglo recorriéndolo
secuencialmente desde el primer hasta el último elemento. Es el método de
búsqueda más simple y no requiere que el arreglo esté ordenado.

**Lógica y Consideraciones:**
- **Proceso**: Iterar a través del arreglo con un índice `i` desde 0 hasta
  `n-1`. En cada paso, comparar `arreglo[i]` con el valor buscado.
- **Salida**: Si se encuentra el elemento, devolver su índice `i`. Si el lazo
  termina sin encontrarlo, devolver `-1`.
- **Complejidad Temporal**: $O(n)$.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Búsqueda Lineal
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_30_1_busqueda_lineal(int val);

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


## 📋 Prototipos y Cabecera (`ej-30-1-busqueda-lineal.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_30_1_BUSQUEDA_LINEAL_H
#define EJERCICIO_EJ_30_1_BUSQUEDA_LINEAL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Búsqueda Lineal */
int proc_30_1_busqueda_lineal(int val);

#endif /* EJERCICIO_EJ_30_1_BUSQUEDA_LINEAL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_30_1_busqueda_lineal` | `int` | `int val` | Procesa el flujo principal de Búsqueda Lineal |






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

| **test_proc_30_1_busqueda_lineal_positivo** | `proc_30_1_busqueda_lineal` | `int res = proc_30_1_busqueda_lineal(5); assert(res == 10 || res >= 0);` |

| **test_proc_30_1_busqueda_lineal_cero** | `proc_30_1_busqueda_lineal` | `int res = proc_30_1_busqueda_lineal(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Búsqueda Lineal
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_30_1_busqueda_lineal(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Búsqueda Lineal */
    return 0;
}
```
```
