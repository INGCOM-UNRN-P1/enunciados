

# Tamaño de Página del Sistema
> **ID:** `ej-15-3-b3-tamano-de-pagina-del-sistem` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `tamano`, `memoria`, `sistema`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-3-b3-tamano-de-pagina-del-sistem.ripkg`**](../../paquetes/ej-15-3-b3-tamano-de-pagina-del-sistem.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-3-b3-tamano-de-pagina-del-sistem.ripkg
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
    
    

    current_node["🎯 ej-15-3-b3-tamano-de-pagina-del-sistem<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.3 - b.3 - Tamaño de Página del Sistema ⭐⭐☆☆☆

Escribir un programa que use `sysconf(_SC_PAGESIZE)` (en sistemas POSIX) para
obtener el tamaño de página del sistema. Luego, alojar varios bloques de memoria
de diferentes tamaños y analizar cuánta memoria física se está usando realmente.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{note} Memoria Virtual

Recordá que el sistema operativo asigna memoria en múltiplos del tamaño de
página, típicamente 4 KB. Una asignación de 100 bytes puede consumir 4 KB de
memoria física.

:::
<!-- {note} Memoria Virtual -->

## Patrones de Gestión de Memoria


## 📋 Prototipos y Cabecera (`ej-15-3-b3-tamano-de-pagina-del-sistem.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_3_B3_TAMANO_DE_PAGINA_DEL_SISTEM_H
#define EJERCICIO_EJ_15_3_B3_TAMANO_DE_PAGINA_DEL_SISTEM_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Tamaño de Página del Sistema */
int proc_de_pagina_del_sistem(int val);

#endif /* EJERCICIO_EJ_15_3_B3_TAMANO_DE_PAGINA_DEL_SISTEM_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_de_pagina_del_sistem` | `int` | `int val` | Procesa el flujo principal de Tamaño de Página del Sistema |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_de_pagina_del_sistem_positivo** | `proc_de_pagina_del_sistem` | `int res = proc_de_pagina_del_sistem(5); assert(res == 10 || res >= 0);` |

| **test_proc_de_pagina_del_sistem_cero** | `proc_de_pagina_del_sistem` | `int res = proc_de_pagina_del_sistem(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.3 - Tamaño de Página del Sistema
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_de_pagina_del_sistem(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.3 - Tamaño de Página del Sistema */
    return 0;
}
```
```
