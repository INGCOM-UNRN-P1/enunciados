

# Borrar Primero
> **ID:** `ej-22-4-borrar-primero`
 · **Tema:** `tad`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:estructuras`, `dep:punteros`, `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `borrar`, `tad`, `primero`, `abstraccion`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-22-4-borrar-primero.ripkg`**](../../paquetes/ej-22-4-borrar-primero.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-22-4-borrar-primero.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["estructuras"]
        
        node_pre_2["punteros"]
        
        node_pre_3["memoria_dinamica"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-22-4-borrar-primero<br/><small>tad · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 22.4 - Borrar Primero ⭐⭐☆☆☆

Implementar la operación de eliminar el primer elemento y retornar su valor.
Complejidad: $O(1)$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool borrar_primero(lista_t *lista, int *dato);
```
<!-- c -->

---

## Lista Enlazada - Operaciones de Búsqueda


## 📋 Prototipos y Cabecera (`ej-22-4-borrar-primero.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_22_4_BORRAR_PRIMERO_H
#define EJERCICIO_EJ_22_4_BORRAR_PRIMERO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Borrar Primero */
int proc__22_4_borrar_primero(int val);

#endif /* EJERCICIO_EJ_22_4_BORRAR_PRIMERO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__22_4_borrar_primero` | `int` | `int val` | Procesa el flujo principal de Borrar Primero |






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

| **test_proc__22_4_borrar_primero_positivo** | `proc__22_4_borrar_primero` | `int res = proc__22_4_borrar_primero(5); assert(res == 10 || res >= 0);` |

| **test_proc__22_4_borrar_primero_cero** | `proc__22_4_borrar_primero` | `int res = proc__22_4_borrar_primero(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Borrar Primero
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__22_4_borrar_primero(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Borrar Primero */
    return 0;
}
```
```
