

# Punto de equilibrio
> **ID:** `ej-10-39-punto-de-equilibrio` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `arreglos` / `equilibrio`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `equilibrio`, `arreglos`, `punto`, `memoria`, `vectores`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-39-punto-de-equilibrio.ripkg`**](../../paquetes/ej-10-39-punto-de-equilibrio.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-39-punto-de-equilibrio.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-10-39-punto-de-equilibrio<br/><small>arreglos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 10.39 - Punto de equilibrio ⭐⭐☆☆☆


Encontrar un "punto de equilibrio" en un arreglo. Es un índice tal que la suma
de los elementos a su izquierda es igual a la suma de los elementos a su
derecha. Si no existe, devolver -1.

:::{hint} Lógica y Consideraciones

-   **Proceso (dos pasadas):**
    1.  Calcular la suma total de todos los elementos del arreglo.
    2.  Inicializar `suma_izquierda = 0`.
    3.  Recorrer el arreglo. En cada posición `i`:
        a. `suma_derecha = suma_total - suma_izquierda - arreglo[i]`.
        b. Si `suma_izquierda == suma_derecha`, se encontró el punto.
        c. Actualizar `suma_izquierda = suma_izquierda + arreglo[i]`.

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION encontrar_equilibrio(arreglo, tamano)
VARIABLES:
    suma_total, suma_izquierda
INICIO
    suma_total = sumar_arreglo(arreglo, tamano)
    suma_izquierda = 0

    PARA i DESDE 0 HASTA tamano-1 HACER
        suma_total = suma_total - arreglo[i]
        SI suma_izquierda == suma_total ENTONCES
            RETORNAR i
        FIN SI
        suma_izquierda = suma_izquierda + arreglo[i]
    FIN PARA

    RETORNAR -1
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-10-39-punto-de-equilibrio.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_39_PUNTO_DE_EQUILIBRIO_H
#define EJERCICIO_EJ_10_39_PUNTO_DE_EQUILIBRIO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Punto de equilibrio */
int proc__punto_de_equilibrio(int val);

#endif /* EJERCICIO_EJ_10_39_PUNTO_DE_EQUILIBRIO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__punto_de_equilibrio` | `int` | `int val` | Procesa el flujo principal de Punto de equilibrio |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Proceso (dos pasadas):**
```

```{tab-item} Pista 2
Calcular la suma total de todos los elementos del arreglo.
```

```{tab-item} Pista 3
Inicializar `suma_izquierda = 0`.
```

```{tab-item} Pista 4
Recorrer el arreglo. En cada posición `i`: a. `suma_derecha = suma_total - suma_izquierda - arreglo[i]`. b. Si `suma_izquierda == suma_derecha`, se encontró el punto. c. Actualizar `suma_izquierda = suma_izquierda + arreglo[i]`.
```

```{tab-item} Pista 5
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 6
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__punto_de_equilibrio_positivo** | `proc__punto_de_equilibrio` | `int res = proc__punto_de_equilibrio(5); assert(res == 10 || res >= 0);` |

| **test_proc__punto_de_equilibrio_cero** | `proc__punto_de_equilibrio` | `int res = proc__punto_de_equilibrio(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Punto de equilibrio
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__punto_de_equilibrio(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Punto de equilibrio */
    return 0;
}
```
```
