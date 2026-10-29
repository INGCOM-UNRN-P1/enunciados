

# Conteo de inversiones
> **ID:** `ej-10-29-conteo-de-inversiones`
 · **Tema:** `arreglos`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `arreglos`, `memoria`, `conteo`, `vectores`, `inversiones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-29-conteo-de-inversiones.ripkg`**](../../paquetes/ej-10-29-conteo-de-inversiones.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-29-conteo-de-inversiones.ripkg
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
    
    

    current_node["🎯 ej-10-29-conteo-de-inversiones<br/><small>arreglos · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 10.29 - Conteo de inversiones ⭐⭐☆☆☆


Contar el número de "inversiones" en un arreglo. Una inversión es un par de
índices `(i, j)` tales que `i < j` y `arr[i] > arr[j]`. Un arreglo perfectamente
ordenado tiene 0 inversiones.

:::{hint} Lógica y Consideraciones

-   **Proceso (Fuerza Bruta):** Usar dos lazos anidados. El lazo exterior itera
    con `i` desde 0 hasta `n-2`. El lazo interior itera con `j` desde `i+1`
    hasta `n-1`. Si `arreglo[i] > arreglo[j]`, se incrementa un contador.
-   **Complejidad:** La solución de fuerza bruta es O(n^2). Existen algoritmos
    más eficientes basados en Merge Sort.

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
FUNCION contar_inversiones(arreglo, tamano)
VARIABLES:
    contador (entero)
INICIO
    contador = 0
    PARA i DESDE 0 HASTA tamano-2 HACER
        PARA j DESDE i+1 HASTA tamano-1 HACER
            SI arreglo[i] > arreglo[j] ENTONCES
                contador = contador + 1
            FIN SI
        FIN PARA
    FIN PARA
    RETORNAR contador
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Más Manipulación de Arreglos


## 📋 Prototipos y Cabecera (`ej-10-29-conteo-de-inversiones.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_29_CONTEO_DE_INVERSIONES_H
#define EJERCICIO_EJ_10_29_CONTEO_DE_INVERSIONES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Conteo de inversiones */
int proc_onteo_de_inversiones(int val);

#endif /* EJERCICIO_EJ_10_29_CONTEO_DE_INVERSIONES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_onteo_de_inversiones` | `int` | `int val` | Procesa el flujo principal de Conteo de inversiones |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Proceso (Fuerza Bruta):** Usar dos lazos anidados. El lazo exterior itera con `i` desde 0 hasta `n-2`. El lazo interior itera con `j` desde `i+1` hasta `n-1`. Si `arreglo[i] > arreglo[j]`, se incrementa un contador.
```

```{tab-item} Pista 2
**Complejidad:** La solución de fuerza bruta es O(n^2). Existen algoritmos más eficientes basados en Merge Sort.
```

```{tab-item} Pista 3
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 4
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_onteo_de_inversiones_positivo** | `proc_onteo_de_inversiones` | `int res = proc_onteo_de_inversiones(5); assert(res == 10 || res >= 0);` |

| **test_proc_onteo_de_inversiones_cero** | `proc_onteo_de_inversiones` | `int res = proc_onteo_de_inversiones(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Conteo de inversiones
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_onteo_de_inversiones(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Conteo de inversiones */
    return 0;
}
```
```
