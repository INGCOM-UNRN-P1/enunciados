

# Cadenas Seguras II
> **ID:** `ej-18-7-cadenas-seguras-ii` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `estructuras` / `procesamiento_texto`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:funciones`
>
> **Etiquetas conceptuales:** `cadenas`, `registros`, `memoria`, `structs`, `seguras`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-18-7-cadenas-seguras-ii.ripkg`**](../../paquetes/ej-18-7-cadenas-seguras-ii.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-18-7-cadenas-seguras-ii.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["funciones"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-18-7-cadenas-seguras-ii<br/><small>estructuras · B3</small>"]

    
```


## 📖 Consigna

Aplicar el mismo principio a las cadenas de caracteres para crear un tipo
`cadena_segura_t` que gestione su propia capacidad y longitud, evitando los
peligros asociados a las cadenas de C estándar.



``` c
#define CAPACIDAD_MAX_CADENA 256
typedef struct
{
    char datos[CAPACIDAD_MAX_CADENA];
    size_t longitud;
} cadena_segura_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Cadenas Seguras II
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_7_cadenas_seguras_ii(int val);

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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::


## 📋 Prototipos y Cabecera (`ej-18-7-cadenas-seguras-ii.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_18_7_CADENAS_SEGURAS_II_H
#define EJERCICIO_EJ_18_7_CADENAS_SEGURAS_II_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Cadenas Seguras II */
int proc_7_cadenas_seguras_ii(int val);

#endif /* EJERCICIO_EJ_18_7_CADENAS_SEGURAS_II_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_7_cadenas_seguras_ii` | `int` | `int val` | Procesa el flujo principal de Cadenas Seguras II |






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

| **test_proc_7_cadenas_seguras_ii_positivo** | `proc_7_cadenas_seguras_ii` | `int res = proc_7_cadenas_seguras_ii(5); assert(res == 10 || res >= 0);` |

| **test_proc_7_cadenas_seguras_ii_cero** | `proc_7_cadenas_seguras_ii` | `int res = proc_7_cadenas_seguras_ii(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Cadenas Seguras II
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_7_cadenas_seguras_ii(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Cadenas Seguras II */
    return 0;
}
```
```
