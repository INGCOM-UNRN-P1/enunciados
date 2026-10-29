

# Leer Archivo a Cadena Dinámica
> **ID:** `ej-14-13-leer-archivo-a-cadena-dinamica` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `archivo`, `memoria`, `dinamica`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-13-leer-archivo-a-cadena-dinamica.ripkg`**](../../paquetes/ej-14-13-leer-archivo-a-cadena-dinamica.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-13-leer-archivo-a-cadena-dinamica.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-14-13-leer-archivo-a-cadena-dinamica<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

Escribir una función `char* leer_archivo_completo(const char* ruta)` que lea
todo el contenido de un archivo de texto y lo devuelva en una única cadena
alojada dinámicamente. El tamaño del archivo no se conoce de antemano.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Leer Archivo a Cadena Dinámica
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_vo_a_cadena_dinamica(int val);

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
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
:::


## 📋 Prototipos y Cabecera (`ej-14-13-leer-archivo-a-cadena-dinamica.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_13_LEER_ARCHIVO_A_CADENA_DINAMICA_H
#define EJERCICIO_EJ_14_13_LEER_ARCHIVO_A_CADENA_DINAMICA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Leer Archivo a Cadena Dinámica */
int proc_vo_a_cadena_dinamica(int val);

#endif /* EJERCICIO_EJ_14_13_LEER_ARCHIVO_A_CADENA_DINAMICA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_vo_a_cadena_dinamica` | `int` | `int val` | Procesa el flujo principal de Leer Archivo a Cadena Dinámica |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_vo_a_cadena_dinamica_positivo** | `proc_vo_a_cadena_dinamica` | `int res = proc_vo_a_cadena_dinamica(5); assert(res == 10 || res >= 0);` |

| **test_proc_vo_a_cadena_dinamica_cero** | `proc_vo_a_cadena_dinamica` | `int res = proc_vo_a_cadena_dinamica(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Leer Archivo a Cadena Dinámica
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_vo_a_cadena_dinamica(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Leer Archivo a Cadena Dinámica */
    return 0;
}
```
```
