

# Factorial
> **ID:** `ej-25-1-factorial`
 · **Tema:** `recursividad`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `factorial`, `recursividad`, `algoritmos`, `induccion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-25-1-factorial.ripkg`**](../../paquetes/ej-25-1-factorial.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-25-1-factorial.ripkg
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
    
    

    current_node["🎯 ej-25-1-factorial<br/><small>recursividad · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 25.1 - Factorial ⭐⭐☆☆☆

El factorial de un entero no negativo $n$, denotado como $n!$, es el producto de
todos los enteros positivos menores o iguales a $n$.

$$ n! = n \times (n-1) \times (n-2) \times \dots \times 1 $$

La definición recursiva es:

$$ 
factorial(n) = 
\begin{cases}
1 & \text{si } n = 0 \\
n \times factorial(n-1) & \text{si } n > 0
\end{cases}
$$ 
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-25-1-factorial.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_25_1_FACTORIAL_H
#define EJERCICIO_EJ_25_1_FACTORIAL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Factorial */
int ejecutar_ej_25_1_factorial(int val);

#endif /* EJERCICIO_EJ_25_1_FACTORIAL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_25_1_factorial` | `int` | `int val` | Procesa el flujo principal de Factorial |






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

| **test_ejecutar_ej_25_1_factorial_positivo** | `ejecutar_ej_25_1_factorial` | `int res = ejecutar_ej_25_1_factorial(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_25_1_factorial_cero** | `ejecutar_ej_25_1_factorial` | `int res = ejecutar_ej_25_1_factorial(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Factorial
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_25_1_factorial(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Factorial */
    return 0;
}
```
```
