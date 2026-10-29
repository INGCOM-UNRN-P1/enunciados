

# Intercambio con XOR
> **ID:** `ej-27-7-b7-intercambio-con-xor` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `operaciones_bits` / `operaciones_bits`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:aritmetica`
>
> **Etiquetas conceptuales:** `bitwise`, `avanzados`, `intercambio`, `mascaras`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-27-7-b7-intercambio-con-xor.ripkg`**](../../paquetes/ej-27-7-b7-intercambio-con-xor.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-27-7-b7-intercambio-con-xor.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["aritmetica"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-27-7-b7-intercambio-con-xor<br/><small>operaciones_bits · B4</small>"]

    
```


## 📖 Consigna

Implementar una función `void swap(int *a, int *b)` que intercambie los valores
de dos variables sin usar una variable temporal, utilizando únicamente el
operador XOR.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Intercambio con XOR
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__intercambio_con_xor(int val);

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
- Proceso:
- `*a = *a ^ *b;`
- `*b = *a ^ *b;` // Ahora `b` tiene el valor original de `a`
- `*a = *a ^ *b;` // Ahora `a` tiene el valor original de `b`
- Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
- Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
:::


## 📋 Prototipos y Cabecera (`ej-27-7-b7-intercambio-con-xor.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_27_7_B7_INTERCAMBIO_CON_XOR_H
#define EJERCICIO_EJ_27_7_B7_INTERCAMBIO_CON_XOR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Intercambio con XOR */
int proc__intercambio_con_xor(int val);

#endif /* EJERCICIO_EJ_27_7_B7_INTERCAMBIO_CON_XOR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__intercambio_con_xor` | `int` | `int val` | Procesa el flujo principal de Intercambio con XOR |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Proceso:
```

```{tab-item} Pista 2
`*a = *a ^ *b;`
```

```{tab-item} Pista 3
`*b = *a ^ *b;` // Ahora `b` tiene el valor original de `a`
```

```{tab-item} Pista 4
`*a = *a ^ *b;` // Ahora `a` tiene el valor original de `b`
```

```{tab-item} Pista 5
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 6
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__intercambio_con_xor_positivo** | `proc__intercambio_con_xor` | `int res = proc__intercambio_con_xor(5); assert(res == 10 || res >= 0);` |

| **test_proc__intercambio_con_xor_cero** | `proc__intercambio_con_xor` | `int res = proc__intercambio_con_xor(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.7 - Intercambio con XOR
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__intercambio_con_xor(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.7 - Intercambio con XOR */
    return 0;
}
```
```
