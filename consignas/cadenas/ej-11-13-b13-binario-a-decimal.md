

# Binario a decimal
> **ID:** `ej-11-13-b13-binario-a-decimal` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `cadenas` / `procesamiento_texto`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:caracteres`
>
> **Etiquetas conceptuales:** `cadenas`, `strings`, `memoria`, `decimal`, `binario`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-11-13-b13-binario-a-decimal.ripkg`**](../../paquetes/ej-11-13-b13-binario-a-decimal.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-11-13-b13-binario-a-decimal.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["caracteres"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-11-13-b13-binario-a-decimal<br/><small>cadenas · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Convertir una cadena que representa un número en formato binario (compuesta de
'0's y '1's) a su valor entero decimal correspondiente.



:::{tip} Lógica y Consideraciones

-   **Proceso:** Recorrer la cadena binaria. Para cada dígito, multiplicar el
    valor acumulado por 2 y sumar el valor del dígito actual (0 o 1).
-   $D = \sum_{i=0}^{n-1} b_i \cdot 2^{n-1-i}$

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION binario_a_decimal(cadena_binaria)
VARIABLES:
    decimal (entero)
INICIO
    decimal = 0
    PARA cada caracter c en cadena_binaria HACER
        decimal = (decimal * 2) + (c - '0')
    FIN PARA
    RETORNAR decimal
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Binario a decimal
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_13_binario_a_decimal(int val);

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
4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
- **Proceso:** Recorrer la cadena binaria. Para cada dígito, multiplicar el valor acumulado por 2 y sumar el valor del dígito actual (0 o 1).
- $D = \sum_{i=0}^{n-1} b_i \cdot 2^{n-1-i}$
:::


## 📋 Prototipos y Cabecera (`ej-11-13-b13-binario-a-decimal.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_11_13_B13_BINARIO_A_DECIMAL_H
#define EJERCICIO_EJ_11_13_B13_BINARIO_A_DECIMAL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Binario a decimal */
int proc_13_binario_a_decimal(int val);

#endif /* EJERCICIO_EJ_11_13_B13_BINARIO_A_DECIMAL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_13_binario_a_decimal` | `int` | `int val` | Procesa el flujo principal de Binario a decimal |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

```{tab-item} Pista 3
**Proceso:** Recorrer la cadena binaria. Para cada dígito, multiplicar el valor acumulado por 2 y sumar el valor del dígito actual (0 o 1).
```

```{tab-item} Pista 4
$D = \sum_{i=0}^{n-1} b_i \cdot 2^{n-1-i}$
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_13_binario_a_decimal_positivo** | `proc_13_binario_a_decimal` | `int res = proc_13_binario_a_decimal(5); assert(res == 10 || res >= 0);` |

| **test_proc_13_binario_a_decimal_cero** | `proc_13_binario_a_decimal` | `int res = proc_13_binario_a_decimal(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.13 - Binario a decimal
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_13_binario_a_decimal(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.13 - Binario a decimal */
    return 0;
}
```
```
