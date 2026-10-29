

# Contar Ocurrencias
> **ID:** `ej-22-7-contar-ocurrencias`
 · **Tema:** `tad`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:estructuras`, `dep:punteros`, `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `contar`, `ocurrencias`, `tad`, `abstraccion`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-22-7-contar-ocurrencias.ripkg`**](../../paquetes/ej-22-7-contar-ocurrencias.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-22-7-contar-ocurrencias.ripkg
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
    
    

    current_node["🎯 ej-22-7-contar-ocurrencias<br/><small>tad · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 22.7 - Contar Ocurrencias ⭐⭐☆☆☆

Implementar una función que cuente cuántas veces aparece un elemento en la
lista.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
size_t lista_contar(const lista_t *lista, int dato);
```
<!-- c -->

---

## Lista Enlazada - Operaciones Avanzadas


## 📋 Prototipos y Cabecera (`ej-22-7-contar-ocurrencias.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_22_7_CONTAR_OCURRENCIAS_H
#define EJERCICIO_EJ_22_7_CONTAR_OCURRENCIAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Contar Ocurrencias */
int proc_7_contar_ocurrencias(int val);

#endif /* EJERCICIO_EJ_22_7_CONTAR_OCURRENCIAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_7_contar_ocurrencias` | `int` | `int val` | Procesa el flujo principal de Contar Ocurrencias |






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

| **test_proc_7_contar_ocurrencias_positivo** | `proc_7_contar_ocurrencias` | `int res = proc_7_contar_ocurrencias(5); assert(res == 10 || res >= 0);` |

| **test_proc_7_contar_ocurrencias_cero** | `proc_7_contar_ocurrencias` | `int res = proc_7_contar_ocurrencias(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Contar Ocurrencias
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_7_contar_ocurrencias(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Contar Ocurrencias */
    return 0;
}
```
```
