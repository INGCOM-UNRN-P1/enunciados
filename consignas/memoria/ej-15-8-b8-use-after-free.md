

# Use After Free
> **ID:** `ej-15-8-b8-use-after-free` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `after`, `layout`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-8-b8-use-after-free.ripkg`**](../../paquetes/ej-15-8-b8-use-after-free.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-8-b8-use-after-free.ripkg
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
    
    

    current_node["🎯 ej-15-8-b8-use-after-free<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

Crear un programa que cometa use-after-free:



```{code-block} c
:linenos:
int main()
{
    int *arr = malloc(sizeof(int) * 5);
    arr[0] = 100;
    free(arr);
    printf("%d\n", arr[0]); // ERROR: use after free
    return 0;
}
```

Ejecutar con Valgrind: `valgrind --leak-check=full ./programa`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Use After Free
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__8_b8_use_after_free(int val);

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


## 📋 Prototipos y Cabecera (`ej-15-8-b8-use-after-free.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_8_B8_USE_AFTER_FREE_H
#define EJERCICIO_EJ_15_8_B8_USE_AFTER_FREE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Use After Free */
int proc__8_b8_use_after_free(int val);

#endif /* EJERCICIO_EJ_15_8_B8_USE_AFTER_FREE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__8_b8_use_after_free` | `int` | `int val` | Procesa el flujo principal de Use After Free |






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

| **test_proc__8_b8_use_after_free_positivo** | `proc__8_b8_use_after_free` | `int res = proc__8_b8_use_after_free(5); assert(res == 10 || res >= 0);` |

| **test_proc__8_b8_use_after_free_cero** | `proc__8_b8_use_after_free` | `int res = proc__8_b8_use_after_free(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>


int proc__8_b8_use_after_free(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    int *arr = malloc(sizeof(int) * 5);
    arr[0] = 100;
    free(arr);
    printf("%d\n", arr[0]); // ERROR: use after free
    return 0;
}
```
```
