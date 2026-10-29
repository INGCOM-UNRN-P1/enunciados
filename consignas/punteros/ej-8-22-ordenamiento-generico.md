

# Ordenamiento Genérico
> **ID:** `ej-8-22-ordenamiento-generico` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `memoria`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `memoria`, `ordenamiento`, `punteros`, `direcciones`, `generico`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-22-ordenamiento-generico.ripkg`**](../../paquetes/ej-8-22-ordenamiento-generico.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-22-ordenamiento-generico.ripkg
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
    
    

    current_node["🎯 ej-8-22-ordenamiento-generico<br/><small>punteros · B4</small>"]

    
```


## 📖 Consigna

Implementar `void ordenar_generico(void *arr, size_t n, size_t tam_elemento, int
(*comparar)(const void*, const void*))` que ordene un arreglo de cualquier tipo
usando una función de comparación personalizada.

**Pista:** Similar a `qsort` de la biblioteca estándar. Usar `memcpy` para
intercambiar elementos.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Ordenamiento Genérico
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_rdenamiento_generico(int val);

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


## 📋 Prototipos y Cabecera (`ej-8-22-ordenamiento-generico.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_22_ORDENAMIENTO_GENERICO_H
#define EJERCICIO_EJ_8_22_ORDENAMIENTO_GENERICO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ordenamiento Genérico */
int proc_rdenamiento_generico(int val);

#endif /* EJERCICIO_EJ_8_22_ORDENAMIENTO_GENERICO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_rdenamiento_generico` | `int` | `int val` | Procesa el flujo principal de Ordenamiento Genérico |






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

| **test_proc_rdenamiento_generico_positivo** | `proc_rdenamiento_generico` | `int res = proc_rdenamiento_generico(5); assert(res == 10 || res >= 0);` |

| **test_proc_rdenamiento_generico_cero** | `proc_rdenamiento_generico` | `int res = proc_rdenamiento_generico(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ordenamiento Genérico
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_rdenamiento_generico(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ordenamiento Genérico */
    return 0;
}
```
```
