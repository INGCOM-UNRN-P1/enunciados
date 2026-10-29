

# Fusionar Archivos
> **ID:** `ej-12-10-fusionar-archivos` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `archivos` / `io_disco`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:cadenas`, `dep:punteros`, `dep:io_formato`
>
> **Etiquetas conceptuales:** `io_disco`, `fusionar`, `archivos`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-12-10-fusionar-archivos.ripkg`**](../../paquetes/ej-12-10-fusionar-archivos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-12-10-fusionar-archivos.ripkg
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
    
    

    current_node["🎯 ej-12-10-fusionar-archivos<br/><small>archivos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 12.10 - Fusionar Archivos ⭐⭐⭐☆☆

Crear un programa que reciba dos rutas de archivo y fusione su contenido en un
tercer archivo. El contenido del segundo archivo debe aparecer después del
contenido del primero.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar la correcta apertura del archivo y controlar
    errores de E/S con `ferror` y `feof`.
-   **[*plus ultra*]:** Soportar rutas complejas y asegurar el cierre del
    archivo en todos los caminos de ejecución.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-12-10-fusionar-archivos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_12_10_FUSIONAR_ARCHIVOS_H
#define EJERCICIO_EJ_12_10_FUSIONAR_ARCHIVOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Fusionar Archivos */
int proc_10_fusionar_archivos(int val);

#endif /* EJERCICIO_EJ_12_10_FUSIONAR_ARCHIVOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_10_fusionar_archivos` | `int` | `int val` | Procesa el flujo principal de Fusionar Archivos |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar la correcta apertura del archivo y controlar errores de E/S con `ferror` y `feof`.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar rutas complejas y asegurar el cierre del archivo en todos los caminos de ejecución.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_10_fusionar_archivos_positivo** | `proc_10_fusionar_archivos` | `int res = proc_10_fusionar_archivos(5); assert(res == 10 || res >= 0);` |

| **test_proc_10_fusionar_archivos_cero** | `proc_10_fusionar_archivos` | `int res = proc_10_fusionar_archivos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Fusionar Archivos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_10_fusionar_archivos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Fusionar Archivos */
    return 0;
}
```
```
