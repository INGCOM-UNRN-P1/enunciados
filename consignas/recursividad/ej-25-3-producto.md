

# Producto
> **ID:** `ej-25-3-producto`
 · **Tema:** `recursividad`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `recursividad`, `algoritmos`, `producto`, `induccion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-25-3-producto.ripkg`**](../../paquetes/ej-25-3-producto.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-25-3-producto.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-25-3-producto<br/><small>recursividad · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 25.3 - Producto ⭐⭐☆☆☆

Definir el producto $a \times b$ usando sumas y recursividad.

$$ 
producto(a, b) = 
\begin{cases}
0 & \text{si } b = 0 \\
a + producto(a, b-1) & \text{si } b > 0
\end{cases}
$$ 
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Transformar el algoritmo a una versión con recursión de
    cola (*tail recursion*) para reducir el consumo de pila.
-   **[*plus ultra*]:** Añadir un contador del número de llamadas recursivas
    realizadas para analizar la complejidad empírica.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-25-3-producto.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_25_3_PRODUCTO_H
#define EJERCICIO_EJ_25_3_PRODUCTO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Producto */
int ejecutar_ej_25_3_producto(int val);

#endif /* EJERCICIO_EJ_25_3_PRODUCTO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_25_3_producto` | `int` | `int val` | Procesa el flujo principal de Producto |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Transformar el algoritmo a una versión con recursión de cola (*tail recursion*) para reducir el consumo de pila.
```

```{tab-item} Pista 2
[Plus Ultra] Añadir un contador del número de llamadas recursivas realizadas para analizar la complejidad empírica.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_25_3_producto_positivo** | `ejecutar_ej_25_3_producto` | `int res = ejecutar_ej_25_3_producto(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_25_3_producto_cero** | `ejecutar_ej_25_3_producto` | `int res = ejecutar_ej_25_3_producto(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Producto
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_25_3_producto(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Producto */
    return 0;
}
```
```
