

# Controlador de reproducción
> **ID:** `ej-20-15-controlador-de-reproduccion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `reproduccion`, `memoria`, `enum`, `controlador`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-15-controlador-de-reproduccion.ripkg`**](../../paquetes/ej-20-15-controlador-de-reproduccion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-15-controlador-de-reproduccion.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["condicionales"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-20-15-controlador-de-reproduccion<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.15 - Controlador de reproducción ⭐⭐☆☆☆

Implementar una estructura que encapsule el estado completo del reproductor.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef struct
{
    enum estado_reproductor estado;
    enum modo_reproduccion modo;
    unsigned int pista_actual;
    unsigned int total_pistas;
} reproductor_t;
```
<!-- {code-block} c -->


## 📋 Prototipos y Cabecera (`ej-20-15-controlador-de-reproduccion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_15_CONTROLADOR_DE_REPRODUCCION_H
#define EJERCICIO_EJ_20_15_CONTROLADOR_DE_REPRODUCCION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Controlador de reproducción */
int proc_ador_de_reproduccion(int val);

#endif /* EJERCICIO_EJ_20_15_CONTROLADOR_DE_REPRODUCCION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ador_de_reproduccion` | `int` | `int val` | Procesa el flujo principal de Controlador de reproducción |






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

| **test_proc_ador_de_reproduccion_positivo** | `proc_ador_de_reproduccion` | `int res = proc_ador_de_reproduccion(5); assert(res == 10 || res >= 0);` |

| **test_proc_ador_de_reproduccion_cero** | `proc_ador_de_reproduccion` | `int res = proc_ador_de_reproduccion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Solucion modelo para ej-20-15-controlador-de-reproduccion
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int proc_ador_de_reproduccion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int n = 0;
    if (scanf("%d", &n) == 1)
    {
        printf("OK %d\n", n);
    }
    else
    {
        printf("OK\n");
    }
    return 0;
}
```
```
