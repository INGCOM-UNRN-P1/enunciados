

# Funciones Auxiliares Privadas `static`
> **ID:** `ej-4-44-funciones-auxiliares-privadas`
 · **Tema:** `testing`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:librerias`, `dep:funciones`
>
> **Etiquetas conceptuales:** `aserciones`, `fundamentos`, `funciones`, `static`, `auxiliares`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-44-funciones-auxiliares-privadas.ripkg`**](../../paquetes/ej-4-44-funciones-auxiliares-privadas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-44-funciones-auxiliares-privadas.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["librerias"]
        
        node_pre_2["funciones"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-4-44-funciones-auxiliares-privadas<br/><small>testing · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 4.44 - Funciones Auxiliares Privadas `static` ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-funciones-static
Explicá por qué las funciones auxiliares de un módulo `.c` que no forman parte
de la interfaz pública deben declararse obligatoriamente con el calificador
`static`.

-   **[*plus ultra*]:** Explicar el concepto de visibilidad de enlace (*internal
    linkage*).
-   **[*plus ultra*]:** Explicar cómo esto previene colisiones de nombres con
    funciones auxiliares de otros archivos `.c`.

:::
<!-- {exercise} -->

:::{solution} ej-test-funciones-static
:class: dropdown
El calificador `static` en una función a nivel de archivo restringe su
visibilidad exclusivamente a la unidad de traducción actual (*internal
linkage*). Esto encapsula los detalles de implementación internos y previene
errores de símbolos duplicados en tiempo de enlace (*linker collision*).

:::
<!-- {solution} ej-test-funciones-static -->

---

## 5. Suites de Pruebas Integradoras y Diagnóstico


## 📋 Prototipos y Cabecera (`ej-4-44-funciones-auxiliares-privadas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_44_FUNCIONES_AUXILIARES_PRIVADAS_H
#define EJERCICIO_EJ_4_44_FUNCIONES_AUXILIARES_PRIVADAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Funciones Auxiliares Privadas `static` */
int proc__auxiliares_privadas(int val);

#endif /* EJERCICIO_EJ_4_44_FUNCIONES_AUXILIARES_PRIVADAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__auxiliares_privadas` | `int` | `int val` | Procesa el flujo principal de Funciones Auxiliares Privadas `static` |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__auxiliares_privadas_positivo** | `proc__auxiliares_privadas` | `int res = proc__auxiliares_privadas(5); assert(res == 10 || res >= 0);` |

| **test_proc__auxiliares_privadas_cero** | `proc__auxiliares_privadas` | `int res = proc__auxiliares_privadas(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Funciones Auxiliares Privadas `static`
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__auxiliares_privadas(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Funciones Auxiliares Privadas `static` */
    return 0;
}
```
```
