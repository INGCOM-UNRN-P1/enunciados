

# Typedef para un Puntero a Función
> **ID:** `ej-26-3-typedef-para-un-puntero-a-func` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `punteros_avanzados` / `doble_puntero`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `doble_puntero`, `funcion`, `punteros_funcion`, `puntero`, `avanzados`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-26-3-typedef-para-un-puntero-a-func.ripkg`**](../../paquetes/ej-26-3-typedef-para-un-puntero-a-func.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-26-3-typedef-para-un-puntero-a-func.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria_dinamica"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-26-3-typedef-para-un-puntero-a-func<br/><small>punteros_avanzados · B1</small>"]

    
```


## 📖 Consigna

Definir un tipo llamado `operacion_aritmetica_t` usando `typedef` que represente
un puntero a una función que toma dos enteros y devuelve un entero.

**Sintaxis:**
`typedef int (*operacion_aritmetica_t)(int, int);`
- `int (*...)`: El puntero devuelve un `int`.
- `operacion_aritmetica_t`: Es el nuevo nombre del tipo.
- `(int, int)`: El puntero apunta a una función que toma dos `int` como
  parámetros.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Typedef para un Puntero a Función
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ra_un_puntero_a_func(int val);

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


## 📋 Prototipos y Cabecera (`ej-26-3-typedef-para-un-puntero-a-func.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_26_3_TYPEDEF_PARA_UN_PUNTERO_A_FUNC_H
#define EJERCICIO_EJ_26_3_TYPEDEF_PARA_UN_PUNTERO_A_FUNC_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Typedef para un Puntero a Función */
int proc_ra_un_puntero_a_func(int val);

#endif /* EJERCICIO_EJ_26_3_TYPEDEF_PARA_UN_PUNTERO_A_FUNC_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ra_un_puntero_a_func` | `int` | `int val` | Procesa el flujo principal de Typedef para un Puntero a Función |






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

| **test_proc_ra_un_puntero_a_func_positivo** | `proc_ra_un_puntero_a_func` | `int res = proc_ra_un_puntero_a_func(5); assert(res == 10 || res >= 0);` |

| **test_proc_ra_un_puntero_a_func_cero** | `proc_ra_un_puntero_a_func` | `int res = proc_ra_un_puntero_a_func(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Typedef para un Puntero a Función
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ra_un_puntero_a_func(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Typedef para un Puntero a Función */
    return 0;
}
```
```
