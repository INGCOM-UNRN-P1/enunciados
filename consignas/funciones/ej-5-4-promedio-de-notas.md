

# Promedio de notas
> **ID:** `ej-5-4-promedio-de-notas` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `funciones` / `estadistica_basica`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-4-promedio-de-notas.ripkg`**](../../paquetes/ej-5-4-promedio-de-notas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-4-promedio-de-notas.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
        node_pre_2["secuencias"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-5-4-promedio-de-notas<br/><small>funciones · B2</small>"]

    
```


## 📖 Consigna

# Promedio de notas

### Ejercicio 5.4 - Promedio de notas ⭐⭐☆☆☆

:::{exercise}
:label: funcion_promedio
:enumerator: funciones-4
Escribí una función que reciba tres notas enteras y devuelva el promedio en
punto flotante. Mostrá el resultado en `main()`.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que las notas se encuentren en el rango [1, 10] retornando un código de error si alguna es inválida.
-   **[*plus ultra*]:** Escribir aserciones para verificar el cálculo del promedio con decimales.

:::
<!-- {exercise} -->

:::{solution} funcion_promedio
:class: dropdown
```{code-block} c
:linenos:
#include <stdio.h>
float promedio(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}
int main(void)
{
    printf("Promedio: %.2f\n", promedio(7, 8, 10));
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} funcion_promedio -->
(ejercicio_5_5)=


## 📋 Prototipos y Cabecera (`ej-5-4-promedio-de-notas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_4_PROMEDIO_DE_NOTAS_H
#define EJERCICIO_EJ_5_4_PROMEDIO_DE_NOTAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación promedio */
float promedio(int a, int b, int c);

#endif /* EJERCICIO_EJ_5_4_PROMEDIO_DE_NOTAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_4` | `int` | `int n` | Lógica de Promedio de notas |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_4** | `resolver_ej_4` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
float promedio(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}
int main(void)
{
    printf("Promedio: %.2f\n", promedio(7, 8, 10));
    return 0;
}
```
```
