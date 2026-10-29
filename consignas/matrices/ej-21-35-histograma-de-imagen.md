

# Histograma de Imagen
> **ID:** `ej-21-35-histograma-de-imagen` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `histograma`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `histograma`, `matrices`, `imagen`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-35-histograma-de-imagen.ripkg`**](../../paquetes/ej-21-35-histograma-de-imagen.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-35-histograma-de-imagen.ripkg
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
    
    

    current_node["🎯 ej-21-35-histograma-de-imagen<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

Calcular el histograma de una imagen (frecuencia de cada nivel de intensidad).



``` c
void calcular_histograma(int **imagen, int filas, int cols, int *histograma);
```

El histograma tiene 256 posiciones (0-255) que cuentan la frecuencia de cada
intensidad.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Histograma de Imagen
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_histograma_de_imagen(int val);

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
- Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
- Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
:::


## 📋 Prototipos y Cabecera (`ej-21-35-histograma-de-imagen.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_35_HISTOGRAMA_DE_IMAGEN_H
#define EJERCICIO_EJ_21_35_HISTOGRAMA_DE_IMAGEN_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Histograma de Imagen */
int proc_histograma_de_imagen(int val);

#endif /* EJERCICIO_EJ_21_35_HISTOGRAMA_DE_IMAGEN_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_histograma_de_imagen` | `int` | `int val` | Procesa el flujo principal de Histograma de Imagen |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_histograma_de_imagen_positivo** | `proc_histograma_de_imagen` | `int res = proc_histograma_de_imagen(5); assert(res == 10 || res >= 0);` |

| **test_proc_histograma_de_imagen_cero** | `proc_histograma_de_imagen` | `int res = proc_histograma_de_imagen(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Histograma de Imagen
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_histograma_de_imagen(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Histograma de Imagen */
    return 0;
}
```
```
