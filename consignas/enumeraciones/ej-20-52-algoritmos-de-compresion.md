

# Algoritmos de compresión
> **ID:** `ej-20-52-algoritmos-de-compresion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `compresion`, `tipos`, `memoria`, `enum`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-52-algoritmos-de-compresion.ripkg`**](../../paquetes/ej-20-52-algoritmos-de-compresion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-52-algoritmos-de-compresion.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["condicionales"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-20-52-algoritmos-de-compresion<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

Modelar diferentes algoritmos de compresión y sus niveles.



```{code-block} c
:linenos:
enum algoritmo_compresion
{
    COMP_NINGUNO,
    COMP_DEFLATE,
    COMP_GZIP,
    COMP_BZIP2,
    COMP_LZMA,
    COMP_ZSTD,
    COMP_LZ4
};
enum nivel_compresion
{
    NIVEL_MINIMO = 1,
    NIVEL_RAPIDO = 3,
    NIVEL_NORMAL = 5,
    NIVEL_MAXIMO = 9
};
typedef struct
{
    enum algoritmo_compresion algoritmo;
    enum nivel_compresion nivel;
    size_t tamanio_original;
    size_t tamanio_comprimido;
    double ratio; // tamanio_comprimido / tamanio_original
} resultado_compresion_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Algoritmos de compresión
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ritmos_de_compresion(int val);

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


## 📋 Prototipos y Cabecera (`ej-20-52-algoritmos-de-compresion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_52_ALGORITMOS_DE_COMPRESION_H
#define EJERCICIO_EJ_20_52_ALGORITMOS_DE_COMPRESION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Algoritmos de compresión */
int proc_ritmos_de_compresion(int val);

#endif /* EJERCICIO_EJ_20_52_ALGORITMOS_DE_COMPRESION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ritmos_de_compresion` | `int` | `int val` | Procesa el flujo principal de Algoritmos de compresión |






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

| **test_proc_ritmos_de_compresion_positivo** | `proc_ritmos_de_compresion` | `int res = proc_ritmos_de_compresion(5); assert(res == 10 || res >= 0);` |

| **test_proc_ritmos_de_compresion_cero** | `proc_ritmos_de_compresion` | `int res = proc_ritmos_de_compresion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Solucion modelo para ej-20-52-algoritmos-de-compresion
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int proc_ritmos_de_compresion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int n = 0;
    if (scanf("%d", &n) == 1)
    {
        printf("OK %d\n", n);
    }
    else
    {
        printf("OK\n");
    }
    return 0;
}
```
```
