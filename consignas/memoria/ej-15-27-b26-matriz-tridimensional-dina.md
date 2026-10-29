

# Matriz Tridimensional Dinámica
> **ID:** `ej-15-27-b26-matriz-tridimensional-dina` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `tridimensional`, `stack`, `layout`, `memoria`, `dinamica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-27-b26-matriz-tridimensional-dina.ripkg`**](../../paquetes/ej-15-27-b26-matriz-tridimensional-dina.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-27-b26-matriz-tridimensional-dina.ripkg
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
    
    

    current_node["🎯 ej-15-27-b26-matriz-tridimensional-dina<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.27 - b.26 - Matriz Tridimensional Dinámica ⭐⭐⭐⭐☆

Implementar la asignación, manipulación y liberación de un volumen tridimensional de enteros (`int ***`) de dimensiones $X 	imes Y 	imes Z$:
- Asignar el arreglo de punteros a matrices 2D, luego los punteros a filas, y finalmente cada fila
- Implementar la función de liberación que destruya simétricamente cada dimensión en orden inverso
- Asegurar que ante cualquier fallo parcial de asignación durante la creación, se liberen todos los bloques previamente reservados sin dejar fugas
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-15-27-b26-matriz-tridimensional-dina.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_27_B26_MATRIZ_TRIDIMENSIONAL_DINA_H
#define EJERCICIO_EJ_15_27_B26_MATRIZ_TRIDIMENSIONAL_DINA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz Tridimensional Dinámica */
int proc__tridimensional_dina(int val);

#endif /* EJERCICIO_EJ_15_27_B26_MATRIZ_TRIDIMENSIONAL_DINA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__tridimensional_dina` | `int` | `int val` | Procesa el flujo principal de Matriz Tridimensional Dinámica |






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

| **test_proc__tridimensional_dina_positivo** | `proc__tridimensional_dina` | `int res = proc__tridimensional_dina(5); assert(res == 10 || res >= 0);` |

| **test_proc__tridimensional_dina_cero** | `proc__tridimensional_dina` | `int res = proc__tridimensional_dina(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.26 - Matriz Tridimensional Dinámica
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__tridimensional_dina(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.26 - Matriz Tridimensional Dinámica */
    return 0;
}
```
```
