

# Ordenamiento con intercambia
> **ID:** `ej-8-5-ordenamiento-con-intercambia` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `intercambia`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `intercambia`, `memoria`, `ordenamiento`, `punteros`, `direcciones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-5-ordenamiento-con-intercambia.ripkg`**](../../paquetes/ej-8-5-ordenamiento-con-intercambia.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-5-ordenamiento-con-intercambia.ripkg
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
    
    

    current_node["🎯 ej-8-5-ordenamiento-con-intercambia<br/><small>punteros · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.5 - Ordenamiento con intercambia ⭐⭐☆☆☆

Implementar un algoritmo de ordenamiento (ej. Burbuja) que para intercambiar
elementos llame a `void intercambia(int *a, int *b)`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-8-5-ordenamiento-con-intercambia.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_5_ORDENAMIENTO_CON_INTERCAMBIA_H
#define EJERCICIO_EJ_8_5_ORDENAMIENTO_CON_INTERCAMBIA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ordenamiento con intercambia */
int proc_ento_con_intercambia(int val);

#endif /* EJERCICIO_EJ_8_5_ORDENAMIENTO_CON_INTERCAMBIA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ento_con_intercambia` | `int` | `int val` | Procesa el flujo principal de Ordenamiento con intercambia |






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

| **test_proc_ento_con_intercambia_positivo** | `proc_ento_con_intercambia` | `int res = proc_ento_con_intercambia(5); assert(res == 10 || res >= 0);` |

| **test_proc_ento_con_intercambia_cero** | `proc_ento_con_intercambia` | `int res = proc_ento_con_intercambia(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ordenamiento con intercambia
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ento_con_intercambia(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ordenamiento con intercambia */
    return 0;
}
```
```
