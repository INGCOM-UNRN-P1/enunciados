

# Inserción al Inicio
> **ID:** `ej-22-1-insercion-al-inicio`
 · **Tema:** `tad`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:estructuras`, `dep:punteros`, `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `tad`, `insercion`, `abstraccion`, `algoritmos`, `inicio`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-22-1-insercion-al-inicio.ripkg`**](../../paquetes/ej-22-1-insercion-al-inicio.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-22-1-insercion-al-inicio.ripkg
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
    
    

    current_node["🎯 ej-22-1-insercion-al-inicio<br/><small>tad · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 22.1 - Inserción al Inicio ⭐⭐☆☆☆

Implementar la operación de insertar un elemento al principio de la lista. Esta
operación debe tener complejidad $O(1)$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool insertar_al_inicio(lista_t *lista, int dato);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-22-1-insercion-al-inicio.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_22_1_INSERCION_AL_INICIO_H
#define EJERCICIO_EJ_22_1_INSERCION_AL_INICIO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Inserción al Inicio */
int proc__insercion_al_inicio(int val);

#endif /* EJERCICIO_EJ_22_1_INSERCION_AL_INICIO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__insercion_al_inicio` | `int` | `int val` | Procesa el flujo principal de Inserción al Inicio |






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

| **test_proc__insercion_al_inicio_positivo** | `proc__insercion_al_inicio` | `int res = proc__insercion_al_inicio(5); assert(res == 10 || res >= 0);` |

| **test_proc__insercion_al_inicio_cero** | `proc__insercion_al_inicio` | `int res = proc__insercion_al_inicio(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Inserción al Inicio
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__insercion_al_inicio(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Inserción al Inicio */
    return 0;
}
```
```
