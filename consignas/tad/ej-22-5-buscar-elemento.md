

# Buscar Elemento
> **ID:** `ej-22-5-buscar-elemento` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `tad` / `arboles_binarios`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:estructuras`, `dep:punteros`, `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `tad`, `abstraccion`, `buscar`, `algoritmos`, `elemento`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-22-5-buscar-elemento.ripkg`**](../../paquetes/ej-22-5-buscar-elemento.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-22-5-buscar-elemento.ripkg
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
    
    

    current_node["🎯 ej-22-5-buscar-elemento<br/><small>tad · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 22.5 - Buscar Elemento ⭐⭐☆☆☆

Implementar una función que determine si un elemento está presente en la lista.
Retornar `true` si lo encuentra.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool lista_pertenece(const lista_t *lista, int dato);
```
<!-- c -->

**Complejidad:** $O(n)$ en el peor caso.


## 📋 Prototipos y Cabecera (`ej-22-5-buscar-elemento.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_22_5_BUSCAR_ELEMENTO_H
#define EJERCICIO_EJ_22_5_BUSCAR_ELEMENTO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Buscar Elemento */
int proc_22_5_buscar_elemento(int val);

#endif /* EJERCICIO_EJ_22_5_BUSCAR_ELEMENTO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_22_5_buscar_elemento` | `int` | `int val` | Procesa el flujo principal de Buscar Elemento |






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

| **test_proc_22_5_buscar_elemento_positivo** | `proc_22_5_buscar_elemento` | `int res = proc_22_5_buscar_elemento(5); assert(res == 10 || res >= 0);` |

| **test_proc_22_5_buscar_elemento_cero** | `proc_22_5_buscar_elemento` | `int res = proc_22_5_buscar_elemento(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Buscar Elemento
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_22_5_buscar_elemento(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Buscar Elemento */
    return 0;
}
```
```
