

# Librería de Manipulación de Conjuntos sobre Arreglos
> **ID:** `ej-7-14-libreria-de-manipulacion-de-co`
 · **Tema:** `librerias`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `sobre`, `fundamentos`, `headers`, `libreria`, `arreglos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-14-libreria-de-manipulacion-de-co.ripkg`**](../../paquetes/ej-7-14-libreria-de-manipulacion-de-co.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-14-libreria-de-manipulacion-de-co.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-7-14-libreria-de-manipulacion-de-co<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 7.14 - Librería de Manipulación de Conjuntos sobre Arreglos ⭐⭐⭐⭐☆

Implementá `conjunto_arr.h` y `conjunto_arr.c`:
- `size_t conj_union(const int *A, size_t nA, const int *B, size_t nB, int *C)`
- `size_t conj_interseccion(const int *A, size_t nA, const int *B, size_t nB, int *C)`
- `size_t conj_diferencia(const int *A, size_t nA, const int *B, size_t nB, int *C)`
- `bool conj_pertenece(const int *A, size_t nA, int elem)`

:::{hint} Lógica y Consideraciones
- Las funciones retornan la cantidad efectiva de elementos colocados en el arreglo resultado `C`.
:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-7-14-libreria-de-manipulacion-de-co.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_14_LIBRERIA_DE_MANIPULACION_DE_CO_H
#define EJERCICIO_EJ_7_14_LIBRERIA_DE_MANIPULACION_DE_CO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Manipulación de Conjuntos sobre Arreglos */
int proc_e_manipulacion_de_co(int val);

#endif /* EJERCICIO_EJ_7_14_LIBRERIA_DE_MANIPULACION_DE_CO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_manipulacion_de_co` | `int` | `int val` | Procesa el flujo principal de Librería de Manipulación de Conjuntos sobre Arreglos |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Las funciones retornan la cantidad efectiva de elementos colocados en el arreglo resultado `C`.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_manipulacion_de_co_positivo** | `proc_e_manipulacion_de_co` | `int res = proc_e_manipulacion_de_co(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_manipulacion_de_co_cero** | `proc_e_manipulacion_de_co` | `int res = proc_e_manipulacion_de_co(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Manipulación de Conjuntos sobre Arreglos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_manipulacion_de_co(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Manipulación de Conjuntos sobre Arreglos */
    return 0;
}
```
```
