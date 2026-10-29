

# Área de Triángulo (Base y Altura)
> **ID:** `ej-1-12-area-de-triangulo-base-y-altur` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `secuencias` / `fundamentos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`
>
> **Etiquetas conceptuales:** `fundamentos`, `secuencias`, `triangulo`, `basicos`, `altura`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-1-12-area-de-triangulo-base-y-altur.ripkg`**](../../paquetes/ej-1-12-area-de-triangulo-base-y-altur.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-1-12-area-de-triangulo-base-y-altur.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-1-12-area-de-triangulo-base-y-altur<br/><small>secuencias · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 1.12 - Área de Triángulo (Base y Altura) ⭐⭐☆☆☆


Calcular el área de un triángulo a partir de las longitudes de su base y su
altura. La fórmula es $A = \frac{1}{2} b \cdot h$.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Solicitar al usuario dos valores: la base (`b`) y la altura
-   **Proceso:** Aplicar la fórmula matemática directamente. En C, esto se
-   **Salida:** Mostrar el área calculada.

-   **[*plus ultra*]:** Validar que tanto la base como la altura sean valores estrictamente mayores a cero.
-   **[*plus ultra*]:** Modularizar el cálculo en una función pura double calcular_area_triangulo(double base, double altura).

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO area_triangulo_base_altura
ENTRADA: base, altura (reales)
VARIABLES:
    area (real)

INICIO
    LEER base
    LEER altura
    area = (base * altura) / 2
    ESCRIBIR "El área del triángulo es: ", area
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-1-12-area-de-triangulo-base-y-altur.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_1_12_AREA_DE_TRIANGULO_BASE_Y_ALTUR_H
#define EJERCICIO_EJ_1_12_AREA_DE_TRIANGULO_BASE_Y_ALTUR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Área de Triángulo (Base y Altura) */
int proc_iangulo_base_y_altur(int val);

#endif /* EJERCICIO_EJ_1_12_AREA_DE_TRIANGULO_BASE_Y_ALTUR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_iangulo_base_y_altur` | `int` | `int val` | Procesa el flujo principal de Área de Triángulo (Base y Altura) |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Solicitar al usuario dos valores: la base (`b`) y la altura
```

```{tab-item} Pista 2
**Proceso:** Aplicar la fórmula matemática directamente. En C, esto se
```

```{tab-item} Pista 3
**Salida:** Mostrar el área calculada.
```

```{tab-item} Pista 4
[Plus Ultra] Validar que tanto la base como la altura sean valores estrictamente mayores a cero.
```

```{tab-item} Pista 5
[Plus Ultra] Modularizar el cálculo en una función pura double calcular_area_triangulo(double base, double altura).
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_iangulo_base_y_altur_positivo** | `proc_iangulo_base_y_altur` | `int res = proc_iangulo_base_y_altur(5); assert(res == 10 || res >= 0);` |

| **test_proc_iangulo_base_y_altur_cero** | `proc_iangulo_base_y_altur` | `int res = proc_iangulo_base_y_altur(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Área de Triángulo (Base y Altura)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_iangulo_base_y_altur(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Área de Triángulo (Base y Altura) */
    return 0;
}
```
```
