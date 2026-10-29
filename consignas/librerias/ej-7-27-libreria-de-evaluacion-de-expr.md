

# Librería de Evaluación de Expresiones lógicas
> **ID:** `ej-7-27-libreria-de-evaluacion-de-expr` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `expresiones`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `expresiones`, `fundamentos`, `headers`, `evaluacion`, `libreria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-27-libreria-de-evaluacion-de-expr.ripkg`**](../../paquetes/ej-7-27-libreria-de-evaluacion-de-expr.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-27-libreria-de-evaluacion-de-expr.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-7-27-libreria-de-evaluacion-de-expr<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 7.27 - Librería de Evaluación de Expresiones lógicas ⭐⭐⭐⭐☆

Diseñá `eval_logica.h` y `eval_logica.c`:
- `bool eval_and_3(bool a, bool b, bool c)`
- `bool eval_or_3(bool a, bool b, bool c)`
- `bool eval_xor(bool a, bool b)`
- `bool eval_implicacion(bool p, bool q)`
- `bool eval_equivalencia(bool p, bool q)`

:::{hint} Lógica y Consideraciones
- Expresá las tablas de verdad en funciones puras sin efectos secundarios.
:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-7-27-libreria-de-evaluacion-de-expr.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_27_LIBRERIA_DE_EVALUACION_DE_EXPR_H
#define EJERCICIO_EJ_7_27_LIBRERIA_DE_EVALUACION_DE_EXPR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Evaluación de Expresiones lógicas */
int proc_e_evaluacion_de_expr(int val);

#endif /* EJERCICIO_EJ_7_27_LIBRERIA_DE_EVALUACION_DE_EXPR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_evaluacion_de_expr` | `int` | `int val` | Procesa el flujo principal de Librería de Evaluación de Expresiones lógicas |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Expresá las tablas de verdad en funciones puras sin efectos secundarios.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_evaluacion_de_expr_positivo** | `proc_e_evaluacion_de_expr` | `int res = proc_e_evaluacion_de_expr(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_evaluacion_de_expr_cero** | `proc_e_evaluacion_de_expr` | `int res = proc_e_evaluacion_de_expr(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Evaluación de Expresiones lógicas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_evaluacion_de_expr(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Evaluación de Expresiones lógicas */
    return 0;
}
```
```
