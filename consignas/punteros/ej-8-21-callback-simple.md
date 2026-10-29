

# Callback Simple
> **ID:** `ej-8-21-callback-simple`
 · **Tema:** `punteros`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `callback`, `memoria`, `punteros`, `direcciones`, `simple`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-21-callback-simple.ripkg`**](../../paquetes/ej-8-21-callback-simple.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-21-callback-simple.ripkg
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
    
    

    current_node["🎯 ej-8-21-callback-simple<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.21 - Callback Simple ⭐☆☆☆☆

Implementar `void aplicar(int *arr, size_t n, void (*func)(int *))` que aplique
una función a cada elemento del arreglo.

**Ejemplo de uso:**

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void duplicar_elemento(int *x)
{
    *x *= 2;
}
int arr[] = {1, 2, 3, 4, 5};
aplicar(arr, 5, duplicar_elemento);
// arr ahora es {2, 4, 6, 8, 10}
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-8-21-callback-simple.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_21_CALLBACK_SIMPLE_H
#define EJERCICIO_EJ_8_21_CALLBACK_SIMPLE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Callback Simple */
int proc_8_21_callback_simple(int val);

#endif /* EJERCICIO_EJ_8_21_CALLBACK_SIMPLE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_8_21_callback_simple` | `int` | `int val` | Procesa el flujo principal de Callback Simple |






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

| **test_proc_8_21_callback_simple_positivo** | `proc_8_21_callback_simple` | `int res = proc_8_21_callback_simple(5); assert(res == 10 || res >= 0);` |

| **test_proc_8_21_callback_simple_cero** | `proc_8_21_callback_simple` | `int res = proc_8_21_callback_simple(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Callback Simple
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_8_21_callback_simple(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Callback Simple */
    return 0;
}
```
```
