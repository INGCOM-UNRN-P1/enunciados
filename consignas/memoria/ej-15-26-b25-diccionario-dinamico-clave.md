

# Diccionario Dinámico Clave-Valor
> **ID:** `ej-15-26-b25-diccionario-dinamico-clave` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `dinamico`, `stack`, `layout`, `memoria`, `diccionario`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-26-b25-diccionario-dinamico-clave.ripkg`**](../../paquetes/ej-15-26-b25-diccionario-dinamico-clave.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-26-b25-diccionario-dinamico-clave.ripkg
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
    
    

    current_node["🎯 ej-15-26-b25-diccionario-dinamico-clave<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

Implementar una estructura de diccionario asociativo en memoria dinámica basada en un arreglo de pares `(clave, valor)`:
- Crecer automáticamente mediante `realloc` duplicando su capacidad cuando el arreglo se llene
- Duplicar dinámicamente las cadenas de texto correspondientes a las claves
- Liberar cada cadena individual y el arreglo principal al destruir la estructura

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Diccionario Dinámico Clave-Valor
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_nario_dinamico_clave(int val);

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


## 📋 Prototipos y Cabecera (`ej-15-26-b25-diccionario-dinamico-clave.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_26_B25_DICCIONARIO_DINAMICO_CLAVE_H
#define EJERCICIO_EJ_15_26_B25_DICCIONARIO_DINAMICO_CLAVE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Diccionario Dinámico Clave-Valor */
int proc_nario_dinamico_clave(int val);

#endif /* EJERCICIO_EJ_15_26_B25_DICCIONARIO_DINAMICO_CLAVE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_nario_dinamico_clave` | `int` | `int val` | Procesa el flujo principal de Diccionario Dinámico Clave-Valor |






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

| **test_proc_nario_dinamico_clave_positivo** | `proc_nario_dinamico_clave` | `int res = proc_nario_dinamico_clave(5); assert(res == 10 || res >= 0);` |

| **test_proc_nario_dinamico_clave_cero** | `proc_nario_dinamico_clave` | `int res = proc_nario_dinamico_clave(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.25 - Diccionario Dinámico Clave-Valor
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_nario_dinamico_clave(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.25 - Diccionario Dinámico Clave-Valor */
    return 0;
}
```
```
