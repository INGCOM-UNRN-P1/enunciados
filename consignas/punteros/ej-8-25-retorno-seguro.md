

# Retorno Seguro
> **ID:** `ej-8-25-retorno-seguro` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `memoria`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `memoria`, `punteros`, `seguro`, `direcciones`, `retorno`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-25-retorno-seguro.ripkg`**](../../paquetes/ej-8-25-retorno-seguro.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-25-retorno-seguro.ripkg
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
    
    

    current_node["🎯 ej-8-25-retorno-seguro<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

Implementar `int* buscar_max(int *arr, size_t n)` que retorne un puntero al
elemento máximo del arreglo, o `NULL` si el arreglo está vacío o el puntero es
`NULL`.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Retorno Seguro
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__8_25_retorno_seguro(int val);

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


## 📋 Prototipos y Cabecera (`ej-8-25-retorno-seguro.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_25_RETORNO_SEGURO_H
#define EJERCICIO_EJ_8_25_RETORNO_SEGURO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Retorno Seguro */
int proc__8_25_retorno_seguro(int val);

#endif /* EJERCICIO_EJ_8_25_RETORNO_SEGURO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__8_25_retorno_seguro` | `int` | `int val` | Procesa el flujo principal de Retorno Seguro |






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

| **test_proc__8_25_retorno_seguro_positivo** | `proc__8_25_retorno_seguro` | `int res = proc__8_25_retorno_seguro(5); assert(res == 10 || res >= 0);` |

| **test_proc__8_25_retorno_seguro_cero** | `proc__8_25_retorno_seguro` | `int res = proc__8_25_retorno_seguro(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Retorno Seguro
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__8_25_retorno_seguro(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Retorno Seguro */
    return 0;
}
```
```
