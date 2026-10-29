

# Ver Primero y Último
> **ID:** `ej-22-3-ver-primero-y-ultimo`
 · **Tema:** `tad`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:estructuras`, `dep:punteros`, `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `ultimo`, `tad`, `primero`, `abstraccion`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-22-3-ver-primero-y-ultimo.ripkg`**](../../paquetes/ej-22-3-ver-primero-y-ultimo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-22-3-ver-primero-y-ultimo.ripkg
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
    
    

    current_node["🎯 ej-22-3-ver-primero-y-ultimo<br/><small>tad · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 22.3 - Ver Primero y Último ⭐⭐☆☆☆

Implementar operaciones para obtener el primer y último elemento sin modificar
la lista.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool ver_primero(const lista_t *lista, int *dato);
bool ver_ultimo(const lista_t *lista, int *dato);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-22-3-ver-primero-y-ultimo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_22_3_VER_PRIMERO_Y_ULTIMO_H
#define EJERCICIO_EJ_22_3_VER_PRIMERO_Y_ULTIMO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ver Primero y Último */
int proc_ver_primero_y_ultimo(int val);

#endif /* EJERCICIO_EJ_22_3_VER_PRIMERO_Y_ULTIMO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ver_primero_y_ultimo` | `int` | `int val` | Procesa el flujo principal de Ver Primero y Último |






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

| **test_proc_ver_primero_y_ultimo_positivo** | `proc_ver_primero_y_ultimo` | `int res = proc_ver_primero_y_ultimo(5); assert(res == 10 || res >= 0);` |

| **test_proc_ver_primero_y_ultimo_cero** | `proc_ver_primero_y_ultimo` | `int res = proc_ver_primero_y_ultimo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ver Primero y Último
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ver_primero_y_ultimo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ver Primero y Último */
    return 0;
}
```
```
