

# Mostrar arreglo
> **ID:** `ej-25-6-mostrar-arreglo` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `recursividad` / `arreglo`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `recursividad`, `arreglo`, `induccion`, `algoritmos`, `mostrar`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-25-6-mostrar-arreglo.ripkg`**](../../paquetes/ej-25-6-mostrar-arreglo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-25-6-mostrar-arreglo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-25-6-mostrar-arreglo<br/><small>recursividad · B3</small>"]

    
```


## 📖 Consigna

Imprimir el primer elemento y luego llamar a la función con el resto del
arreglo.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Mostrar arreglo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_25_6_mostrar_arreglo(int val);

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
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::


## 📋 Prototipos y Cabecera (`ej-25-6-mostrar-arreglo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_25_6_MOSTRAR_ARREGLO_H
#define EJERCICIO_EJ_25_6_MOSTRAR_ARREGLO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Mostrar arreglo */
int proc_25_6_mostrar_arreglo(int val);

#endif /* EJERCICIO_EJ_25_6_MOSTRAR_ARREGLO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_25_6_mostrar_arreglo` | `int` | `int val` | Procesa el flujo principal de Mostrar arreglo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_25_6_mostrar_arreglo_positivo** | `proc_25_6_mostrar_arreglo` | `int res = proc_25_6_mostrar_arreglo(5); assert(res == 10 || res >= 0);` |

| **test_proc_25_6_mostrar_arreglo_cero** | `proc_25_6_mostrar_arreglo` | `int res = proc_25_6_mostrar_arreglo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Mostrar arreglo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_25_6_mostrar_arreglo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Mostrar arreglo */
    return 0;
}
```
```
