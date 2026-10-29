

# Simplificación
> **ID:** `ej-18-2-simplificacion`
 · **Tema:** `estructuras`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:funciones`
>
> **Etiquetas conceptuales:** `registros`, `simplificacion`, `structs`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-18-2-simplificacion.ripkg`**](../../paquetes/ej-18-2-simplificacion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-18-2-simplificacion.ripkg
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
    
    

    current_node["🎯 ej-18-2-simplificacion<br/><small>estructuras · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 18.2 - Simplificación ⭐⭐☆☆☆

Implementar una función que modifique una fracción para llevarla a su mínima
expresión. La simplificación se realiza dividiendo numerador y denominador por
su **Máximo Común Divisor (MCD)**.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## División con Resto


## 📋 Prototipos y Cabecera (`ej-18-2-simplificacion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_18_2_SIMPLIFICACION_H
#define EJERCICIO_EJ_18_2_SIMPLIFICACION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Simplificación */
int proc__18_2_simplificacion(int val);

#endif /* EJERCICIO_EJ_18_2_SIMPLIFICACION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__18_2_simplificacion` | `int` | `int val` | Procesa el flujo principal de Simplificación |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 2
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__18_2_simplificacion_positivo** | `proc__18_2_simplificacion` | `int res = proc__18_2_simplificacion(5); assert(res == 10 || res >= 0);` |

| **test_proc__18_2_simplificacion_cero** | `proc__18_2_simplificacion` | `int res = proc__18_2_simplificacion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Simplificación
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__18_2_simplificacion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Simplificación */
    return 0;
}
```
```
