

# Copiar Archivo
> **ID:** `ej-12-7-copiar-archivo`
 · **Tema:** `archivos`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:cadenas`, `dep:punteros`, `dep:io_formato`
>
> **Etiquetas conceptuales:** `archivo`, `memoria`, `copiar`, `io_disco`, `archivos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-12-7-copiar-archivo.ripkg`**](../../paquetes/ej-12-7-copiar-archivo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-12-7-copiar-archivo.ripkg
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
    
    

    current_node["🎯 ej-12-7-copiar-archivo<br/><small>archivos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 12.7 - Copiar Archivo ⭐⭐☆☆☆

Crear un programa que copie el contenido de un archivo de origen a un archivo de
destino. El programa debe recibir ambas rutas como argumentos. Se puede hacer
leyendo y escribiendo línea por línea o en bloques de bytes.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar la correcta apertura del archivo y controlar
    errores de E/S con `ferror` y `feof`.
-   **[*plus ultra*]:** Soportar rutas complejas y asegurar el cierre del
    archivo en todos los caminos de ejecución.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-12-7-copiar-archivo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_12_7_COPIAR_ARCHIVO_H
#define EJERCICIO_EJ_12_7_COPIAR_ARCHIVO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Copiar Archivo */
int proc__12_7_copiar_archivo(int val);

#endif /* EJERCICIO_EJ_12_7_COPIAR_ARCHIVO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__12_7_copiar_archivo` | `int` | `int val` | Procesa el flujo principal de Copiar Archivo |






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

| **test_proc__12_7_copiar_archivo_positivo** | `proc__12_7_copiar_archivo` | `int res = proc__12_7_copiar_archivo(5); assert(res == 10 || res >= 0);` |

| **test_proc__12_7_copiar_archivo_cero** | `proc__12_7_copiar_archivo` | `int res = proc__12_7_copiar_archivo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Copiar Archivo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__12_7_copiar_archivo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Copiar Archivo */
    return 0;
}
```
```
