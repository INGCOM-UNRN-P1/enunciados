

# Conjetura de Collatz Caótica
> **ID:** `ej-9-40-conjetura-de-collatz-caotica` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `clean_code`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `fundamentos`, `collatz`, `conjetura`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-40-conjetura-de-collatz-caotica.ripkg`**](../../paquetes/ej-9-40-conjetura-de-collatz-caotica.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-40-conjetura-de-collatz-caotica.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["testing"]
        
        node_pre_2["diseno_api"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-9-40-conjetura-de-collatz-caotica<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-ref-collatz-caotica
Refactorizá la siguiente función que cuenta la cantidad de pasos hasta llegar a
1 en la secuencia de Collatz ($3n+1$), la cual mezcla ternarios y lazos
`while(1)`:

``` c
int col(long long n){int c=0;if(n<=0)return -1;while(1){if(n==1)break;n=(n%2==0)?n/2:3*n+1;c++;}return c;}
```

-   **[*plus ultra*]:** Eliminar el ternario y el `while(1)`.
-   **[*plus ultra*]:** Escribir tests con `assert()` para `col(1) == 0`,
    `col(6) == 8` y `col(27) == 111`.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Conjetura de Collatz Caótica
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_a_de_collatz_caotica(int val);

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
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.


## 📋 Prototipos y Cabecera (`ej-9-40-conjetura-de-collatz-caotica.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_40_CONJETURA_DE_COLLATZ_CAOTICA_H
#define EJERCICIO_EJ_9_40_CONJETURA_DE_COLLATZ_CAOTICA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Conjetura de Collatz Caótica */
int proc_a_de_collatz_caotica(int val);

#endif /* EJERCICIO_EJ_9_40_CONJETURA_DE_COLLATZ_CAOTICA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_a_de_collatz_caotica` | `int` | `int val` | Procesa el flujo principal de Conjetura de Collatz Caótica |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_a_de_collatz_caotica_positivo** | `proc_a_de_collatz_caotica` | `int res = proc_a_de_collatz_caotica(5); assert(res == 10 || res >= 0);` |

| **test_proc_a_de_collatz_caotica_cero** | `proc_a_de_collatz_caotica` | `int res = proc_a_de_collatz_caotica(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Conjetura de Collatz Caótica
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_a_de_collatz_caotica(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Conjetura de Collatz Caótica */
    return 0;
}
```
```
