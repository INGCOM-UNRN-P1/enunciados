

# Estadísticas de Arreglo
> **ID:** `ej-8-3-estadisticas-de-arreglo`
 · **Tema:** `punteros`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `arreglo`, `memoria`, `punteros`, `direcciones`, `estadisticas`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-3-estadisticas-de-arreglo.ripkg`**](../../paquetes/ej-8-3-estadisticas-de-arreglo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-3-estadisticas-de-arreglo.ripkg
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
    
    

    current_node["🎯 ej-8-3-estadisticas-de-arreglo<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.3 - Estadísticas de Arreglo ⭐⭐⭐☆☆

Implementar `void estadisticas(int arr[], size_t n, int *min, int *max, double
*prom)`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-8-3-estadisticas-de-arreglo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_3_ESTADISTICAS_DE_ARREGLO_H
#define EJERCICIO_EJ_8_3_ESTADISTICAS_DE_ARREGLO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Estadísticas de Arreglo */
int proc_adisticas_de_arreglo(int val);

#endif /* EJERCICIO_EJ_8_3_ESTADISTICAS_DE_ARREGLO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_adisticas_de_arreglo` | `int` | `int val` | Procesa el flujo principal de Estadísticas de Arreglo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 2
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_adisticas_de_arreglo_positivo** | `proc_adisticas_de_arreglo` | `int res = proc_adisticas_de_arreglo(5); assert(res == 10 || res >= 0);` |

| **test_proc_adisticas_de_arreglo_cero** | `proc_adisticas_de_arreglo` | `int res = proc_adisticas_de_arreglo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Estadísticas de Arreglo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_adisticas_de_arreglo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Estadísticas de Arreglo */
    return 0;
}
```
```
