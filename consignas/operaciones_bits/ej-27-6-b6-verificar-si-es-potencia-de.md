

# Verificar si es potencia de dos
> **ID:** `ej-27-6-b6-verificar-si-es-potencia-de` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `operaciones_bits` / `operaciones_bits`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:aritmetica`
>
> **Etiquetas conceptuales:** `potencia`, `verificar`, `bitwise`, `avanzados`, `mascaras`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-27-6-b6-verificar-si-es-potencia-de.ripkg`**](../../paquetes/ej-27-6-b6-verificar-si-es-potencia-de.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-27-6-b6-verificar-si-es-potencia-de.ripkg
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
    
    

    current_node["🎯 ej-27-6-b6-verificar-si-es-potencia-de<br/><small>operaciones_bits · B4</small>"]

    
```


## 📖 Consigna

Escribir una función que determine si un número entero positivo es una potencia
de dos (ej. 2, 4, 8, 16...).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Verificar si es potencia de dos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ar_si_es_potencia_de(int val);

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
- Propiedad: Un número `n` que es potencia de dos tiene exactamente un bit encendido en su representación binaria. El número `n-1` tendrá todos los bits a la derecha de ese bit encendidos. Por lo tanto, `n & (n - 1)` será siempre cero.
- Condición: `n > 0 && (n & (n - 1)) == 0`
- Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
- Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
:::


## 📋 Prototipos y Cabecera (`ej-27-6-b6-verificar-si-es-potencia-de.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_27_6_B6_VERIFICAR_SI_ES_POTENCIA_DE_H
#define EJERCICIO_EJ_27_6_B6_VERIFICAR_SI_ES_POTENCIA_DE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Verificar si es potencia de dos */
int proc_ar_si_es_potencia_de(int val);

#endif /* EJERCICIO_EJ_27_6_B6_VERIFICAR_SI_ES_POTENCIA_DE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ar_si_es_potencia_de` | `int` | `int val` | Procesa el flujo principal de Verificar si es potencia de dos |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Propiedad: Un número `n` que es potencia de dos tiene exactamente un bit encendido en su representación binaria. El número `n-1` tendrá todos los bits a la derecha de ese bit encendidos. Por lo tanto, `n & (n - 1)` será siempre cero.
```

```{tab-item} Pista 2
Condición: `n > 0 && (n & (n - 1)) == 0`
```

```{tab-item} Pista 3
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 4
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_ar_si_es_potencia_de_positivo** | `proc_ar_si_es_potencia_de` | `int res = proc_ar_si_es_potencia_de(5); assert(res == 10 || res >= 0);` |

| **test_proc_ar_si_es_potencia_de_cero** | `proc_ar_si_es_potencia_de` | `int res = proc_ar_si_es_potencia_de(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.6 - Verificar si es potencia de dos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ar_si_es_potencia_de(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.6 - Verificar si es potencia de dos */
    return 0;
}
```
```
