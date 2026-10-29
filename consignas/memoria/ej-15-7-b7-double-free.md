

# Double Free
> **ID:** `ej-15-7-b7-double-free` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `double`, `layout`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-7-b7-double-free.ripkg`**](../../paquetes/ej-15-7-b7-double-free.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-7-b7-double-free.ripkg
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
    
    

    current_node["🎯 ej-15-7-b7-double-free<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.7 - b.7 - Double Free ⭐⭐☆☆☆

Escribir un programa que deliberadamente cometa el error de double free:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
int main()
{
    int *ptr = malloc(sizeof(int) * 10);
    *ptr = 42;
    free(ptr);
    free(ptr); // ERROR: double free
    return 0;
}
```
<!-- {code-block} c -->

Compilar con AddressSanitizer (`gcc -fsanitize=address`) y observar el error
detectado.


## 📋 Prototipos y Cabecera (`ej-15-7-b7-double-free.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_7_B7_DOUBLE_FREE_H
#define EJERCICIO_EJ_15_7_B7_DOUBLE_FREE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Double Free */
int proc__15_7_b7_double_free(int val);

#endif /* EJERCICIO_EJ_15_7_B7_DOUBLE_FREE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__15_7_b7_double_free` | `int` | `int val` | Procesa el flujo principal de Double Free |






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

| **test_proc__15_7_b7_double_free_positivo** | `proc__15_7_b7_double_free` | `int res = proc__15_7_b7_double_free(5); assert(res == 10 || res >= 0);` |

| **test_proc__15_7_b7_double_free_cero** | `proc__15_7_b7_double_free` | `int res = proc__15_7_b7_double_free(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdlib.h>


int proc__15_7_b7_double_free(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    int *ptr = malloc(sizeof(int) * 10);
    *ptr = 42;
    free(ptr);
    free(ptr); // ERROR: double free
    return 0;
}
```
```
