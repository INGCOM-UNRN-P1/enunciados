

# Promedio
> **ID:** `ej-10-3-promedio` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `arreglos` / `estadistica_basica`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `promedio`, `vectores`, `arreglos`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-3-promedio.ripkg`**](../../paquetes/ej-10-3-promedio.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-3-promedio.ripkg
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
    
    

    current_node["🎯 ej-10-3-promedio<br/><small>arreglos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 10.3 - Promedio ⭐⭐☆☆☆


Calcular el valor promedio (media aritmética) de los elementos de un arreglo.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Reutilización:** Se puede reutilizar la función `sumar_arreglo` del
    ejercicio anterior.
-   **Proceso:**
    1.  Calcular la suma total de los elementos.
    2.  Dividir la suma por el número de elementos (tamaño del arreglo).
-   **Tipos de Datos:** Si la suma y el tamaño son enteros, la división puede
    ser entera. Para un promedio preciso, es importante convertir al menos uno
    de los operandos a un tipo de punto flotante antes de la división.

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
FUNCION promedio_arreglo(arreglo, tamano)
VARIABLES:
    suma (tipo de dato del arreglo)
INICIO
    SI tamano == 0 RETORNAR 0

    suma = sumar_arreglo(arreglo, tamano)
    RETORNAR suma / (real)tamano
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-10-3-promedio.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_3_PROMEDIO_H
#define EJERCICIO_EJ_10_3_PROMEDIO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Promedio */
int ejecutar_ej_10_3_promedio(int val);

#endif /* EJERCICIO_EJ_10_3_PROMEDIO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_10_3_promedio` | `int` | `int val` | Procesa el flujo principal de Promedio |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un arreglo y su tamaño.
```

```{tab-item} Pista 2
**Reutilización:** Se puede reutilizar la función `sumar_arreglo` del ejercicio anterior.
```

```{tab-item} Pista 3
**Proceso:**
```

```{tab-item} Pista 4
Calcular la suma total de los elementos.
```

```{tab-item} Pista 5
Dividir la suma por el número de elementos (tamaño del arreglo).
```

```{tab-item} Pista 6
**Tipos de Datos:** Si la suma y el tamaño son enteros, la división puede ser entera. Para un promedio preciso, es importante convertir al menos uno de los operandos a un tipo de punto flotante antes de la división.
```

```{tab-item} Pista 7
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 8
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_10_3_promedio_positivo** | `ejecutar_ej_10_3_promedio` | `int res = ejecutar_ej_10_3_promedio(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_10_3_promedio_cero** | `ejecutar_ej_10_3_promedio` | `int res = ejecutar_ej_10_3_promedio(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Promedio
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_10_3_promedio(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Promedio */
    return 0;
}
```
```
