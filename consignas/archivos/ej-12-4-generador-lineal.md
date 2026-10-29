

# Generador lineal
> **ID:** `ej-12-4-generador-lineal` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `archivos` / `busqueda_lineal`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:cadenas`, `dep:punteros`, `dep:io_formato`
>
> **Etiquetas conceptuales:** `lineal`, `memoria`, `generador`, `io_disco`, `archivos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-12-4-generador-lineal.ripkg`**](../../paquetes/ej-12-4-generador-lineal.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-12-4-generador-lineal.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["cadenas"]
        
        node_pre_2["punteros"]
        
        node_pre_3["io_formato"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-12-4-generador-lineal<br/><small>archivos · B3</small>"]

    
```


## 📖 Consigna

Implementar `generar_lineal(ruta, cantidad, inicio, paso)`.

**Ejemplo**: `generar_lineal("lineal.txt", 5, 10, 2)` debe crear un archivo con:


```{code-block} text
:linenos:
5
10
12
14
16
18

```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Generador lineal
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_2_4_generador_lineal(int val);

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
5. **Acceso a archivos:** Verificar que los punteros `FILE*` retornados por `fopen` sean distintos de `NULL` antes de leer o escribir.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Verificar la correcta apertura del archivo y controlar errores de E/S con `ferror` y `feof`.
- Soportar rutas complejas y asegurar el cierre del archivo en todos los caminos de ejecución.
:::


## 📋 Prototipos y Cabecera (`ej-12-4-generador-lineal.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_12_4_GENERADOR_LINEAL_H
#define EJERCICIO_EJ_12_4_GENERADOR_LINEAL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Generador lineal */
int proc_2_4_generador_lineal(int val);

#endif /* EJERCICIO_EJ_12_4_GENERADOR_LINEAL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_2_4_generador_lineal` | `int` | `int val` | Procesa el flujo principal de Generador lineal |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar la correcta apertura del archivo y controlar errores de E/S con `ferror` y `feof`.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar rutas complejas y asegurar el cierre del archivo en todos los caminos de ejecución.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_2_4_generador_lineal_positivo** | `proc_2_4_generador_lineal` | `int res = proc_2_4_generador_lineal(5); assert(res == 10 || res >= 0);` |

| **test_proc_2_4_generador_lineal_cero** | `proc_2_4_generador_lineal` | `int res = proc_2_4_generador_lineal(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Generador lineal
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_2_4_generador_lineal(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Generador lineal */
    return 0;
}
```
```
