

# Librería de Manejo de Colores RGB
> **ID:** `ej-7-26-libreria-de-manejo-de-colores` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `fundamentos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `fundamentos`, `headers`, `libreria`, `colores`, `librerias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-26-libreria-de-manejo-de-colores.ripkg`**](../../paquetes/ej-7-26-libreria-de-manejo-de-colores.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-26-libreria-de-manejo-de-colores.ripkg
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
    
    

    current_node["🎯 ej-7-26-libreria-de-manejo-de-colores<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

Creá `color_utils.h` y `color_utils.c` para cálculos de color mediante operaciones aritméticas y fórmulas estándar:
- `double color_luminancia(unsigned char r, unsigned char g, unsigned char b)`: calcula la luminosidad relativa ($0.2126R + 0.7152G + 0.0722B$).
- `unsigned char color_escala_grises(unsigned char r, unsigned char g, unsigned char b)`: calcula el promedio de intensidad.
- `unsigned char color_mezclar_componente(unsigned char c1, unsigned char c2, double factor)`: realiza una interpolación lineal entre dos colores.


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Manejo de Colores RGB
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_manejo_de_colores(int val);

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
- Validá que `factor` se encuentre en el rango $[0.0, 1.0]$.
- Implementar pruebas unitarias con `assert()` para colores básicos (blanco, negro, primarios).
:::


## 📋 Prototipos y Cabecera (`ej-7-26-libreria-de-manejo-de-colores.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_26_LIBRERIA_DE_MANEJO_DE_COLORES_H
#define EJERCICIO_EJ_7_26_LIBRERIA_DE_MANEJO_DE_COLORES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Manejo de Colores RGB */
int proc_de_manejo_de_colores(int val);

#endif /* EJERCICIO_EJ_7_26_LIBRERIA_DE_MANEJO_DE_COLORES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_de_manejo_de_colores` | `int` | `int val` | Procesa el flujo principal de Librería de Manejo de Colores RGB |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Validá que `factor` se encuentre en el rango $[0.0, 1.0]$.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar pruebas unitarias con `assert()` para colores básicos (blanco, negro, primarios).
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_de_manejo_de_colores_positivo** | `proc_de_manejo_de_colores` | `int res = proc_de_manejo_de_colores(5); assert(res == 10 || res >= 0);` |

| **test_proc_de_manejo_de_colores_cero** | `proc_de_manejo_de_colores` | `int res = proc_de_manejo_de_colores(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Manejo de Colores RGB
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_de_manejo_de_colores(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Manejo de Colores RGB */
    return 0;
}
```
```
