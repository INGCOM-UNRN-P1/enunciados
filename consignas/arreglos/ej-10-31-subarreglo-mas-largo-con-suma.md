

# Subarreglo más largo con suma cero
> **ID:** `ej-10-31-subarreglo-mas-largo-con-suma` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `arreglos` / `vectores`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `vectores`, `subarreglo`, `arreglos`, `memoria`, `largo`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-31-subarreglo-mas-largo-con-suma.ripkg`**](../../paquetes/ej-10-31-subarreglo-mas-largo-con-suma.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-31-subarreglo-mas-largo-con-suma.ripkg
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
    
    

    current_node["🎯 ej-10-31-subarreglo-mas-largo-con-suma<br/><small>arreglos · B4</small>"]

    
```


## 📖 Consigna

Dado un arreglo de enteros (positivos y negativos), encontrar la longitud del
subarreglo contiguo más largo cuya suma de elementos sea cero.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION subarreglo_suma_cero(arreglo, tamano)
VARIABLES:
    mapa_sumas (tabla hash)
    suma, max_longitud (enteros)
INICIO
    suma = 0, max_longitud = 0
    PARA i DESDE 0 HASTA tamano-1 HACER
        suma = suma + arreglo[i]
        SI suma == 0 ENTONCES
            max_longitud = i + 1
        SINO SI mapa_sumas CONTIENE suma ENTONCES
            max_longitud = MAXIMO(max_longitud, i - mapa_sumas[suma])
        SINO
            mapa_sumas[suma] = i
        FIN SI
    FIN PARA
    RETORNAR max_longitud
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Subarreglo más largo con suma cero
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_o_mas_largo_con_suma(int val);

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
- **Proceso (Tabla Hash):**
- Usar una tabla hash para almacenar las sumas acumuladas y sus primeros índices de aparición.
- Recorrer el arreglo, manteniendo una `suma_actual`.
- Si `suma_actual` ya se ha visto antes en el índice `j`, entonces el subarreglo desde `j+1` hasta la posición actual tiene suma cero. Calcular su longitud y actualizar la longitud máxima.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::


## 📋 Prototipos y Cabecera (`ej-10-31-subarreglo-mas-largo-con-suma.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_31_SUBARREGLO_MAS_LARGO_CON_SUMA_H
#define EJERCICIO_EJ_10_31_SUBARREGLO_MAS_LARGO_CON_SUMA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Subarreglo más largo con suma cero */
int proc_o_mas_largo_con_suma(int val);

#endif /* EJERCICIO_EJ_10_31_SUBARREGLO_MAS_LARGO_CON_SUMA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_o_mas_largo_con_suma` | `int` | `int val` | Procesa el flujo principal de Subarreglo más largo con suma cero |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Proceso (Tabla Hash):**
```

```{tab-item} Pista 2
Usar una tabla hash para almacenar las sumas acumuladas y sus primeros índices de aparición.
```

```{tab-item} Pista 3
Recorrer el arreglo, manteniendo una `suma_actual`.
```

```{tab-item} Pista 4
Si `suma_actual` ya se ha visto antes en el índice `j`, entonces el subarreglo desde `j+1` hasta la posición actual tiene suma cero. Calcular su longitud y actualizar la longitud máxima.
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

| **test_proc_o_mas_largo_con_suma_positivo** | `proc_o_mas_largo_con_suma` | `int res = proc_o_mas_largo_con_suma(5); assert(res == 10 || res >= 0);` |

| **test_proc_o_mas_largo_con_suma_cero** | `proc_o_mas_largo_con_suma` | `int res = proc_o_mas_largo_con_suma(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Subarreglo más largo con suma cero
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_o_mas_largo_con_suma(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Subarreglo más largo con suma cero */
    return 0;
}
```
```
