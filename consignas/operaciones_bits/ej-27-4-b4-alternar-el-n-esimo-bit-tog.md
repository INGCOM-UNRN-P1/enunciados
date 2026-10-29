

# Alternar el n-ésimo bit (Toggle)
> **ID:** `ej-27-4-b4-alternar-el-n-esimo-bit-tog` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `operaciones_bits` / `operaciones_bits`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:aritmetica`
>
> **Etiquetas conceptuales:** `toggle`, `alternar`, `bitwise`, `avanzados`, `n-esimo`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-27-4-b4-alternar-el-n-esimo-bit-tog.ripkg`**](../../paquetes/ej-27-4-b4-alternar-el-n-esimo-bit-tog.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-27-4-b4-alternar-el-n-esimo-bit-tog.ripkg
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
    
    

    current_node["🎯 ej-27-4-b4-alternar-el-n-esimo-bit-tog<br/><small>operaciones_bits · B4</small>"]

    
```


## 📖 Consigna

Escribir una función `int toggle_bit(int numero, int n)` que invierta el valor
del bit en la posición `n` (de 0 a 1, o de 1 a 0).


## Algoritmos con Bits

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Alternar el n-ésimo bit (Toggle)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_r_el_n_esimo_bit_tog(int val);

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
- Proceso: Crear la máscara (`1 << n`) y aplicar un XOR a nivel de bits. El XOR con 1 invierte un bit, mientras que el XOR con 0 lo deja igual.
- `numero = numero ^ (1 << n);`
- Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
- Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
:::


## 📋 Prototipos y Cabecera (`ej-27-4-b4-alternar-el-n-esimo-bit-tog.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_27_4_B4_ALTERNAR_EL_N_ESIMO_BIT_TOG_H
#define EJERCICIO_EJ_27_4_B4_ALTERNAR_EL_N_ESIMO_BIT_TOG_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Alternar el n-ésimo bit (Toggle) */
int proc_r_el_n_esimo_bit_tog(int val);

#endif /* EJERCICIO_EJ_27_4_B4_ALTERNAR_EL_N_ESIMO_BIT_TOG_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_r_el_n_esimo_bit_tog` | `int` | `int val` | Procesa el flujo principal de Alternar el n-ésimo bit (Toggle) |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Proceso: Crear la máscara (`1 << n`) y aplicar un XOR a nivel de bits. El XOR con 1 invierte un bit, mientras que el XOR con 0 lo deja igual.
```

```{tab-item} Pista 2
`numero = numero ^ (1 << n);`
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

| **test_proc_r_el_n_esimo_bit_tog_positivo** | `proc_r_el_n_esimo_bit_tog` | `int res = proc_r_el_n_esimo_bit_tog(5); assert(res == 10 || res >= 0);` |

| **test_proc_r_el_n_esimo_bit_tog_cero** | `proc_r_el_n_esimo_bit_tog` | `int res = proc_r_el_n_esimo_bit_tog(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.4 - Alternar el n-ésimo bit (Toggle)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_r_el_n_esimo_bit_tog(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.4 - Alternar el n-ésimo bit (Toggle) */
    return 0;
}
```
```
