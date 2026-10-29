

# Gestor de notificaciones
> **ID:** `ej-20-51-gestor-de-notificaciones` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `notificaciones`, `memoria`, `enum`, `gestor`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-51-gestor-de-notificaciones.ripkg`**](../../paquetes/ej-20-51-gestor-de-notificaciones.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-51-gestor-de-notificaciones.ripkg
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
    
    

    current_node["🎯 ej-20-51-gestor-de-notificaciones<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.51 - Gestor de notificaciones ⭐⭐☆☆☆

Implementar funciones para filtrar y enviar notificaciones.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void enviar_notificacion(const notificacion_t *notif);
bool debe_notificar(enum nivel_notificacion nivel,
                    enum nivel_notificacion nivel_minimo);
unsigned int canales_para_nivel(enum nivel_notificacion nivel);
```
<!-- c -->

## Compresión de Datos


## 📋 Prototipos y Cabecera (`ej-20-51-gestor-de-notificaciones.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_51_GESTOR_DE_NOTIFICACIONES_H
#define EJERCICIO_EJ_20_51_GESTOR_DE_NOTIFICACIONES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Gestor de notificaciones */
int proc_or_de_notificaciones(int val);

#endif /* EJERCICIO_EJ_20_51_GESTOR_DE_NOTIFICACIONES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_or_de_notificaciones` | `int` | `int val` | Procesa el flujo principal de Gestor de notificaciones |






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

| **test_proc_or_de_notificaciones_positivo** | `proc_or_de_notificaciones` | `int res = proc_or_de_notificaciones(5); assert(res == 10 || res >= 0);` |

| **test_proc_or_de_notificaciones_cero** | `proc_or_de_notificaciones` | `int res = proc_or_de_notificaciones(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Gestor de notificaciones
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_or_de_notificaciones(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Gestor de notificaciones */
    return 0;
}
```
```
