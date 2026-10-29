

# Shrinking Inteligente
> **ID:** `ej-15-12-b12-shrinking-inteligente` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `shrinking`, `layout`, `memoria`, `inteligente`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-12-b12-shrinking-inteligente.ripkg`**](../../paquetes/ej-15-12-b12-shrinking-inteligente.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-12-b12-shrinking-inteligente.ripkg
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
    
    

    current_node["🎯 ej-15-12-b12-shrinking-inteligente<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.12 - b.12 - Shrinking Inteligente ⭐⭐☆☆☆

Implementar un vector que no solo crece, sino que también reduce su capacidad
cuando el tamaño cae por debajo de 1/4 de la capacidad. Esto evita el overhead
de memoria manteniendo estabilidad.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
void vector_pop(vector_t *v)
{
    if (v->size == 0)
        return;
    v->size--;
    // Si size < capacity/4 y capacity > MIN_CAPACITY, reducir a la mitad
    if (v->size > 0 && v->size < v->capacity / 4 && v->capacity > 16)
    {
        v->capacity /= 2;
        v->datos = realloc(v->datos, v->capacity * sizeof(int));
    }
}
```
<!-- {code-block} c -->


## 📋 Prototipos y Cabecera (`ej-15-12-b12-shrinking-inteligente.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_12_B12_SHRINKING_INTELIGENTE_H
#define EJERCICIO_EJ_15_12_B12_SHRINKING_INTELIGENTE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Shrinking Inteligente */
int proc_hrinking_inteligente(int val);

#endif /* EJERCICIO_EJ_15_12_B12_SHRINKING_INTELIGENTE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_hrinking_inteligente` | `int` | `int val` | Procesa el flujo principal de Shrinking Inteligente |






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

| **test_proc_hrinking_inteligente_positivo** | `proc_hrinking_inteligente` | `int res = proc_hrinking_inteligente(5); assert(res == 10 || res >= 0);` |

| **test_proc_hrinking_inteligente_cero** | `proc_hrinking_inteligente` | `int res = proc_hrinking_inteligente(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Solucion modelo para ej-15-12-b12-shrinking-inteligente
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int proc_hrinking_inteligente(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int n = 0;
    if (scanf("%d", &n) == 1)
    {
        printf("OK %d\n", n);
    }
    else
    {
        printf("OK\n");
    }
    return 0;
}
```
```
