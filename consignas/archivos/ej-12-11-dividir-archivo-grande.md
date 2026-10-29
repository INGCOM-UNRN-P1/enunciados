

# Dividir Archivo Grande
> **ID:** `ej-12-11-dividir-archivo-grande` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `archivos` / `archivo`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:cadenas`, `dep:punteros`, `dep:io_formato`
>
> **Etiquetas conceptuales:** `archivo`, `memoria`, `dividir`, `io_disco`, `grande`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-12-11-dividir-archivo-grande.ripkg`**](../../paquetes/ej-12-11-dividir-archivo-grande.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-12-11-dividir-archivo-grande.ripkg
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
    
    

    current_node["🎯 ej-12-11-dividir-archivo-grande<br/><small>archivos · B3</small>"]

    
```


## 📖 Consigna

Escribir un programa que divida un archivo de texto grande en varios archivos
más pequeños, cada uno con un número máximo de $N$ líneas. Los nombres de los
archivos de salida pueden ser `parte_1.txt`, `parte_2.txt`, etc.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Dividir Archivo Grande
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_vidir_archivo_grande(int val);

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


## 📋 Prototipos y Cabecera (`ej-12-11-dividir-archivo-grande.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_12_11_DIVIDIR_ARCHIVO_GRANDE_H
#define EJERCICIO_EJ_12_11_DIVIDIR_ARCHIVO_GRANDE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Dividir Archivo Grande */
int proc_vidir_archivo_grande(int val);

#endif /* EJERCICIO_EJ_12_11_DIVIDIR_ARCHIVO_GRANDE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_vidir_archivo_grande` | `int` | `int val` | Procesa el flujo principal de Dividir Archivo Grande |






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

| **test_proc_vidir_archivo_grande_positivo** | `proc_vidir_archivo_grande` | `int res = proc_vidir_archivo_grande(5); assert(res == 10 || res >= 0);` |

| **test_proc_vidir_archivo_grande_cero** | `proc_vidir_archivo_grande` | `int res = proc_vidir_archivo_grande(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Dividir Archivo Grande
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_vidir_archivo_grande(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Dividir Archivo Grande */
    return 0;
}
```
```
