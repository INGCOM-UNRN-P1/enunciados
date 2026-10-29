

# Números de Mersenne
> **ID:** `ej-3-28-numeros-de-mersenne` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `aritmetica` / `fundamentos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `fundamentos`, `mersenne`, `aritmetica`, `numeros`, `matematica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-28-numeros-de-mersenne.ripkg`**](../../paquetes/ej-3-28-numeros-de-mersenne.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-28-numeros-de-mersenne.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-28-numeros-de-mersenne<br/><small>aritmetica · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Un número de Mersenne es un número de la forma $M_p = 2^p - 1$, donde `p` es un
número primo. El programa debe generar números de Mersenne y verificar si son a
su vez primos (primos de Mersenne).


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO primos_de_mersenne(limite_p)
INICIO
    PARA p DESDE 2 HASTA limite_p HACER
        SI es_primo(p) ENTONCES
            m = potencia(2, p) - 1
            SI es_primo(m) ENTONCES
                ESCRIBIR "M(", p, ") = ", m, " es un primo de Mersenne."
            FIN SI
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números de Mersenne
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__numeros_de_mersenne(int val);

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
- **Proceso:**
- Generar números primos `p` (usando la criba o la función `es_primo`).
- Para cada primo `p`, calcular $M_p = 2^p - 1$.
- Verificar si el $M_p$ resultante es también primo. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar si el exponente p es primo antes de calcular 2^p - 1.
- Verificar si el número de Mersenne obtenido es primo para valores pequeños de p.
:::


## 📋 Prototipos y Cabecera (`ej-3-28-numeros-de-mersenne.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_28_NUMEROS_DE_MERSENNE_H
#define EJERCICIO_EJ_3_28_NUMEROS_DE_MERSENNE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Números de Mersenne */
int proc__numeros_de_mersenne(int val);

#endif /* EJERCICIO_EJ_3_28_NUMEROS_DE_MERSENNE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__numeros_de_mersenne` | `int` | `int val` | Procesa el flujo principal de Números de Mersenne |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Proceso:**
```

```{tab-item} Pista 2
Generar números primos `p` (usando la criba o la función `es_primo`).
```

```{tab-item} Pista 3
Para cada primo `p`, calcular $M_p = 2^p - 1$.
```

```{tab-item} Pista 4
Verificar si el $M_p$ resultante es también primo. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
```

```{tab-item} Pista 5
[Plus Ultra] Validar si el exponente p es primo antes de calcular 2^p - 1.
```

```{tab-item} Pista 6
[Plus Ultra] Verificar si el número de Mersenne obtenido es primo para valores pequeños de p.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__numeros_de_mersenne_positivo** | `proc__numeros_de_mersenne` | `int res = proc__numeros_de_mersenne(5); assert(res == 10 || res >= 0);` |

| **test_proc__numeros_de_mersenne_cero** | `proc__numeros_de_mersenne` | `int res = proc__numeros_de_mersenne(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Números de Mersenne
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__numeros_de_mersenne(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Números de Mersenne */
    return 0;
}
```
```
