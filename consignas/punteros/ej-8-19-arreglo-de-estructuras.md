

# Arreglo de Estructuras
> **ID:** `ej-8-19-arreglo-de-estructuras` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `arreglo`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `arreglo`, `estructuras`, `memoria`, `punteros`, `direcciones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-19-arreglo-de-estructuras.ripkg`**](../../paquetes/ej-8-19-arreglo-de-estructuras.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-19-arreglo-de-estructuras.ripkg
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
    
    

    current_node["🎯 ej-8-19-arreglo-de-estructuras<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.19 - Arreglo de Estructuras ⭐⭐⭐☆☆

Implementar `void ordenar_puntos_por_x(punto_t *puntos, int n)` que ordene un
arreglo de puntos según su coordenada `x`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-8-19-arreglo-de-estructuras.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_19_ARREGLO_DE_ESTRUCTURAS_H
#define EJERCICIO_EJ_8_19_ARREGLO_DE_ESTRUCTURAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Arreglo de Estructuras */
int proc_reglo_de_estructuras(int val);

#endif /* EJERCICIO_EJ_8_19_ARREGLO_DE_ESTRUCTURAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_reglo_de_estructuras` | `int` | `int val` | Procesa el flujo principal de Arreglo de Estructuras |






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

| **test_proc_reglo_de_estructuras_positivo** | `proc_reglo_de_estructuras` | `int res = proc_reglo_de_estructuras(5); assert(res == 10 || res >= 0);` |

| **test_proc_reglo_de_estructuras_cero** | `proc_reglo_de_estructuras` | `int res = proc_reglo_de_estructuras(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Arreglo de Estructuras
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_reglo_de_estructuras(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Arreglo de Estructuras */
    return 0;
}
```
```
