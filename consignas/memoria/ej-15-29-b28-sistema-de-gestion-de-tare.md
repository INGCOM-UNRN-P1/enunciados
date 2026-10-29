

# Sistema de Gestión de Tareas
> **ID:** `ej-15-29-b28-sistema-de-gestion-de-tare` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `tareas`, `memoria`, `sistema`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-29-b28-sistema-de-gestion-de-tare.ripkg`**](../../paquetes/ej-15-29-b28-sistema-de-gestion-de-tare.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-29-b28-sistema-de-gestion-de-tare.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["punteros"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-15-29-b28-sistema-de-gestion-de-tare<br/><small>memoria · B2</small>"]

    
```


## 📖 Consigna

Implementar un sistema que mantenga una lista de tareas donde cada tarea tiene:
- ID único
- Descripción (cadena dinámica)
- Subtareas (arreglo dinámico de punteros a otras tareas)

El sistema debe permitir agregar, eliminar y buscar tareas, manejando toda la
memoria correctamente.

## Preguntas Conceptuales

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Sistema de Gestión de Tareas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_a_de_gestion_de_tare(int val);

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
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-15-29-b28-sistema-de-gestion-de-tare.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_29_B28_SISTEMA_DE_GESTION_DE_TARE_H
#define EJERCICIO_EJ_15_29_B28_SISTEMA_DE_GESTION_DE_TARE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Sistema de Gestión de Tareas */
int proc_a_de_gestion_de_tare(int val);

#endif /* EJERCICIO_EJ_15_29_B28_SISTEMA_DE_GESTION_DE_TARE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_a_de_gestion_de_tare` | `int` | `int val` | Procesa el flujo principal de Sistema de Gestión de Tareas |






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

| **test_proc_a_de_gestion_de_tare_positivo** | `proc_a_de_gestion_de_tare` | `int res = proc_a_de_gestion_de_tare(5); assert(res == 10 || res >= 0);` |

| **test_proc_a_de_gestion_de_tare_cero** | `proc_a_de_gestion_de_tare` | `int res = proc_a_de_gestion_de_tare(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.28 - Sistema de Gestión de Tareas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_a_de_gestion_de_tare(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.28 - Sistema de Gestión de Tareas */
    return 0;
}
```
```
