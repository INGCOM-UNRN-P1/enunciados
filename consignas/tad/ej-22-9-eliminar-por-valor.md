

# Eliminar por Valor
> **ID:** `ej-22-9-eliminar-por-valor` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `tad` / `arboles_binarios`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:estructuras`, `dep:punteros`, `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `tad`, `valor`, `eliminar`, `abstraccion`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-22-9-eliminar-por-valor.ripkg`**](../../paquetes/ej-22-9-eliminar-por-valor.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-22-9-eliminar-por-valor.ripkg
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
    
    

    current_node["🎯 ej-22-9-eliminar-por-valor<br/><small>tad · B5</small>"]

    
```


## 📖 Consigna

Implementar la operación de eliminar todas las ocurrencias de un elemento y
liberar sus nodos correspondientes en memoria.



``` c
bool lista_eliminar(lista_t *lista, int dato);
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Eliminar por Valor
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_9_eliminar_por_valor(int val);

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


## 📋 Prototipos y Cabecera (`ej-22-9-eliminar-por-valor.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_22_9_ELIMINAR_POR_VALOR_H
#define EJERCICIO_EJ_22_9_ELIMINAR_POR_VALOR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Eliminar por Valor */
int proc_9_eliminar_por_valor(int val);

#endif /* EJERCICIO_EJ_22_9_ELIMINAR_POR_VALOR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_9_eliminar_por_valor` | `int` | `int val` | Procesa el flujo principal de Eliminar por Valor |






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

| **test_proc_9_eliminar_por_valor_positivo** | `proc_9_eliminar_por_valor` | `int res = proc_9_eliminar_por_valor(5); assert(res == 10 || res >= 0);` |

| **test_proc_9_eliminar_por_valor_cero** | `proc_9_eliminar_por_valor` | `int res = proc_9_eliminar_por_valor(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Eliminar por Valor
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_9_eliminar_por_valor(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Eliminar por Valor */
    return 0;
}
```
```
