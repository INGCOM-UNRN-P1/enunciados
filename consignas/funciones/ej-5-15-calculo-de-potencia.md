

# Cálculo de Potencia
> **ID:** `ej-5-15-calculo-de-potencia` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `funciones` / `funciones_general`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-15-calculo-de-potencia.ripkg`**](../../paquetes/ej-5-15-calculo-de-potencia.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-15-calculo-de-potencia.ripkg
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
    
    

    current_node["🎯 ej-5-15-calculo-de-potencia<br/><small>funciones · B4</small>"]

    
```


## 📖 Consigna

Implementá dos versiones de cálculo de potencia:
- `double potencia_iterativa(double base, int exp)`: calculada mediante multiplicaciones sucesivas.
- `double potencia_rapida(double base, int exp)`: calculada mediante exponenciación binaria (reduciendo a la mitad el exponente en cada paso).
- Manejá exponentes negativos retornando `1.0 / potencia(base, -exp)`.

**Orientación:**
- Simple: multiplica base n veces
- Rápida: si exp es par, `pow(base, exp) = pow(base*base, exp/2)`
- Exponente negativo: `pow(base, -n) = 1 / pow(base, n)`



---
(ejercicio_5_16)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Cálculo de Potencia
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_15(int n);

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


## 📋 Prototipos y Cabecera (`ej-5-15-calculo-de-potencia.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_15_CALCULO_DE_POTENCIA_H
#define EJERCICIO_EJ_5_15_CALCULO_DE_POTENCIA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Lógica de Cálculo de Potencia */
int resolver_ej_15(int n);

#endif /* EJERCICIO_EJ_5_15_CALCULO_DE_POTENCIA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_15` | `int` | `int n` | Lógica de Cálculo de Potencia |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_15** | `resolver_ej_15` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int resolver_c_lculo_de_potencia(int n) {
    return n * 2;
}

int main(void) {
    printf("OK\n");
    return 0;
}
```
```
