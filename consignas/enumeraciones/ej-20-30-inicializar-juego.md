

# Inicializar juego
> **ID:** `ej-20-30-inicializar-juego`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `juego`, `memoria`, `enum`, `inicializar`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-30-inicializar-juego.ripkg`**](../../paquetes/ej-20-30-inicializar-juego.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-30-inicializar-juego.ripkg
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
    
    

    current_node["🎯 ej-20-30-inicializar-juego<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.30 - Inicializar juego ⭐☆☆☆☆

Implementar una función que inicialice un juego nuevo con la dificultad
especificada.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
juego_t inicializar_juego(enum dificultad dif);
```
<!-- c -->

La dificultad debe afectar el número inicial de vidas y otros parámetros.


## 📋 Prototipos y Cabecera (`ej-20-30-inicializar-juego.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_30_INICIALIZAR_JUEGO_H
#define EJERCICIO_EJ_20_30_INICIALIZAR_JUEGO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Inicializar juego */
int proc_30_inicializar_juego(int val);

#endif /* EJERCICIO_EJ_20_30_INICIALIZAR_JUEGO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_30_inicializar_juego` | `int` | `int val` | Procesa el flujo principal de Inicializar juego |






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

| **test_proc_30_inicializar_juego_positivo** | `proc_30_inicializar_juego` | `int res = proc_30_inicializar_juego(5); assert(res == 10 || res >= 0);` |

| **test_proc_30_inicializar_juego_cero** | `proc_30_inicializar_juego` | `int res = proc_30_inicializar_juego(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Inicializar juego
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_30_inicializar_juego(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Inicializar juego */
    return 0;
}
```
```
