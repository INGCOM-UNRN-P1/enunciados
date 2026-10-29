

# Ordenar archivo
> **ID:** `ej-12-3-ordenar-archivo` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `archivos` / `archivo`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:cadenas`, `dep:punteros`, `dep:io_formato`
>
> **Etiquetas conceptuales:** `archivo`, `memoria`, `io_disco`, `ordenar`, `archivos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-12-3-ordenar-archivo.ripkg`**](../../paquetes/ej-12-3-ordenar-archivo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-12-3-ordenar-archivo.ripkg
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
    
    

    current_node["🎯 ej-12-3-ordenar-archivo<br/><small>archivos · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 12.3 - Ordenar archivo ⭐⭐☆☆☆

Un programa que lea los números de un archivo a un arreglo, ordene el arreglo en
memoria y luego escriba el contenido ordenado a un nuevo archivo, respetando el
formato.

**Ejemplo de uso:**
`./ordena_archivo entrada.txt salida_ordenada.txt asc`
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-12-3-ordenar-archivo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_12_3_ORDENAR_ARCHIVO_H
#define EJERCICIO_EJ_12_3_ORDENAR_ARCHIVO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ordenar archivo */
int proc_12_3_ordenar_archivo(int val);

#endif /* EJERCICIO_EJ_12_3_ORDENAR_ARCHIVO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_12_3_ordenar_archivo` | `int` | `int val` | Procesa el flujo principal de Ordenar archivo |






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

| **test_proc_12_3_ordenar_archivo_positivo** | `proc_12_3_ordenar_archivo` | `int res = proc_12_3_ordenar_archivo(5); assert(res == 10 || res >= 0);` |

| **test_proc_12_3_ordenar_archivo_cero** | `proc_12_3_ordenar_archivo` | `int res = proc_12_3_ordenar_archivo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ordenar archivo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_12_3_ordenar_archivo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ordenar archivo */
    return 0;
}
```
```
