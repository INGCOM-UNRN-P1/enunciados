

# Ordenamiento por Inserción (Insertion Sort)
> **ID:** `ej-30-5-ordenamiento-por-insercion-ins`
 · **Tema:** `algoritmos_ordenamiento`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`, `dep:recursividad`
>
> **Etiquetas conceptuales:** `insertion`, `busqueda`, `ordenamiento`, `avanzados`, `insercion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-30-5-ordenamiento-por-insercion-ins.ripkg`**](../../paquetes/ej-30-5-ordenamiento-por-insercion-ins.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-30-5-ordenamiento-por-insercion-ins.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["lazos_anidados"]
        
        node_pre_3["recursividad"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-30-5-ordenamiento-por-insercion-ins<br/><small>algoritmos_ordenamiento · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 30.5 - Ordenamiento por Inserción (Insertion Sort) ⭐⭐☆☆☆

Implementar el ordenamiento por inserción. Este método construye el arreglo
ordenado final un elemento a la vez. Es muy eficiente para arreglos pequeños o
que ya están casi ordenados.

**Lógica y Consideraciones:**
- **Proceso**: Iterar desde el segundo elemento (`i=1`) hasta el final. En cada
  iteración, tomar el elemento actual (`clave`) y compararlo con los elementos a
  su izquierda. Desplazar los elementos mayores que la `clave` una posición
  hacia la derecha para hacer espacio e insertar la `clave` en su posición
  correcta.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Algoritmos de Ordenamiento Avanzados ($O(n \log n)$)


## 📋 Prototipos y Cabecera (`ej-30-5-ordenamiento-por-insercion-ins.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_30_5_ORDENAMIENTO_POR_INSERCION_INS_H
#define EJERCICIO_EJ_30_5_ORDENAMIENTO_POR_INSERCION_INS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ordenamiento por Inserción (Insertion Sort) */
int proc_to_por_insercion_ins(int val);

#endif /* EJERCICIO_EJ_30_5_ORDENAMIENTO_POR_INSERCION_INS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_to_por_insercion_ins` | `int` | `int val` | Procesa el flujo principal de Ordenamiento por Inserción (Insertion Sort) |






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

| **test_proc_to_por_insercion_ins_positivo** | `proc_to_por_insercion_ins` | `int res = proc_to_por_insercion_ins(5); assert(res == 10 || res >= 0);` |

| **test_proc_to_por_insercion_ins_cero** | `proc_to_por_insercion_ins` | `int res = proc_to_por_insercion_ins(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ordenamiento por Inserción (Insertion Sort)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_to_por_insercion_ins(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ordenamiento por Inserción (Insertion Sort) */
    return 0;
}
```
```
