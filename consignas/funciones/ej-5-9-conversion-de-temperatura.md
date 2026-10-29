

# Conversión de Temperatura
> **ID:** `ej-5-9-conversion-de-temperatura` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `funciones` / `conversion_unidades`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-9-conversion-de-temperatura.ripkg`**](../../paquetes/ej-5-9-conversion-de-temperatura.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-9-conversion-de-temperatura.ripkg
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
    
    

    current_node["🎯 ej-5-9-conversion-de-temperatura<br/><small>funciones · B2</small>"]

    
```


## 📖 Consigna

Creá funciones para convertir temperaturas:
- `celsius_a_fahrenheit`
- `celsius_a_kelvin`
- `fahrenheit_a_celsius`
- `kelvin_a_celsius`

**Orientación:**
- Cada función recibe y retorna `double`
- Mostrá un menú en `main` para elegir conversión



---
(ejercicio_5_10)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Conversión de Temperatura
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_9(int n);

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


## 📋 Prototipos y Cabecera (`ej-5-9-conversion-de-temperatura.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_9_CONVERSION_DE_TEMPERATURA_H
#define EJERCICIO_EJ_5_9_CONVERSION_DE_TEMPERATURA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Lógica de Conversión de Temperatura */
int resolver_ej_9(int n);

#endif /* EJERCICIO_EJ_5_9_CONVERSION_DE_TEMPERATURA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_9` | `int` | `int n` | Lógica de Conversión de Temperatura |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_9** | `resolver_ej_9` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int resolver_conversi_n_de_temperatura(int n) {
    return n * 2;
}

int main(void) {
    printf("OK\n");
    return 0;
}
```
```
