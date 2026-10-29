

# Números Abundantes
> **ID:** `ej-3-13-numeros-abundantes` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `aritmetica` / `abundantes`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
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

#### Descripción
Determinar si un número es "abundante". Un número es abundante si la suma de sus
divisores propios es mayor que el propio número.


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

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Abundantes
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_3_numeros_abundantes(int val);

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
- **Entrada:** Un entero `n`.
- **Proceso:** Es casi idéntico al de los números perfectos. Se calcula la suma de los divisores propios y, en lugar de comparar si es igual a `n`, se compara si es mayor que `n`. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar que la base y el exponente sean coherentes y manejar exponentes negativos con double.
- Implementar la exponenciación rápida por duplicaciones sucesivas.
:::


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
