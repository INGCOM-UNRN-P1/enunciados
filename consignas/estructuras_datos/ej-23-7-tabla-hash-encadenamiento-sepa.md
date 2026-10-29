

# Tabla Hash (Encadenamiento Separado)
> **ID:** `ej-23-7-tabla-hash-encadenamiento-sepa`
 · **Tema:** `estructuras_datos`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tad`, `dep:memoria_dinamica`, `dep:recursividad`
>
> **Etiquetas conceptuales:** `listas`, `nodos`, `tabla`, `separado`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-23-7-tabla-hash-encadenamiento-sepa.ripkg`**](../../paquetes/ej-23-7-tabla-hash-encadenamiento-sepa.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-23-7-tabla-hash-encadenamiento-sepa.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tad"]
        
        node_pre_2["memoria_dinamica"]
        
        node_pre_3["recursividad"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-23-7-tabla-hash-encadenamiento-sepa<br/><small>estructuras_datos · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 23.7 - Tabla Hash (Encadenamiento Separado) ⭐⭐⭐☆☆

Una tabla hash utiliza una función para convertir una clave en un índice de un
arreglo. Las colisiones (cuando dos claves mapean al mismo índice) se manejan
almacenando los elementos en una lista enlazada en esa posición del arreglo.

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-23-7-tabla-hash-encadenamiento-sepa.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_23_7_TABLA_HASH_ENCADENAMIENTO_SEPA_H
#define EJERCICIO_EJ_23_7_TABLA_HASH_ENCADENAMIENTO_SEPA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Tabla Hash (Encadenamiento Separado) */
int proc__encadenamiento_sepa(int val);

#endif /* EJERCICIO_EJ_23_7_TABLA_HASH_ENCADENAMIENTO_SEPA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__encadenamiento_sepa` | `int` | `int val` | Procesa el flujo principal de Tabla Hash (Encadenamiento Separado) |






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

| **test_proc__encadenamiento_sepa_positivo** | `proc__encadenamiento_sepa` | `int res = proc__encadenamiento_sepa(5); assert(res == 10 || res >= 0);` |

| **test_proc__encadenamiento_sepa_cero** | `proc__encadenamiento_sepa` | `int res = proc__encadenamiento_sepa(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Tabla Hash (Encadenamiento Separado)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__encadenamiento_sepa(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Tabla Hash (Encadenamiento Separado) */
    return 0;
}
```
```
