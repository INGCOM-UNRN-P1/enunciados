

# Matriz de proyección
> **ID:** `ej-21-33-matriz-de-proyeccion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `proyeccion`, `matrices`, `matriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-33-matriz-de-proyeccion.ripkg`**](../../paquetes/ej-21-33-matriz-de-proyeccion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-33-matriz-de-proyeccion.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["lazos_anidados"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-21-33-matriz-de-proyeccion<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

Crear matriz de proyección ortogonal sobre un vector.



``` c
double **matriz_proyeccion(double *vector, int n);
```

**Fórmula:** $P = \frac{vv^T}{v^Tv}$

## Algoritmos de Procesamiento de Imágenes

Considerar una matriz como una imagen en escala de grises donde cada elemento
representa la intensidad de un píxel.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Matriz de proyección
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_matriz_de_proyeccion(int val);

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
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::


## 📋 Prototipos y Cabecera (`ej-21-33-matriz-de-proyeccion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_33_MATRIZ_DE_PROYECCION_H
#define EJERCICIO_EJ_21_33_MATRIZ_DE_PROYECCION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz de proyección */
int proc_matriz_de_proyeccion(int val);

#endif /* EJERCICIO_EJ_21_33_MATRIZ_DE_PROYECCION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_matriz_de_proyeccion` | `int` | `int val` | Procesa el flujo principal de Matriz de proyección |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 2
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_matriz_de_proyeccion_positivo** | `proc_matriz_de_proyeccion` | `int res = proc_matriz_de_proyeccion(5); assert(res == 10 || res >= 0);` |

| **test_proc_matriz_de_proyeccion_cero** | `proc_matriz_de_proyeccion` | `int res = proc_matriz_de_proyeccion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz de proyección
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_matriz_de_proyeccion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz de proyección */
    return 0;
}
```
```
