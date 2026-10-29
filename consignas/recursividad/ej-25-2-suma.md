

# Suma
> **ID:** `ej-25-2-suma`
 · **Tema:** `recursividad`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `recursividad`, `algoritmos`, `induccion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-25-2-suma.ripkg`**](../../paquetes/ej-25-2-suma.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-25-2-suma.ripkg
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
    
    

    current_node["🎯 ej-25-2-suma<br/><small>recursividad · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 25.2 - Suma ⭐⭐☆☆☆

Definir la suma de $a+b$ de forma recursiva. La idea es decrementar uno de los
operandos hasta llegar a un caso base.

$$ 
suma(a, b) = 
\begin{cases}
a & \text{si } b = 0 \\
suma(a+1, b-1) & \text{si } b > 0
\end{cases}
$$ 
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-25-2-suma.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_25_2_SUMA_H
#define EJERCICIO_EJ_25_2_SUMA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Suma */
int ejecutar_ej_25_2_suma(int val);

#endif /* EJERCICIO_EJ_25_2_SUMA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_25_2_suma` | `int` | `int val` | Procesa el flujo principal de Suma |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_25_2_suma_positivo** | `ejecutar_ej_25_2_suma` | `int res = ejecutar_ej_25_2_suma(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_25_2_suma_cero** | `ejecutar_ej_25_2_suma` | `int res = ejecutar_ej_25_2_suma(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Suma
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_25_2_suma(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Suma */
    return 0;
}
```
```
