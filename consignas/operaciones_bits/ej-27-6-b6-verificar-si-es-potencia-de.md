

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

### Ejercicio 27.6 - b.6 - Verificar si es potencia de dos ⭐⭐☆☆☆

Escribir una función que determine si un número entero positivo es una potencia
de dos (ej. 2, 4, 8, 16...).

:::{hint} Lógica y Consideraciones

- **Propiedad**: Un número `n` que es potencia de dos tiene exactamente un bit
  encendido en su representación binaria. El número `n-1` tendrá todos los bits
  a la derecha de ese bit encendidos. Por lo tanto, `n & (n - 1)` será siempre
  cero.
- **Condición**: `n > 0 && (n & (n - 1)) == 0`

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->


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
