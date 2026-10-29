

# Gestor de transacciones
> **ID:** `ej-20-45-gestor-de-transacciones` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `transacciones`, `tipos`, `memoria`, `enum`, `gestor`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-45-gestor-de-transacciones.ripkg`**](../../paquetes/ej-20-45-gestor-de-transacciones.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-45-gestor-de-transacciones.ripkg
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
    
    

    current_node["🎯 ej-20-45-gestor-de-transacciones<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.45 - Gestor de transacciones ⭐⭐☆☆☆

Implementar funciones para gestionar transacciones.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
transaccion_t iniciar_transaccion(enum tipo_aislamiento aislamiento);
bool commit_transaccion(transaccion_t *tx);
bool rollback_transaccion(transaccion_t *tx);
bool puede_hacer_commit(const transaccion_t *tx);
```
<!-- c -->

## Tipos de Datos SQL


## 📋 Prototipos y Cabecera (`ej-20-45-gestor-de-transacciones.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_45_GESTOR_DE_TRANSACCIONES_H
#define EJERCICIO_EJ_20_45_GESTOR_DE_TRANSACCIONES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Gestor de transacciones */
int proc_tor_de_transacciones(int val);

#endif /* EJERCICIO_EJ_20_45_GESTOR_DE_TRANSACCIONES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_tor_de_transacciones` | `int` | `int val` | Procesa el flujo principal de Gestor de transacciones |






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

| **test_proc_tor_de_transacciones_positivo** | `proc_tor_de_transacciones` | `int res = proc_tor_de_transacciones(5); assert(res == 10 || res >= 0);` |

| **test_proc_tor_de_transacciones_cero** | `proc_tor_de_transacciones` | `int res = proc_tor_de_transacciones(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Gestor de transacciones
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_tor_de_transacciones(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Gestor de transacciones */
    return 0;
}
```
```
