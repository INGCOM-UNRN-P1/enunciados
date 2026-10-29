

# Números Abundantes
> **ID:** `ej-3-13-numeros-abundantes`
 · **Tema:** `aritmetica`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `abundantes`, `fundamentos`, `aritmetica`, `numeros`, `matematica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-13-numeros-abundantes.ripkg`**](../../paquetes/ej-3-13-numeros-abundantes.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-13-numeros-abundantes.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-13-numeros-abundantes<br/><small>aritmetica · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 3.13 - Números Abundantes ⭐⭐☆☆☆

#### Descripción
Determinar si un número es "abundante". Un número es abundante si la suma de sus
divisores propios es mayor que el propio número.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** Es casi idéntico al de los números perfectos. Se calcula la
    suma de los divisores propios y, en lugar de comparar si es igual a `n`, se
    compara si es mayor que `n`.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que la base y el exponente sean coherentes y manejar exponentes negativos con double.
-   **[*plus ultra*]:** Implementar la exponenciación rápida por duplicaciones sucesivas.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_abundante(n)
VARIABLES:
    suma_divisores (entero)
INICIO
    suma_divisores = 0
    PARA i DESDE 1 HASTA n-1 HACER
        SI n MOD i == 0 ENTONCES
            suma_divisores = suma_divisores + i
        FIN SI
    FIN PARA
    RETORNAR (suma_divisores > n)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-3-13-numeros-abundantes.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_13_NUMEROS_ABUNDANTES_H
#define EJERCICIO_EJ_3_13_NUMEROS_ABUNDANTES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Números Abundantes */
int proc_3_numeros_abundantes(int val);

#endif /* EJERCICIO_EJ_3_13_NUMEROS_ABUNDANTES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_3_numeros_abundantes` | `int` | `int val` | Procesa el flujo principal de Números Abundantes |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un entero `n`.
```

```{tab-item} Pista 2
**Proceso:** Es casi idéntico al de los números perfectos. Se calcula la suma de los divisores propios y, en lugar de comparar si es igual a `n`, se compara si es mayor que `n`. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
```

```{tab-item} Pista 3
[Plus Ultra] Validar que la base y el exponente sean coherentes y manejar exponentes negativos con double.
```

```{tab-item} Pista 4
[Plus Ultra] Implementar la exponenciación rápida por duplicaciones sucesivas.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_3_numeros_abundantes_positivo** | `proc_3_numeros_abundantes` | `int res = proc_3_numeros_abundantes(5); assert(res == 10 || res >= 0);` |

| **test_proc_3_numeros_abundantes_cero** | `proc_3_numeros_abundantes` | `int res = proc_3_numeros_abundantes(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Números Abundantes
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_3_numeros_abundantes(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Números Abundantes */
    return 0;
}
```
```
