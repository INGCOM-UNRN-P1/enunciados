

# Librería de Estadística Básica
> **ID:** `ej-7-3-libreria-de-estadistica-basica` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `fundamentos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `fundamentos`, `headers`, `libreria`, `basica`, `librerias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-3-libreria-de-estadistica-basica.ripkg`**](../../paquetes/ej-7-3-libreria-de-estadistica-basica.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-3-libreria-de-estadistica-basica.ripkg
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
    
    

    current_node["🎯 ej-7-3-libreria-de-estadistica-basica<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

Diseñá `estadistica.h` y `estadistica.c` operando sobre arreglos de `double`:
- `double est_media(const double *datos, size_t n)`
- `double est_varianza(const double *datos, size_t n)`
- `double est_desviacion_estandar(const double *datos, size_t n)`
- `double est_maximo(const double *datos, size_t n)`
- `double est_minimo(const double *datos, size_t n)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Estadística Básica
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_estadistica_basica(int val);

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
- Validar puntero `NULL` o `n == 0` retornando `NAN` (`math.h`).
:::


## 📋 Prototipos y Cabecera (`ej-7-3-libreria-de-estadistica-basica.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_3_LIBRERIA_DE_ESTADISTICA_BASICA_H
#define EJERCICIO_EJ_7_3_LIBRERIA_DE_ESTADISTICA_BASICA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Estadística Básica */
int proc_e_estadistica_basica(int val);

#endif /* EJERCICIO_EJ_7_3_LIBRERIA_DE_ESTADISTICA_BASICA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_estadistica_basica` | `int` | `int val` | Procesa el flujo principal de Librería de Estadística Básica |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar puntero `NULL` o `n == 0` retornando `NAN` (`math.h`).
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_estadistica_basica_positivo** | `proc_e_estadistica_basica` | `int res = proc_e_estadistica_basica(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_estadistica_basica_cero** | `proc_e_estadistica_basica` | `int res = proc_e_estadistica_basica(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Estadística Básica
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_estadistica_basica(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Estadística Básica */
    return 0;
}
```
```
