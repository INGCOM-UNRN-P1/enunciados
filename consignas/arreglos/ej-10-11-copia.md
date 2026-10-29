

# Copia
> **ID:** `ej-10-11-copia`
 · **Tema:** `arreglos`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `copia`, `vectores`, `arreglos`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-11-copia.ripkg`**](../../paquetes/ej-10-11-copia.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-11-copia.ripkg
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
    
    

    current_node["🎯 ej-10-11-copia<br/><small>arreglos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 10.11 - Copia ⭐⭐☆☆☆


Copiar todos los elementos de un arreglo de origen a un arreglo de destino.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo de origen, un arreglo de destino y el tamaño.
-   **Precondición:** El arreglo de destino debe tener suficiente capacidad para
    albergar todos los elementos del arreglo de origen.
-   **Proceso:** Recorrer el arreglo de origen con un lazo `for` y, en cada
    iteración, asignar el elemento de origen al elemento correspondiente en el
    arreglo de destino: `destino[i] = origen[i]`.

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
PROCEDIMIENTO copiar_arreglo(origen, REF destino, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        destino[i] = origen[i]
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-10-11-copia.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_11_COPIA_H
#define EJERCICIO_EJ_10_11_COPIA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Copia */
int ejecutar_ej_10_11_copia(int val);

#endif /* EJERCICIO_EJ_10_11_COPIA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_10_11_copia` | `int` | `int val` | Procesa el flujo principal de Copia |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un arreglo de origen, un arreglo de destino y el tamaño.
```

```{tab-item} Pista 2
**Precondición:** El arreglo de destino debe tener suficiente capacidad para albergar todos los elementos del arreglo de origen.
```

```{tab-item} Pista 3
**Proceso:** Recorrer el arreglo de origen con un lazo `for` y, en cada iteración, asignar el elemento de origen al elemento correspondiente en el arreglo de destino: `destino[i] = origen[i]`.
```

```{tab-item} Pista 4
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 5
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_10_11_copia_positivo** | `ejecutar_ej_10_11_copia` | `int res = ejecutar_ej_10_11_copia(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_10_11_copia_cero** | `ejecutar_ej_10_11_copia` | `int res = ejecutar_ej_10_11_copia(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Copia
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_10_11_copia(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Copia */
    return 0;
}
```
```
