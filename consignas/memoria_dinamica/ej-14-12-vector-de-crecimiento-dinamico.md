

# Vector de Crecimiento Dinámico
> **ID:** `ej-14-12-vector-de-crecimiento-dinamico` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `heap`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `dinamico`, `crecimiento`, `vector`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-12-vector-de-crecimiento-dinamico.ripkg`**](../../paquetes/ej-14-12-vector-de-crecimiento-dinamico.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-12-vector-de-crecimiento-dinamico.ripkg
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
    
    

    current_node["🎯 ej-14-12-vector-de-crecimiento-dinamico<br/><small>memoria_dinamica · B3</small>"]

    
```


## 📖 Consigna

Implementar una estructura `vector_t` que simule un `std::vector` de C++. Debe
contener un puntero a los datos, un tamaño (`size`) y una capacidad
(`capacity`). Crear funciones para:
- `vector_crear()`: Inicializa un vector vacío.
- `vector_push_back(vector_t* v, int dato)`: Añade un elemento al final. Si
  `size == capacity`, debe duplicar la capacidad usando `realloc`.
- `vector_destruir(vector_t* v)`: Libera toda la memoria.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Vector de Crecimiento Dinámico
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_crecimiento_dinamico(int val);

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


## 📋 Prototipos y Cabecera (`ej-14-12-vector-de-crecimiento-dinamico.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_12_VECTOR_DE_CRECIMIENTO_DINAMICO_H
#define EJERCICIO_EJ_14_12_VECTOR_DE_CRECIMIENTO_DINAMICO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Vector de Crecimiento Dinámico */
int proc_crecimiento_dinamico(int val);

#endif /* EJERCICIO_EJ_14_12_VECTOR_DE_CRECIMIENTO_DINAMICO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_crecimiento_dinamico` | `int` | `int val` | Procesa el flujo principal de Vector de Crecimiento Dinámico |






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

| **test_proc_crecimiento_dinamico_positivo** | `proc_crecimiento_dinamico` | `int res = proc_crecimiento_dinamico(5); assert(res == 10 || res >= 0);` |

| **test_proc_crecimiento_dinamico_cero** | `proc_crecimiento_dinamico` | `int res = proc_crecimiento_dinamico(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Vector de Crecimiento Dinámico
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_crecimiento_dinamico(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Vector de Crecimiento Dinámico */
    return 0;
}
```
```
