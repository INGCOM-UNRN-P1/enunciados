

# Costos Ocultos de malloc
> **ID:** `ej-15-32-b31-costos-ocultos-de-malloc`
 · **Tema:** `memoria`
 · **Bloom:** B5 (Evaluar / Crear)
 · **Carga:** ~45 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `costos`, `layout`, `memoria`, `ocultos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-32-b31-costos-ocultos-de-malloc.ripkg`**](../../paquetes/ej-15-32-b31-costos-ocultos-de-malloc.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-32-b31-costos-ocultos-de-malloc.ripkg
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
    
    

    current_node["🎯 ej-15-32-b31-costos-ocultos-de-malloc<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.32 - b.31 - Costos Ocultos de malloc ⭐⭐☆☆☆

**Pregunta:** ¿Por qué `malloc` tiene overhead? ¿Qué información necesita
guardar el allocator?

**Respuesta esperada:** El allocator guarda metadatos como tamaño del bloque,
estado (libre/ocupado), punteros a bloques vecinos para coalescing, información
de alineación. Típicamente 8-16 bytes por bloque.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-15-32-b31-costos-ocultos-de-malloc.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_32_B31_COSTOS_OCULTOS_DE_MALLOC_H
#define EJERCICIO_EJ_15_32_B31_COSTOS_OCULTOS_DE_MALLOC_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Costos Ocultos de malloc */
int proc_os_ocultos_de_malloc(int val);

#endif /* EJERCICIO_EJ_15_32_B31_COSTOS_OCULTOS_DE_MALLOC_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_os_ocultos_de_malloc` | `int` | `int val` | Procesa el flujo principal de Costos Ocultos de malloc |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_os_ocultos_de_malloc_positivo** | `proc_os_ocultos_de_malloc` | `int res = proc_os_ocultos_de_malloc(5); assert(res == 10 || res >= 0);` |

| **test_proc_os_ocultos_de_malloc_cero** | `proc_os_ocultos_de_malloc` | `int res = proc_os_ocultos_de_malloc(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.31 - Costos Ocultos de malloc
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_os_ocultos_de_malloc(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.31 - Costos Ocultos de malloc */
    return 0;
}
```
```
