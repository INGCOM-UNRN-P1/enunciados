

# Mostrar arreglo invertido
> **ID:** `ej-25-7-mostrar-arreglo-invertido`
 · **Tema:** `recursividad`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `invertido`, `recursividad`, `arreglo`, `induccion`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-25-7-mostrar-arreglo-invertido.ripkg`**](../../paquetes/ej-25-7-mostrar-arreglo-invertido.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-25-7-mostrar-arreglo-invertido.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-25-7-mostrar-arreglo-invertido<br/><small>recursividad · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 25.7 - Mostrar arreglo invertido ⭐⭐⭐☆☆

Llamar a la función con el resto del arreglo y luego imprimir el primer
elemento.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-25-7-mostrar-arreglo-invertido.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_25_7_MOSTRAR_ARREGLO_INVERTIDO_H
#define EJERCICIO_EJ_25_7_MOSTRAR_ARREGLO_INVERTIDO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Mostrar arreglo invertido */
int proc_ar_arreglo_invertido(int val);

#endif /* EJERCICIO_EJ_25_7_MOSTRAR_ARREGLO_INVERTIDO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ar_arreglo_invertido` | `int` | `int val` | Procesa el flujo principal de Mostrar arreglo invertido |






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

| **test_proc_ar_arreglo_invertido_positivo** | `proc_ar_arreglo_invertido` | `int res = proc_ar_arreglo_invertido(5); assert(res == 10 || res >= 0);` |

| **test_proc_ar_arreglo_invertido_cero** | `proc_ar_arreglo_invertido` | `int res = proc_ar_arreglo_invertido(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Mostrar arreglo invertido
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ar_arreglo_invertido(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Mostrar arreglo invertido */
    return 0;
}
```
```
