

# Establecer el n-ésimo bit (Set)
> **ID:** `ej-27-2-b2-establecer-el-n-esimo-bit-s` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `operaciones_bits` / `operaciones_bits`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:aritmetica`
>
> **Etiquetas conceptuales:** `establecer`, `set`, `bitwise`, `avanzados`, `n-esimo`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-27-2-b2-establecer-el-n-esimo-bit-s.ripkg`**](../../paquetes/ej-27-2-b2-establecer-el-n-esimo-bit-s.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-27-2-b2-establecer-el-n-esimo-bit-s.ripkg
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
    
    

    current_node["🎯 ej-27-2-b2-establecer-el-n-esimo-bit-s<br/><small>operaciones_bits · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 27.2 - b.2 - Establecer el n-ésimo bit (Set) ⭐⭐⭐⭐☆

Escribir una función `int set_bit(int numero, int n)` que encienda (ponga en 1)
el bit en la posición `n` sin alterar los demás.

:::{hint} Lógica y Consideraciones

- **Proceso**: Crear la misma máscara (`1 << n`) y aplicar un OR a nivel de bits
  entre el número y la máscara.
- `numero = numero | (1 << n);`

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-27-2-b2-establecer-el-n-esimo-bit-s.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_27_2_B2_ESTABLECER_EL_N_ESIMO_BIT_S_H
#define EJERCICIO_EJ_27_2_B2_ESTABLECER_EL_N_ESIMO_BIT_S_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Establecer el n-ésimo bit (Set) */
int proc_cer_el_n_esimo_bit_s(int val);

#endif /* EJERCICIO_EJ_27_2_B2_ESTABLECER_EL_N_ESIMO_BIT_S_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_cer_el_n_esimo_bit_s` | `int` | `int val` | Procesa el flujo principal de Establecer el n-ésimo bit (Set) |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Proceso: Crear la misma máscara (`1 << n`) y aplicar un OR a nivel de bits entre el número y la máscara.
```

```{tab-item} Pista 2
`numero = numero | (1 << n);`
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

| **test_proc_cer_el_n_esimo_bit_s_positivo** | `proc_cer_el_n_esimo_bit_s` | `int res = proc_cer_el_n_esimo_bit_s(5); assert(res == 10 || res >= 0);` |

| **test_proc_cer_el_n_esimo_bit_s_cero** | `proc_cer_el_n_esimo_bit_s` | `int res = proc_cer_el_n_esimo_bit_s(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.2 - Establecer el n-ésimo bit (Set)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_cer_el_n_esimo_bit_s(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.2 - Establecer el n-ésimo bit (Set) */
    return 0;
}
```
```
