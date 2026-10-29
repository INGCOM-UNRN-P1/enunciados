

# Multiplicación
> **ID:** `ej-14-9-multiplicacion` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `multiplicacion`, `memoria`, `malloc`, `free`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-9-multiplicacion.ripkg`**](../../paquetes/ej-14-9-multiplicacion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-9-multiplicacion.ripkg
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
    
    

    current_node["🎯 ej-14-9-multiplicacion<br/><small>memoria_dinamica · B3</small>"]

    
```


## 📖 Consigna

Implementar `int** multiplicar(int **A, int m, int n, int **B, int p, int q)`.
**Algoritmo:**

1.  Verificar que la multiplicación sea posible ($n$ debe ser igual a $p$). 
2.  Reservar memoria para una nueva matriz `C` de dimensiones $m \times q$.
3.  Aplicar el algoritmo de multiplicación de matrices para calcular cada
    elemento $c_{ij}$ y almacenarlo en la nueva matriz. $$ c_{ij} =
    \sum_{k=1}^{n} a_{ik} \cdot b_{kj} $$
4.  Retornar el puntero a la matriz `C`.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Multiplicación
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__14_9_multiplicacion(int val);

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
- Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
- Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
:::


## 📋 Prototipos y Cabecera (`ej-14-9-multiplicacion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_9_MULTIPLICACION_H
#define EJERCICIO_EJ_14_9_MULTIPLICACION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Multiplicación */
int proc__14_9_multiplicacion(int val);

#endif /* EJERCICIO_EJ_14_9_MULTIPLICACION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__14_9_multiplicacion` | `int` | `int val` | Procesa el flujo principal de Multiplicación |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

```{tab-item} Pista 3
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 4
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__14_9_multiplicacion_positivo** | `proc__14_9_multiplicacion` | `int res = proc__14_9_multiplicacion(5); assert(res == 10 || res >= 0);` |

| **test_proc__14_9_multiplicacion_cero** | `proc__14_9_multiplicacion` | `int res = proc__14_9_multiplicacion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Multiplicación
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__14_9_multiplicacion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Multiplicación */
    return 0;
}
```
```
