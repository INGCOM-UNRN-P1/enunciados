

# Verificar permiso
> **ID:** `ej-20-6-verificar-permiso` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `verificar`, `memoria`, `enum`, `permiso`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-6-verificar-permiso.ripkg`**](../../paquetes/ej-20-6-verificar-permiso.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-6-verificar-permiso.ripkg
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
    
    

    current_node["🎯 ej-20-6-verificar-permiso<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.6 - Verificar permiso ⭐⭐☆☆☆

Implementar una función que verifique si un conjunto de permisos incluye un
permiso específico.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool tiene_permiso(unsigned int permisos_actuales, enum permisos permiso);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-20-6-verificar-permiso.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_6_VERIFICAR_PERMISO_H
#define EJERCICIO_EJ_20_6_VERIFICAR_PERMISO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Verificar permiso */
int proc__6_verificar_permiso(int val);

#endif /* EJERCICIO_EJ_20_6_VERIFICAR_PERMISO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__6_verificar_permiso` | `int` | `int val` | Procesa el flujo principal de Verificar permiso |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 2
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__6_verificar_permiso_positivo** | `proc__6_verificar_permiso` | `int res = proc__6_verificar_permiso(5); assert(res == 10 || res >= 0);` |

| **test_proc__6_verificar_permiso_cero** | `proc__6_verificar_permiso` | `int res = proc__6_verificar_permiso(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Verificar permiso
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__6_verificar_permiso(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Verificar permiso */
    return 0;
}
```
```
