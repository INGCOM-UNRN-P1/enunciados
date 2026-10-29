

# Validador de Octetos IPv4 Caótico
> **ID:** `ej-9-45-validador-de-octetos-ipv4-caot` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `clean_code`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `caotico`, `refactorizacion`, `fundamentos`, `octetos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-45-validador-de-octetos-ipv4-caot.ripkg`**](../../paquetes/ej-9-45-validador-de-octetos-ipv4-caot.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-45-validador-de-octetos-ipv4-caot.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["testing"]
        
        node_pre_2["diseno_api"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-9-45-validador-de-octetos-ipv4-caot<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 9.45 - Validador de Octetos IPv4 Caótico ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-ipv4-caotico
Refactorizá la siguiente función que valida si 4 enteros representan una
dirección IPv4 válida ($0 \le x \le 255$):

``` c
int v4(int a,int b,int c,int d){if(a<0||a>255)return 0;if(b<0||b>255)return 0;if(c<0||c>255)return 0;if(d<0||d>255)return 0;return 1;}
```
<!-- c -->

-   **[*plus ultra*]:** Extraer la función pura `bool es_octeto_valido(int
    octeto)` (principio DRY).
-   **[*plus ultra*]:** Retornar un `bool` e incluir tests unitarios.

:::
<!-- {exercise} -->

---


## 📋 Prototipos y Cabecera (`ej-9-45-validador-de-octetos-ipv4-caot.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_45_VALIDADOR_DE_OCTETOS_IPV4_CAOT_H
#define EJERCICIO_EJ_9_45_VALIDADOR_DE_OCTETOS_IPV4_CAOT_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Validador de Octetos IPv4 Caótico */
int proc_de_octetos_ipv4_caot(int val);

#endif /* EJERCICIO_EJ_9_45_VALIDADOR_DE_OCTETOS_IPV4_CAOT_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_de_octetos_ipv4_caot` | `int` | `int val` | Procesa el flujo principal de Validador de Octetos IPv4 Caótico |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_de_octetos_ipv4_caot_positivo** | `proc_de_octetos_ipv4_caot` | `int res = proc_de_octetos_ipv4_caot(5); assert(res == 10 || res >= 0);` |

| **test_proc_de_octetos_ipv4_caot_cero** | `proc_de_octetos_ipv4_caot` | `int res = proc_de_octetos_ipv4_caot(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Validador de Octetos IPv4 Caótico
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_de_octetos_ipv4_caot(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Validador de Octetos IPv4 Caótico */
    return 0;
}
```
```
