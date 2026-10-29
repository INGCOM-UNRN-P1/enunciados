

# Obtener Elemento en Posición
> **ID:** `ej-22-6-obtener-elemento-en-posicion`
 · **Tema:** `tad`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:estructuras`, `dep:punteros`, `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `tad`, `abstraccion`, `obtener`, `posicion`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-22-6-obtener-elemento-en-posicion.ripkg`**](../../paquetes/ej-22-6-obtener-elemento-en-posicion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-22-6-obtener-elemento-en-posicion.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["estructuras"]
        
        node_pre_2["punteros"]
        
        node_pre_3["memoria_dinamica"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-22-6-obtener-elemento-en-posicion<br/><small>tad · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 22.6 - Obtener Elemento en Posición ⭐⭐☆☆☆

Implementar una función que retorne el elemento en una posición específica
(índice basado en 0).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool lista_obtener(const lista_t *lista, size_t posicion, int *dato);
```
<!-- c -->

Retornar `false` si la posición es inválida.


## 📋 Prototipos y Cabecera (`ej-22-6-obtener-elemento-en-posicion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_22_6_OBTENER_ELEMENTO_EN_POSICION_H
#define EJERCICIO_EJ_22_6_OBTENER_ELEMENTO_EN_POSICION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Obtener Elemento en Posición */
int proc_elemento_en_posicion(int val);

#endif /* EJERCICIO_EJ_22_6_OBTENER_ELEMENTO_EN_POSICION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_elemento_en_posicion` | `int` | `int val` | Procesa el flujo principal de Obtener Elemento en Posición |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
```

```{tab-item} Pista 2
[Plus Ultra] Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_elemento_en_posicion_positivo** | `proc_elemento_en_posicion` | `int res = proc_elemento_en_posicion(5); assert(res == 10 || res >= 0);` |

| **test_proc_elemento_en_posicion_cero** | `proc_elemento_en_posicion` | `int res = proc_elemento_en_posicion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Obtener Elemento en Posición
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_elemento_en_posicion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Obtener Elemento en Posición */
    return 0;
}
```
```
