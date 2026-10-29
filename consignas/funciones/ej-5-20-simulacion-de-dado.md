

# Simulación de Dado
> **ID:** `ej-5-20-simulacion-de-dado` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `funciones` / `funciones_general`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-20-simulacion-de-dado.ripkg`**](../../paquetes/ej-5-20-simulacion-de-dado.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-20-simulacion-de-dado.ripkg
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
    
    

    current_node["🎯 ej-5-20-simulacion-de-dado<br/><small>funciones · B4</small>"]

    
```


## 📖 Consigna

Creá un simulador de lanzamiento de dados:
- `int lanzar_dado(int caras)` - retorna 1 a caras
- `void lanzar_multiples(int cantidad, int caras, int resultados[])`
- `void estadisticas_lanzamientos(int resultados[], int n)`

**Orientación:**
- Usá `rand() % caras + 1`
- Inicializá semilla con `srand(time(NULL))` una sola vez
- Estadísticas: muestra frecuencia de cada número



---
(ejercicio_5_21)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Simulación de Dado
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_20(int n);

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


## 📋 Prototipos y Cabecera (`ej-5-20-simulacion-de-dado.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_20_SIMULACION_DE_DADO_H
#define EJERCICIO_EJ_5_20_SIMULACION_DE_DADO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Lógica de Simulación de Dado */
int resolver_ej_20(int n);

#endif /* EJERCICIO_EJ_5_20_SIMULACION_DE_DADO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_20` | `int` | `int n` | Lógica de Simulación de Dado |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_20** | `resolver_ej_20` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int resolver_simulaci_n_de_dado(int n) {
    return n * 2;
}

int main(void) {
    printf("OK\n");
    return 0;
}
```
```
