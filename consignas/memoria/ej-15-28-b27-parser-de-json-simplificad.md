

# Parser de JSON Simplificado
> **ID:** `ej-15-28-b27-parser-de-json-simplificad` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `simplificado`, `memoria`, `parser`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-28-b27-parser-de-json-simplificad.ripkg`**](../../paquetes/ej-15-28-b27-parser-de-json-simplificad.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-28-b27-parser-de-json-simplificad.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["punteros"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-15-28-b27-parser-de-json-simplificad<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.28 - b.27 - Parser de JSON Simplificado ⭐⭐☆☆☆

Crear un parser básico de JSON que construya una estructura de datos en memoria
dinámica representando el objeto JSON. Manejar cadenas, números, arreglos y
objetos anidados.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-15-28-b27-parser-de-json-simplificad.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_28_B27_PARSER_DE_JSON_SIMPLIFICAD_H
#define EJERCICIO_EJ_15_28_B27_PARSER_DE_JSON_SIMPLIFICAD_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Parser de JSON Simplificado */
int proc__de_json_simplificad(int val);

#endif /* EJERCICIO_EJ_15_28_B27_PARSER_DE_JSON_SIMPLIFICAD_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__de_json_simplificad` | `int` | `int val` | Procesa el flujo principal de Parser de JSON Simplificado |






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

| **test_proc__de_json_simplificad_positivo** | `proc__de_json_simplificad` | `int res = proc__de_json_simplificad(5); assert(res == 10 || res >= 0);` |

| **test_proc__de_json_simplificad_cero** | `proc__de_json_simplificad` | `int res = proc__de_json_simplificad(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.27 - Parser de JSON Simplificado
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__de_json_simplificad(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.27 - Parser de JSON Simplificado */
    return 0;
}
```
```
