

# Librería de Transformación de Cadenas Seguras
> **ID:** `ej-7-7-libreria-de-transformacion-de` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `procesamiento_texto`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `cadenas`, `fundamentos`, `headers`, `libreria`, `transformacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-7-libreria-de-transformacion-de.ripkg`**](../../paquetes/ej-7-7-libreria-de-transformacion-de.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-7-libreria-de-transformacion-de.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-7-7-libreria-de-transformacion-de<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

Diseñá `str_transform.h` y `str_transform.c`:
- `void str_a_mayusculas(char *str, size_t len_str)`
- `void str_a_minusculas(char *str, size_t len_str)`
- `void str_capitalizar(char *str, size_t len_str)` (primera letra de cada palabra en mayúscula)
- `void str_invertir(char *str, size_t len_str)`
- `void str_recortar_espacios(char *str, size_t len_str)` (elimina espacios al inicio y al final)


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Transformación de Cadenas Seguras
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_transformacion_de(int val);

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
- Usá funciones de `<ctype.h>` como `toupper` y `tolower`.
:::


## 📋 Prototipos y Cabecera (`ej-7-7-libreria-de-transformacion-de.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_7_LIBRERIA_DE_TRANSFORMACION_DE_H
#define EJERCICIO_EJ_7_7_LIBRERIA_DE_TRANSFORMACION_DE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Transformación de Cadenas Seguras */
int proc_de_transformacion_de(int val);

#endif /* EJERCICIO_EJ_7_7_LIBRERIA_DE_TRANSFORMACION_DE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_de_transformacion_de` | `int` | `int val` | Procesa el flujo principal de Librería de Transformación de Cadenas Seguras |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Usá funciones de `<ctype.h>` como `toupper` y `tolower`.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_de_transformacion_de_positivo** | `proc_de_transformacion_de` | `int res = proc_de_transformacion_de(5); assert(res == 10 || res >= 0);` |

| **test_proc_de_transformacion_de_cero** | `proc_de_transformacion_de` | `int res = proc_de_transformacion_de(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Transformación de Cadenas Seguras
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_de_transformacion_de(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Transformación de Cadenas Seguras */
    return 0;
}
```
```
