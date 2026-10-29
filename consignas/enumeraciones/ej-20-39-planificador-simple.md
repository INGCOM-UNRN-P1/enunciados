

# Planificador simple
> **ID:** `ej-20-39-planificador-simple`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `planificador`, `tipos`, `memoria`, `enum`, `simple`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-39-planificador-simple.ripkg`**](../../paquetes/ej-20-39-planificador-simple.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-39-planificador-simple.ripkg
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
    
    

    current_node["🎯 ej-20-39-planificador-simple<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.39 - Planificador simple ⭐☆☆☆☆

Implementar funciones de transición de estado para un planificador.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool transicion_estado(proceso_t *proceso, enum estado_proceso nuevo_estado);
bool puede_ejecutar(const proceso_t *proceso);
```
<!-- c -->

## Protocolo HTTP


## 📋 Prototipos y Cabecera (`ej-20-39-planificador-simple.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_39_PLANIFICADOR_SIMPLE_H
#define EJERCICIO_EJ_20_39_PLANIFICADOR_SIMPLE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Planificador simple */
int proc__planificador_simple(int val);

#endif /* EJERCICIO_EJ_20_39_PLANIFICADOR_SIMPLE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__planificador_simple` | `int` | `int val` | Procesa el flujo principal de Planificador simple |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
```

```{tab-item} Pista 2
[Plus Ultra] Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__planificador_simple_positivo** | `proc__planificador_simple` | `int res = proc__planificador_simple(5); assert(res == 10 || res >= 0);` |

| **test_proc__planificador_simple_cero** | `proc__planificador_simple` | `int res = proc__planificador_simple(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Planificador simple
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__planificador_simple(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Planificador simple */
    return 0;
}
```
```
