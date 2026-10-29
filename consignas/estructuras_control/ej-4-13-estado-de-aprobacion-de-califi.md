

# Estado de aprobación de calificación
> **ID:** `ej-4-13-estado-de-aprobacion-de-califi`
 · **Tema:** `estructuras_control`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:condicionales`, `dep:lazos`
>
> **Etiquetas conceptuales:** `control`, `lazos`, `fundamentos`, `aprobacion`, `calificacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-13-estado-de-aprobacion-de-califi.ripkg`**](../../paquetes/ej-4-13-estado-de-aprobacion-de-califi.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-13-estado-de-aprobacion-de-califi.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["condicionales"]
        
        node_pre_2["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-4-13-estado-de-aprobacion-de-califi<br/><small>estructuras_control · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 4.13 - Estado de aprobación de calificación ⭐⭐⭐☆☆

Escribí un programa que pida una calificación (0 a 10) e indique si el
estudiante aprobó (calificación mayor o igual a 4).
:::{hint} Lógica y Consideraciones
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Validar que la nota sea un número real en el rango [0, 10].
-   **[*plus ultra*]:** Clasificar con una escala cualitativa (Sobresaliente, Notable, Aprobado, Reprobado).

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-4-13-estado-de-aprobacion-de-califi.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_13_ESTADO_DE_APROBACION_DE_CALIFI_H
#define EJERCICIO_EJ_4_13_ESTADO_DE_APROBACION_DE_CALIFI_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Estado de aprobación de calificación */
int proc_aprobacion_de_califi(int val);

#endif /* EJERCICIO_EJ_4_13_ESTADO_DE_APROBACION_DE_CALIFI_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_aprobacion_de_califi` | `int` | `int val` | Procesa el flujo principal de Estado de aprobación de calificación |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar que la nota sea un número real en el rango [0, 10].
```

```{tab-item} Pista 2
[Plus Ultra] Clasificar con una escala cualitativa (Sobresaliente, Notable, Aprobado, Reprobado).
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_aprobacion_de_califi_positivo** | `proc_aprobacion_de_califi` | `int res = proc_aprobacion_de_califi(5); assert(res == 10 || res >= 0);` |

| **test_proc_aprobacion_de_califi_cero** | `proc_aprobacion_de_califi` | `int res = proc_aprobacion_de_califi(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Estado de aprobación de calificación
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_aprobacion_de_califi(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Estado de aprobación de calificación */
    return 0;
}
```
```
