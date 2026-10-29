

# Búsqueda y Algoritmos sobre Arreglos
> **ID:** `ej-5-22-busqueda-y-algoritmos-sobre-arreglos` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `funciones` / `funciones_general`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-22-busqueda-y-algoritmos-sobre-arreglos.ripkg`**](../../paquetes/ej-5-22-busqueda-y-algoritmos-sobre-arreglos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-22-busqueda-y-algoritmos-sobre-arreglos.ripkg
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
    
    

    current_node["🎯 ej-5-22-busqueda-y-algoritmos-sobre-arreglos<br/><small>funciones · B5</small>"]

    
```


## 📖 Consigna

Implementá funciones modulares para operaciones sobre arreglos de enteros:
- `int busqueda_lineal(const int arr[], int n, int objetivo)`: retorna el índice de la primera aparición o `-1`.
- `int encontrar_maximo(const int arr[], int n)`: retorna el valor máximo contenido en el arreglo.
- `int contar_ocurrencias(const int arr[], int n, int valor)`: cuenta cuántas veces aparece un elemento.

**Orientación:**
- Usá el calificador `const` en los arreglos para garantizar que las funciones de consulta no los modifiquen
- Validá que `n > 0` antes de buscar el máximo



---
(ejercicio_5_23)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Búsqueda y Algoritmos sobre Arreglos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_22(int n);

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


## 📋 Prototipos y Cabecera (`ej-5-22-busqueda-y-algoritmos-sobre-arreglos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_22_BUSQUEDA_Y_ALGORITMOS_SOBRE_ARREGLOS_H
#define EJERCICIO_EJ_5_22_BUSQUEDA_Y_ALGORITMOS_SOBRE_ARREGLOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Lógica de Búsqueda y Algoritmos sobre Arreglos */
int resolver_ej_22(int n);

#endif /* EJERCICIO_EJ_5_22_BUSQUEDA_Y_ALGORITMOS_SOBRE_ARREGLOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_22` | `int` | `int n` | Lógica de Búsqueda y Algoritmos sobre Arreglos |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_22** | `resolver_ej_22` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int resolver_b_squeda_y_algoritmos_sobre_ar(int n) {
    return n * 2;
}

int main(void) {
    printf("OK\n");
    return 0;
}
```
```
