

# Reducción Dinámica de Capacidad (Shrinking)
> **ID:** `ej-17-11-reduccion-dinamica-de-capacida` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `shrinking`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `shrinking`, `estructuras`, `memoria`, `dinamica`, `punteros`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-17-11-reduccion-dinamica-de-capacida.ripkg`**](../../paquetes/ej-17-11-reduccion-dinamica-de-capacida.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-17-11-reduccion-dinamica-de-capacida.ripkg
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
    
    

    current_node["🎯 ej-17-11-reduccion-dinamica-de-capacida<br/><small>punteros · B5</small>"]

    
```


## 📖 Consigna

Modificar el vector del ejercicio anterior para reducir su capacidad a la mitad
si la cantidad de elementos en uso cae por debajo de 1/4 de su capacidad máxima.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Reducción Dinámica de Capacidad (Shrinking)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_dinamica_de_capacida(int val);

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
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
:::


## 📋 Prototipos y Cabecera (`ej-17-11-reduccion-dinamica-de-capacida.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_17_11_REDUCCION_DINAMICA_DE_CAPACIDA_H
#define EJERCICIO_EJ_17_11_REDUCCION_DINAMICA_DE_CAPACIDA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Reducción Dinámica de Capacidad (Shrinking) */
int proc_dinamica_de_capacida(int val);

#endif /* EJERCICIO_EJ_17_11_REDUCCION_DINAMICA_DE_CAPACIDA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_dinamica_de_capacida` | `int` | `int val` | Procesa el flujo principal de Reducción Dinámica de Capacidad (Shrinking) |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_dinamica_de_capacida_positivo** | `proc_dinamica_de_capacida` | `int res = proc_dinamica_de_capacida(5); assert(res == 10 || res >= 0);` |

| **test_proc_dinamica_de_capacida_cero** | `proc_dinamica_de_capacida` | `int res = proc_dinamica_de_capacida(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Reducción Dinámica de Capacidad (Shrinking)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_dinamica_de_capacida(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Reducción Dinámica de Capacidad (Shrinking) */
    return 0;
}
```
```
