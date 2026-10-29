

# strdup Propio
> **ID:** `ej-14-15-strdup-propio` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `strdup`, `memoria`, `propio`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-15-strdup-propio.ripkg`**](../../paquetes/ej-14-15-strdup-propio.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-15-strdup-propio.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-14-15-strdup-propio<br/><small>memoria_dinamica · B3</small>"]

    
```


## 📖 Consigna

Implementar su propia versión de la función no estándar `strdup`, que recibe una
cadena y devuelve un puntero a una nueva cadena en memoria dinámica con el mismo
contenido.

`char* mi_strdup(const char* s);`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de strdup Propio
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__14_15_strdup_propio(int val);

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
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-14-15-strdup-propio.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_15_STRDUP_PROPIO_H
#define EJERCICIO_EJ_14_15_STRDUP_PROPIO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de strdup Propio */
int proc__14_15_strdup_propio(int val);

#endif /* EJERCICIO_EJ_14_15_STRDUP_PROPIO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__14_15_strdup_propio` | `int` | `int val` | Procesa el flujo principal de strdup Propio |






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

| **test_proc__14_15_strdup_propio_positivo** | `proc__14_15_strdup_propio` | `int res = proc__14_15_strdup_propio(5); assert(res == 10 || res >= 0);` |

| **test_proc__14_15_strdup_propio_cero** | `proc__14_15_strdup_propio` | `int res = proc__14_15_strdup_propio(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: strdup Propio
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__14_15_strdup_propio(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de strdup Propio */
    return 0;
}
```
```
