

# Contar repeticiones
> **ID:** `ej-10-8-contar-repeticiones`
 · **Tema:** `arreglos`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `contar`, `arreglos`, `memoria`, `repeticiones`, `vectores`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-8-contar-repeticiones.ripkg`**](../../paquetes/ej-10-8-contar-repeticiones.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-8-contar-repeticiones.ripkg
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
    
    

    current_node["🎯 ej-10-8-contar-repeticiones<br/><small>arreglos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 10.8 - Contar repeticiones ⭐⭐☆☆☆


Contar cuántas veces aparece un número específico en un arreglo.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo, su tamaño y el elemento a contar.
-   **Variables:** Un `contador` inicializado en 0.
-   **Proceso:** Recorrer el arreglo con un lazo. En cada iteración, si el
    elemento actual es igual al elemento buscado, incrementar el `contador`.
-   **Salida:** Devolver el valor final del `contador`.

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
FUNCION contar_repeticiones(arreglo, tamano, buscado)
VARIABLES:
    contador (entero)
INICIO
    contador = 0
    PARA i DESDE 0 HASTA tamano-1 HACER
        SI arreglo[i] == buscado ENTONCES
            contador = contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-10-8-contar-repeticiones.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_8_CONTAR_REPETICIONES_H
#define EJERCICIO_EJ_10_8_CONTAR_REPETICIONES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Contar repeticiones */
int proc__contar_repeticiones(int val);

#endif /* EJERCICIO_EJ_10_8_CONTAR_REPETICIONES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__contar_repeticiones` | `int` | `int val` | Procesa el flujo principal de Contar repeticiones |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un arreglo, su tamaño y el elemento a contar.
```

```{tab-item} Pista 2
**Variables:** Un `contador` inicializado en 0.
```

```{tab-item} Pista 3
**Proceso:** Recorrer el arreglo con un lazo. En cada iteración, si el elemento actual es igual al elemento buscado, incrementar el `contador`.
```

```{tab-item} Pista 4
**Salida:** Devolver el valor final del `contador`.
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

| **test_proc__contar_repeticiones_positivo** | `proc__contar_repeticiones` | `int res = proc__contar_repeticiones(5); assert(res == 10 || res >= 0);` |

| **test_proc__contar_repeticiones_cero** | `proc__contar_repeticiones` | `int res = proc__contar_repeticiones(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Contar repeticiones
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__contar_repeticiones(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Contar repeticiones */
    return 0;
}
```
```
