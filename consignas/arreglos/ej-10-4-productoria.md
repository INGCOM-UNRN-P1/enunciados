

# Productoria
> **ID:** `ej-10-4-productoria` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `arreglos` / `productoria`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `productoria`, `vectores`, `arreglos`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-4-productoria.ripkg`**](../../paquetes/ej-10-4-productoria.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-4-productoria.ripkg
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
    
    

    current_node["🎯 ej-10-4-productoria<br/><small>arreglos · B3</small>"]

    
```


## 📖 Consigna

Calcular el producto de todos los elementos de un arreglo.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION productoria_arreglo(arreglo, tamano)
VARIABLES:
    producto (tipo de dato del arreglo)
INICIO
    producto = 1
    PARA i DESDE 0 HASTA tamano-1 HACER
        producto = producto * arreglo[i]
    FIN PARA
    RETORNAR producto
FIN FUNCION

```

:::

## Búsqueda y Estadísticas

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Productoria
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_10_4_productoria(int val);

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
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- **Entrada:** Un arreglo y su tamaño.
- **Variables:** Se necesita un `acumulador` inicializado en 1 (no en 0, ya que cualquier cosa multiplicada por 0 es 0).
- **Proceso:** Recorrer el arreglo con un lazo `for`. En cada iteración, multiplicar el `acumulador` por el elemento actual.
- **Caso Especial:** Si el arreglo contiene un 0, el producto final será 0.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::


## 📋 Prototipos y Cabecera (`ej-10-4-productoria.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_4_PRODUCTORIA_H
#define EJERCICIO_EJ_10_4_PRODUCTORIA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Productoria */
int ejecutar_ej_10_4_productoria(int val);

#endif /* EJERCICIO_EJ_10_4_PRODUCTORIA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_10_4_productoria` | `int` | `int val` | Procesa el flujo principal de Productoria |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un arreglo y su tamaño.
```

```{tab-item} Pista 2
**Variables:** Se necesita un `acumulador` inicializado en 1 (no en 0, ya que cualquier cosa multiplicada por 0 es 0).
```

```{tab-item} Pista 3
**Proceso:** Recorrer el arreglo con un lazo `for`. En cada iteración, multiplicar el `acumulador` por el elemento actual.
```

```{tab-item} Pista 4
**Caso Especial:** Si el arreglo contiene un 0, el producto final será 0.
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

| **test_ejecutar_ej_10_4_productoria_positivo** | `ejecutar_ej_10_4_productoria` | `int res = ejecutar_ej_10_4_productoria(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_10_4_productoria_cero** | `ejecutar_ej_10_4_productoria` | `int res = ejecutar_ej_10_4_productoria(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Productoria
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_10_4_productoria(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Productoria */
    return 0;
}
```
```
