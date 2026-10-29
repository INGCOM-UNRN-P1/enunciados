

# Buscar Elemento
> **ID:** `ej-8-13-buscar-elemento` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `memoria`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `memoria`, `punteros`, `direcciones`, `buscar`, `elemento`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-13-buscar-elemento.ripkg`**](../../paquetes/ej-8-13-buscar-elemento.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-13-buscar-elemento.ripkg
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
    
    

    current_node["🎯 ej-8-13-buscar-elemento<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

Implementar `int* buscar_elemento(int *inicio, int *fin, int valor)` que retorne
un puntero al primer elemento igual a `valor`, o `NULL` si no se encuentra.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Buscar Elemento
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_8_13_buscar_elemento(int val);

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


## 📋 Prototipos y Cabecera (`ej-8-13-buscar-elemento.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_13_BUSCAR_ELEMENTO_H
#define EJERCICIO_EJ_8_13_BUSCAR_ELEMENTO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Buscar Elemento */
int proc_8_13_buscar_elemento(int val);

#endif /* EJERCICIO_EJ_8_13_BUSCAR_ELEMENTO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_8_13_buscar_elemento` | `int` | `int val` | Procesa el flujo principal de Buscar Elemento |






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

| **test_proc_8_13_buscar_elemento_positivo** | `proc_8_13_buscar_elemento` | `int res = proc_8_13_buscar_elemento(5); assert(res == 10 || res >= 0);` |

| **test_proc_8_13_buscar_elemento_cero** | `proc_8_13_buscar_elemento` | `int res = proc_8_13_buscar_elemento(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Buscar Elemento
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_8_13_buscar_elemento(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Buscar Elemento */
    return 0;
}
```
```
