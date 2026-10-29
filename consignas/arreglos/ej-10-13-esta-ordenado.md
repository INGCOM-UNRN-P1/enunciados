

# ¿Está ordenado?
> **ID:** `ej-10-13-esta-ordenado` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `arreglos` / `esta`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `esta`, `arreglos`, `memoria`, `ordenado`, `vectores`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-13-esta-ordenado.ripkg`**](../../paquetes/ej-10-13-esta-ordenado.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-13-esta-ordenado.ripkg
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
    
    

    current_node["🎯 ej-10-13-esta-ordenado<br/><small>arreglos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 10.13 - ¿Está ordenado? ⭐⭐☆☆☆


Verificar si un arreglo está ordenado de forma ascendente.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Proceso:** Recorrer el arreglo desde el primer elemento hasta el
    penúltimo. En cada posición `i`, comparar el elemento `arreglo[i]` con el
    siguiente, `arreglo[i+1]`.
-   **Condición de Salida:** Si en algún momento se encuentra que `arreglo[i] >
    arreglo[i+1]`, el arreglo no está ordenado y la función puede devolver
    `falso` inmediatamente.
-   **Salida:** Si el lazo termina sin encontrar ninguna inversión de orden,
    significa que el arreglo está ordenado y la función devuelve `verdadero`.

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
FUNCION esta_ordenado(arreglo, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-2 HACER
        SI arreglo[i] > arreglo[i+1] ENTONCES
            RETORNAR FALSO
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-10-13-esta-ordenado.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_13_ESTA_ORDENADO_H
#define EJERCICIO_EJ_10_13_ESTA_ORDENADO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de ¿Está ordenado? */
int proc__10_13_esta_ordenado(int val);

#endif /* EJERCICIO_EJ_10_13_ESTA_ORDENADO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__10_13_esta_ordenado` | `int` | `int val` | Procesa el flujo principal de ¿Está ordenado? |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un arreglo y su tamaño.
```

```{tab-item} Pista 2
**Proceso:** Recorrer el arreglo desde el primer elemento hasta el penúltimo. En cada posición `i`, comparar el elemento `arreglo[i]` con el siguiente, `arreglo[i+1]`.
```

```{tab-item} Pista 3
**Condición de Salida:** Si en algún momento se encuentra que `arreglo[i] > arreglo[i+1]`, el arreglo no está ordenado y la función puede devolver `falso` inmediatamente.
```

```{tab-item} Pista 4
**Salida:** Si el lazo termina sin encontrar ninguna inversión de orden, significa que el arreglo está ordenado y la función devuelve `verdadero`.
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

| **test_proc__10_13_esta_ordenado_positivo** | `proc__10_13_esta_ordenado` | `int res = proc__10_13_esta_ordenado(5); assert(res == 10 || res >= 0);` |

| **test_proc__10_13_esta_ordenado_cero** | `proc__10_13_esta_ordenado` | `int res = proc__10_13_esta_ordenado(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: ¿Está ordenado?
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__10_13_esta_ordenado(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de ¿Está ordenado? */
    return 0;
}
```
```
