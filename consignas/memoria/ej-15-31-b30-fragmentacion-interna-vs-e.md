

# Fragmentación Interna vs Externa
> **ID:** `ej-15-31-b30-fragmentacion-interna-vs-e` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `externa`, `interna`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-31-b30-fragmentacion-interna-vs-e.ripkg`**](../../paquetes/ej-15-31-b30-fragmentacion-interna-vs-e.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-31-b30-fragmentacion-interna-vs-e.ripkg
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
    
    

    current_node["🎯 ej-15-31-b30-fragmentacion-interna-vs-e<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.31 - b.30 - Fragmentación Interna vs Externa ⭐⭐☆☆☆

**Pregunta:** Explicar la diferencia entre fragmentación interna y externa. Dar
ejemplos de cada una.

**Fragmentación interna:** Espacio desperdiciado dentro de un bloque asignado
(ej. `malloc(17)` puede asignar 32 bytes, desperdiciando 15).

**Fragmentación externa:** Espacio libre total suficiente pero dividido en
bloques no contiguos (ej. después de liberar bloques alternados).
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-15-31-b30-fragmentacion-interna-vs-e.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_31_B30_FRAGMENTACION_INTERNA_VS_E_H
#define EJERCICIO_EJ_15_31_B30_FRAGMENTACION_INTERNA_VS_E_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Fragmentación Interna vs Externa */
int proc_ntacion_interna_vs_e(int val);

#endif /* EJERCICIO_EJ_15_31_B30_FRAGMENTACION_INTERNA_VS_E_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ntacion_interna_vs_e` | `int` | `int val` | Procesa el flujo principal de Fragmentación Interna vs Externa |






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

| **test_proc_ntacion_interna_vs_e_positivo** | `proc_ntacion_interna_vs_e` | `int res = proc_ntacion_interna_vs_e(5); assert(res == 10 || res >= 0);` |

| **test_proc_ntacion_interna_vs_e_cero** | `proc_ntacion_interna_vs_e` | `int res = proc_ntacion_interna_vs_e(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.30 - Fragmentación Interna vs Externa
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ntacion_interna_vs_e(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.30 - Fragmentación Interna vs Externa */
    return 0;
}
```
```
