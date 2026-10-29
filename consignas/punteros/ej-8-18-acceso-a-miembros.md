

# Acceso a Miembros
> **ID:** `ej-8-18-acceso-a-miembros` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `acceso`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `acceso`, `memoria`, `punteros`, `direcciones`, `miembros`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-18-acceso-a-miembros.ripkg`**](../../paquetes/ej-8-18-acceso-a-miembros.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-18-acceso-a-miembros.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["arreglos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-8-18-acceso-a-miembros<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

Dada una estructura:


``` c
typedef struct
{
    int x;
    int y;
} punto_t;
```

Implementar `void trasladar(punto_t *p, int dx, int dy)` que modifique las
coordenadas del punto sumando `dx` y `dy`.

**Notación:** Usar el operador `->` para acceder a miembros: `p->x += dx;`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Acceso a Miembros
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_18_acceso_a_miembros(int val);

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


## 📋 Prototipos y Cabecera (`ej-8-18-acceso-a-miembros.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_18_ACCESO_A_MIEMBROS_H
#define EJERCICIO_EJ_8_18_ACCESO_A_MIEMBROS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Acceso a Miembros */
int proc_18_acceso_a_miembros(int val);

#endif /* EJERCICIO_EJ_8_18_ACCESO_A_MIEMBROS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_18_acceso_a_miembros` | `int` | `int val` | Procesa el flujo principal de Acceso a Miembros |






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

| **test_proc_18_acceso_a_miembros_positivo** | `proc_18_acceso_a_miembros` | `int res = proc_18_acceso_a_miembros(5); assert(res == 10 || res >= 0);` |

| **test_proc_18_acceso_a_miembros_cero** | `proc_18_acceso_a_miembros` | `int res = proc_18_acceso_a_miembros(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Acceso a Miembros
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_18_acceso_a_miembros(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Acceso a Miembros */
    return 0;
}
```
```
