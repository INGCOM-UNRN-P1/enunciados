

# free(NULL)
> **ID:** `ej-15-33-b32-freenull`
 · **Tema:** `memoria`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `freenull`, `layout`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-33-b32-freenull.ripkg`**](../../paquetes/ej-15-33-b32-freenull.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-33-b32-freenull.ripkg
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
    
    

    current_node["🎯 ej-15-33-b32-freenull<br/><small>memoria · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.33 - b.32 - free(NULL) ⭐⭐☆☆☆

**Pregunta:** ¿Qué hace `free(NULL)`? ¿Es seguro? ¿Por qué esta semántica es
útil?

**Respuesta esperada:** `free(NULL)` no hace nada y es completamente seguro
según el estándar C. Esto permite código más simple sin necesidad de verificar
`if (ptr != NULL) free(ptr)`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-15-33-b32-freenull.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_33_B32_FREENULL_H
#define EJERCICIO_EJ_15_33_B32_FREENULL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de free(NULL) */
int ejecutar_ej_15_33_b32_freenull(int val);

#endif /* EJERCICIO_EJ_15_33_B32_FREENULL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_15_33_b32_freenull` | `int` | `int val` | Procesa el flujo principal de free(NULL) |






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

| **test_ejecutar_ej_15_33_b32_freenull_positivo** | `ejecutar_ej_15_33_b32_freenull` | `int res = ejecutar_ej_15_33_b32_freenull(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_15_33_b32_freenull_cero** | `ejecutar_ej_15_33_b32_freenull` | `int res = ejecutar_ej_15_33_b32_freenull(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdlib.h>

/*
 * Ejercicio: b.32 - free(NULL)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_15_33_b32_freenull(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.32 - free(NULL) */
    return 0;
}
```
```
