

# Tabla de Despacho (Dispatch Table)
> **ID:** `ej-26-5-tabla-de-despacho-dispatch-tab` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `punteros_avanzados` / `despacho`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `despacho`, `doble_puntero`, `punteros_funcion`, `tabla`, `table`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-26-5-tabla-de-despacho-dispatch-tab.ripkg`**](../../paquetes/ej-26-5-tabla-de-despacho-dispatch-tab.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-26-5-tabla-de-despacho-dispatch-tab.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria_dinamica"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-26-5-tabla-de-despacho-dispatch-tab<br/><small>punteros_avanzados · B2</small>"]

    
```


## 📖 Consigna

Crear una "tabla de despacho" para la calculadora. Esto consiste en un arreglo
de punteros a función. El programa debe permitir al usuario elegir una operación
(ej. 0 para sumar, 1 para restar) y usar ese índice para llamar a la función
correcta desde el arreglo.

**Lógica y Consideraciones:**
- **Arreglo**: `operacion_aritmetica_t operaciones[] = {sumar, restar,
  multiplicar, dividir};`
- **Llamada**: `int resultado = operaciones[opcion](a, b);`
- **Ventaja**: Reemplaza una estructura `switch` o `if-else` larga por una
  simple indexación de arreglo, lo que hace el código más compacto y extensible.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Tabla de Despacho (Dispatch Table)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_espacho_dispatch_tab(int val);

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


## 📋 Prototipos y Cabecera (`ej-26-5-tabla-de-despacho-dispatch-tab.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_26_5_TABLA_DE_DESPACHO_DISPATCH_TAB_H
#define EJERCICIO_EJ_26_5_TABLA_DE_DESPACHO_DISPATCH_TAB_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Tabla de Despacho (Dispatch Table) */
int proc_espacho_dispatch_tab(int val);

#endif /* EJERCICIO_EJ_26_5_TABLA_DE_DESPACHO_DISPATCH_TAB_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_espacho_dispatch_tab` | `int` | `int val` | Procesa el flujo principal de Tabla de Despacho (Dispatch Table) |






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

| **test_proc_espacho_dispatch_tab_positivo** | `proc_espacho_dispatch_tab` | `int res = proc_espacho_dispatch_tab(5); assert(res == 10 || res >= 0);` |

| **test_proc_espacho_dispatch_tab_cero** | `proc_espacho_dispatch_tab` | `int res = proc_espacho_dispatch_tab(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Tabla de Despacho (Dispatch Table)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_espacho_dispatch_tab(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Tabla de Despacho (Dispatch Table) */
    return 0;
}
```
```
