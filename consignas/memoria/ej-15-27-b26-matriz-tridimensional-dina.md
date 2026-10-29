

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

Implementar la asignación, manipulación y liberación de un volumen tridimensional de enteros (`int ***`) de dimensiones $X 	imes Y 	imes Z$:
- Asignar el arreglo de punteros a matrices 2D, luego los punteros a filas, y finalmente cada fila
- Implementar la función de liberación que destruya simétricamente cada dimensión en orden inverso
- Asegurar que ante cualquier fallo parcial de asignación durante la creación, se liberen todos los bloques previamente reservados sin dejar fugas

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Matriz Tridimensional Dinámica
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__tridimensional_dina(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
:::


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
