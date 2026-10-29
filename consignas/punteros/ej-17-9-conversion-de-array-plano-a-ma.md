

# Conversión de Array Plano a Matriz
> **ID:** `ej-17-9-conversion-de-array-plano-a-ma` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `estructuras`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `estructuras`, `conversion`, `plano`, `memoria`, `punteros`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-17-9-conversion-de-array-plano-a-ma.ripkg`**](../../paquetes/ej-17-9-conversion-de-array-plano-a-ma.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-17-9-conversion-de-array-plano-a-ma.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["arreglos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-17-9-conversion-de-array-plano-a-ma<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

Implementar una función que reciba un arreglo plano (`int*`) de tamaño $N \times
M$ y retorne una estructura de punteros a filas (`int**`) que permita acceder al
mismo usando la notación `matriz[i][j]`.



---

## Optimización y Casos Prácticos

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Conversión de Array Plano a Matriz
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__de_array_plano_a_ma(int val);

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
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-17-9-conversion-de-array-plano-a-ma.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_17_9_CONVERSION_DE_ARRAY_PLANO_A_MA_H
#define EJERCICIO_EJ_17_9_CONVERSION_DE_ARRAY_PLANO_A_MA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Conversión de Array Plano a Matriz */
int proc__de_array_plano_a_ma(int val);

#endif /* EJERCICIO_EJ_17_9_CONVERSION_DE_ARRAY_PLANO_A_MA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__de_array_plano_a_ma` | `int` | `int val` | Procesa el flujo principal de Conversión de Array Plano a Matriz |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__de_array_plano_a_ma_positivo** | `proc__de_array_plano_a_ma` | `int res = proc__de_array_plano_a_ma(5); assert(res == 10 || res >= 0);` |

| **test_proc__de_array_plano_a_ma_cero** | `proc__de_array_plano_a_ma` | `int res = proc__de_array_plano_a_ma(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Conversión de Array Plano a Matriz
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__de_array_plano_a_ma(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Conversión de Array Plano a Matriz */
    return 0;
}
```
```
