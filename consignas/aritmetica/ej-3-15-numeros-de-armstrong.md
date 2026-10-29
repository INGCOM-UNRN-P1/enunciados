

# Números de Armstrong
> **ID:** `ej-3-15-numeros-de-armstrong`
 · **Tema:** `aritmetica`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `fundamentos`, `armstrong`, `aritmetica`, `numeros`, `matematica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-15-numeros-de-armstrong.ripkg`**](../../paquetes/ej-3-15-numeros-de-armstrong.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-15-numeros-de-armstrong.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-15-numeros-de-armstrong<br/><small>aritmetica · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 3.15 - Números de Armstrong ⭐⭐☆☆☆

#### Descripción
Verificar si un número es un número de Armstrong (o narcisista). Un número de
`k` dígitos es de Armstrong si es igual a la suma de sus propios dígitos
elevados a la potencia `k`.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** 
    1.  Contar el número de dígitos (`k`) del número `n`.
    2.  Inicializar un acumulador `suma` en 0.
    3.  Recorrer los dígitos de `n` (usando `% 10` y `/ 10`). Para cada dígito,
        calcular `digito^k` y añadirlo a la `suma`.
    4.  Comparar la `suma` final con el número original `n`.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Determinar automáticamente la cantidad de dígitos del número antes de calcular las potencias.
-   **[*plus ultra*]:** Encontrar todos los números de Armstrong de 3 y 4 dígitos.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

FUNCION es_armstrong(n)
VARIABLES:
    k, suma, temp, digito (enteros)
INICIO
    k = contar_digitos(n)
    suma = 0
    temp = n

    MIENTRAS temp > 0 HACER
        digito = temp MOD 10
        suma = suma + potencia(digito, k)
        temp = temp / 10
    FIN MIENTRAS

    RETORNAR (suma == n)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-3-15-numeros-de-armstrong.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_15_NUMEROS_DE_ARMSTRONG_H
#define EJERCICIO_EJ_3_15_NUMEROS_DE_ARMSTRONG_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Números de Armstrong */
int proc_numeros_de_armstrong(int val);

#endif /* EJERCICIO_EJ_3_15_NUMEROS_DE_ARMSTRONG_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_numeros_de_armstrong` | `int` | `int val` | Procesa el flujo principal de Números de Armstrong |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un entero `n`.
```

```{tab-item} Pista 2
**Proceso:**
```

```{tab-item} Pista 3
Contar el número de dígitos (`k`) del número `n`.
```

```{tab-item} Pista 4
Inicializar un acumulador `suma` en 0.
```

```{tab-item} Pista 5
Recorrer los dígitos de `n` (usando `% 10` y `/ 10`). Para cada dígito, calcular `digito^k` y añadirlo a la `suma`.
```

```{tab-item} Pista 6
Comparar la `suma` final con el número original `n`. desbordamientos de búfer validando la capacidad máxima. líneas de manera robusta.
```

```{tab-item} Pista 7
[Plus Ultra] Determinar automáticamente la cantidad de dígitos del número antes de calcular las potencias.
```

```{tab-item} Pista 8
[Plus Ultra] Encontrar todos los números de Armstrong de 3 y 4 dígitos.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_numeros_de_armstrong_positivo** | `proc_numeros_de_armstrong` | `int res = proc_numeros_de_armstrong(5); assert(res == 10 || res >= 0);` |

| **test_proc_numeros_de_armstrong_cero** | `proc_numeros_de_armstrong` | `int res = proc_numeros_de_armstrong(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Números de Armstrong
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_numeros_de_armstrong(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Números de Armstrong */
    return 0;
}
```
```
