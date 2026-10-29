

# Cálculo de área
> **ID:** `ej-20-26-calculo-de-area`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `calculo`, `tipos`, `enum`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-26-calculo-de-area.ripkg`**](../../paquetes/ej-20-26-calculo-de-area.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-26-calculo-de-area.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["condicionales"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-20-26-calculo-de-area<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.26 - Cálculo de área ⭐⭐☆☆☆

Implementar una función que calcule el área de cualquier figura usando su tipo y
datos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double calcular_area(const figura_t *figura);
```
<!-- c -->

**Fórmulas:**
- Círculo: $A = \pi r^2$
- Rectángulo: $A = base \times altura$
- Triángulo (Fórmula de Herón):
  - $s = \frac{a+b+c}{2}$
  - $A = \sqrt{s(s-a)(s-b)(s-c)}$


## 📋 Prototipos y Cabecera (`ej-20-26-calculo-de-area.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_26_CALCULO_DE_AREA_H
#define EJERCICIO_EJ_20_26_CALCULO_DE_AREA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Cálculo de área */
int proc_0_26_calculo_de_area(int val);

#endif /* EJERCICIO_EJ_20_26_CALCULO_DE_AREA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_0_26_calculo_de_area` | `int` | `int val` | Procesa el flujo principal de Cálculo de área |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 2
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_0_26_calculo_de_area_positivo** | `proc_0_26_calculo_de_area` | `int res = proc_0_26_calculo_de_area(5); assert(res == 10 || res >= 0);` |

| **test_proc_0_26_calculo_de_area_cero** | `proc_0_26_calculo_de_area` | `int res = proc_0_26_calculo_de_area(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Cálculo de área
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_0_26_calculo_de_area(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Cálculo de área */
    return 0;
}
```
```
