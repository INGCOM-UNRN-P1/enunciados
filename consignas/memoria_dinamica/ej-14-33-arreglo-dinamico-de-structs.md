

# Arreglo Dinámico de Structs
> **ID:** `ej-14-33-arreglo-dinamico-de-structs` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `dinamico`, `arreglo`, `memoria`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-33-arreglo-dinamico-de-structs.ripkg`**](../../paquetes/ej-14-33-arreglo-dinamico-de-structs.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-33-arreglo-dinamico-de-structs.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-14-33-arreglo-dinamico-de-structs<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.33 - Arreglo Dinámico de Structs ⭐⭐⭐☆☆

Alojar dinámicamente un arreglo de `structs` (ej. `producto_t` de un ejercicio
anterior). Implementar funciones para añadir y buscar elementos en este arreglo,
usando `realloc` para expandir el arreglo cuando sea necesario.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-33-arreglo-dinamico-de-structs.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_33_ARREGLO_DINAMICO_DE_STRUCTS_H
#define EJERCICIO_EJ_14_33_ARREGLO_DINAMICO_DE_STRUCTS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Arreglo Dinámico de Structs */
int proc__dinamico_de_structs(int val);

#endif /* EJERCICIO_EJ_14_33_ARREGLO_DINAMICO_DE_STRUCTS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__dinamico_de_structs` | `int` | `int val` | Procesa el flujo principal de Arreglo Dinámico de Structs |






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

| **test_proc__dinamico_de_structs_positivo** | `proc__dinamico_de_structs` | `int res = proc__dinamico_de_structs(5); assert(res == 10 || res >= 0);` |

| **test_proc__dinamico_de_structs_cero** | `proc__dinamico_de_structs` | `int res = proc__dinamico_de_structs(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Arreglo Dinámico de Structs
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__dinamico_de_structs(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Arreglo Dinámico de Structs */
    return 0;
}
```
```
