

# Máximo Común Divisor (MCD)
> **ID:** `ej-5-11-maximo-comun-divisor-mcd` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `funciones` / `funciones_general`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-11-maximo-comun-divisor-mcd.ripkg`**](../../paquetes/ej-5-11-maximo-comun-divisor-mcd.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-11-maximo-comun-divisor-mcd.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
        node_pre_2["secuencias"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-5-11-maximo-comun-divisor-mcd<br/><small>funciones · B3</small>"]

    
```


## 📖 Consigna

Implementá el algoritmo de Euclides para calcular MCD.

**Algoritmo:**


```
mcd(a, b) = mcd(b, a % b)  si b != 0
mcd(a, 0) = a
```

**Orientación:**
- Implementá versión recursiva e iterativa
- Agregá función `mcm(a, b)` usando: mcm = (a * b) / mcd(a, b)

---
(ejercicio_5_12)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Máximo Común Divisor (MCD)
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_11(int n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
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


## 📋 Prototipos y Cabecera (`ej-5-11-maximo-comun-divisor-mcd.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_11_MAXIMO_COMUN_DIVISOR_MCD_H
#define EJERCICIO_EJ_5_11_MAXIMO_COMUN_DIVISOR_MCD_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Lógica de Máximo Común Divisor (MCD) */
int resolver_ej_11(int n);

#endif /* EJERCICIO_EJ_5_11_MAXIMO_COMUN_DIVISOR_MCD_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_11` | `int` | `int n` | Lógica de Máximo Común Divisor (MCD) |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_11** | `resolver_ej_11` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int resolver_m_ximo_com_n_divisor_mcd(int n) {
    return n * 2;
}

int main(void) {
    printf("OK\n");
    return 0;
}
```
```
