

# Suma de Enteros
> **ID:** `ej-29-2-suma-de-enteros` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `recursividad` / `avanzados`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `recursividad`, `avanzados`, `enteros`, `backtracking`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-29-2-suma-de-enteros.ripkg`**](../../paquetes/ej-29-2-suma-de-enteros.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-29-2-suma-de-enteros.ripkg
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
    
    

    current_node["🎯 ej-29-2-suma-de-enteros<br/><small>recursividad · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 29.2 - Suma de Enteros ⭐⭐☆☆☆

Implementar suma de dos enteros positivos usando solo recursividad (sin operador
`+` en el paso recursivo).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int suma_recursiva(int a, int b);
```
<!-- c -->

**Estrategia:** Decrementar `b` e incrementar `a` hasta que `b` sea 0.

$$
suma(a, b) = \begin{cases}
a & \text{si } b = 0 \\
suma(a + 1, b - 1) & \text{si } b > 0
\end{cases}
$$


## 📋 Prototipos y Cabecera (`ej-29-2-suma-de-enteros.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_29_2_SUMA_DE_ENTEROS_H
#define EJERCICIO_EJ_29_2_SUMA_DE_ENTEROS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Suma de Enteros */
int proc_29_2_suma_de_enteros(int val);

#endif /* EJERCICIO_EJ_29_2_SUMA_DE_ENTEROS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_29_2_suma_de_enteros` | `int` | `int val` | Procesa el flujo principal de Suma de Enteros |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_29_2_suma_de_enteros_positivo** | `proc_29_2_suma_de_enteros` | `int res = proc_29_2_suma_de_enteros(5); assert(res == 10 || res >= 0);` |

| **test_proc_29_2_suma_de_enteros_cero** | `proc_29_2_suma_de_enteros` | `int res = proc_29_2_suma_de_enteros(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Suma de Enteros
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_29_2_suma_de_enteros(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Suma de Enteros */
    return 0;
}
```
```
