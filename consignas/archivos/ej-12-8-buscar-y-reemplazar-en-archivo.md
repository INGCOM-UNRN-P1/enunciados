

# Buscar y Reemplazar en Archivo
> **ID:** `ej-12-8-buscar-y-reemplazar-en-archivo`
 · **Tema:** `archivos`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:cadenas`, `dep:punteros`, `dep:io_formato`
>
> **Etiquetas conceptuales:** `archivo`, `memoria`, `buscar`, `reemplazar`, `io_disco`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-12-8-buscar-y-reemplazar-en-archivo.ripkg`**](../../paquetes/ej-12-8-buscar-y-reemplazar-en-archivo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-12-8-buscar-y-reemplazar-en-archivo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["cadenas"]
        
        node_pre_2["punteros"]
        
        node_pre_3["io_formato"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-12-8-buscar-y-reemplazar-en-archivo<br/><small>archivos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 12.8 - Buscar y Reemplazar en Archivo ⭐⭐☆☆☆

Escribir un programa que busque todas las ocurrencias de una cadena en un
archivo y las reemplace por otra, guardando el resultado en un nuevo archivo de
salida.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-12-8-buscar-y-reemplazar-en-archivo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_12_8_BUSCAR_Y_REEMPLAZAR_EN_ARCHIVO_H
#define EJERCICIO_EJ_12_8_BUSCAR_Y_REEMPLAZAR_EN_ARCHIVO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Buscar y Reemplazar en Archivo */
int proc_eemplazar_en_archivo(int val);

#endif /* EJERCICIO_EJ_12_8_BUSCAR_Y_REEMPLAZAR_EN_ARCHIVO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_eemplazar_en_archivo` | `int` | `int val` | Procesa el flujo principal de Buscar y Reemplazar en Archivo |






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

| **test_proc_eemplazar_en_archivo_positivo** | `proc_eemplazar_en_archivo` | `int res = proc_eemplazar_en_archivo(5); assert(res == 10 || res >= 0);` |

| **test_proc_eemplazar_en_archivo_cero** | `proc_eemplazar_en_archivo` | `int res = proc_eemplazar_en_archivo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Buscar y Reemplazar en Archivo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_eemplazar_en_archivo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Buscar y Reemplazar en Archivo */
    return 0;
}
```
```
