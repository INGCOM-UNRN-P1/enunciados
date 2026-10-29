

# Comparación de Tiempos
> **ID:** `ej-18-5-comparacion-de-tiempos` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `estructuras` / `registros`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:funciones`
>
> **Etiquetas conceptuales:** `registros`, `memoria`, `tiempos`, `structs`, `comparacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-18-5-comparacion-de-tiempos.ripkg`**](../../paquetes/ej-18-5-comparacion-de-tiempos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-18-5-comparacion-de-tiempos.ripkg
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
    
    

    current_node["🎯 ej-18-5-comparacion-de-tiempos<br/><small>estructuras · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 18.5 - Comparación de Tiempos ⭐⭐☆☆☆

Implementar una función que compare dos `tiempo_t` y devuelva un valor que
indique si el primero es anterior, igual o posterior al segundo. Una estrategia
es convertir ambos tiempos a una unidad común (ej. segundos totales) para
facilitar la comparación.

$$t_{en\_segundos} = horas \times 3600 + minutos \times 60 + segundos$$


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Tipos de Datos Compuestos


## 📋 Prototipos y Cabecera (`ej-18-5-comparacion-de-tiempos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_18_5_COMPARACION_DE_TIEMPOS_H
#define EJERCICIO_EJ_18_5_COMPARACION_DE_TIEMPOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Comparación de Tiempos */
int proc_mparacion_de_tiempos(int val);

#endif /* EJERCICIO_EJ_18_5_COMPARACION_DE_TIEMPOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_mparacion_de_tiempos` | `int` | `int val` | Procesa el flujo principal de Comparación de Tiempos |






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

| **test_proc_mparacion_de_tiempos_positivo** | `proc_mparacion_de_tiempos` | `int res = proc_mparacion_de_tiempos(5); assert(res == 10 || res >= 0);` |

| **test_proc_mparacion_de_tiempos_cero** | `proc_mparacion_de_tiempos` | `int res = proc_mparacion_de_tiempos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Comparación de Tiempos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_mparacion_de_tiempos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Comparación de Tiempos */
    return 0;
}
```
```
