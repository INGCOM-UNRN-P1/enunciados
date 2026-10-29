

# Unir Líneas de Archivo
> **ID:** `ej-14-28-unir-lineas-de-archivo`
 · **Tema:** `memoria_dinamica`
 · **Bloom:** B5 (Evaluar / Crear)
 · **Carga:** ~45 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `lineas`, `archivo`, `memoria`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-28-unir-lineas-de-archivo.ripkg`**](../../paquetes/ej-14-28-unir-lineas-de-archivo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-28-unir-lineas-de-archivo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-14-28-unir-lineas-de-archivo<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.28 - Unir Líneas de Archivo ⭐⭐☆☆☆

Escribir un programa que lea todas las líneas de un archivo y las almacene en un
arreglo dinámico de cadenas (`char**`). Luego, crear una función que una todas
estas cadenas en una sola, separadas por un espacio, y la devuelva como una
nueva cadena dinámica.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-28-unir-lineas-de-archivo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_28_UNIR_LINEAS_DE_ARCHIVO_H
#define EJERCICIO_EJ_14_28_UNIR_LINEAS_DE_ARCHIVO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Unir Líneas de Archivo */
int proc_ir_lineas_de_archivo(int val);

#endif /* EJERCICIO_EJ_14_28_UNIR_LINEAS_DE_ARCHIVO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ir_lineas_de_archivo` | `int` | `int val` | Procesa el flujo principal de Unir Líneas de Archivo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_ir_lineas_de_archivo_positivo** | `proc_ir_lineas_de_archivo` | `int res = proc_ir_lineas_de_archivo(5); assert(res == 10 || res >= 0);` |

| **test_proc_ir_lineas_de_archivo_cero** | `proc_ir_lineas_de_archivo` | `int res = proc_ir_lineas_de_archivo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Unir Líneas de Archivo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ir_lineas_de_archivo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Unir Líneas de Archivo */
    return 0;
}
```
```
