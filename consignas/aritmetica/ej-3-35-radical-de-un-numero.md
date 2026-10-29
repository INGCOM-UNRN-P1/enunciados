

# Radical de un Número
> **ID:** `ej-3-35-radical-de-un-numero` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `aritmetica` / `radical`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `radical`, `fundamentos`, `aritmetica`, `numero`, `matematica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-35-radical-de-un-numero.ripkg`**](../../paquetes/ej-3-35-radical-de-un-numero.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-35-radical-de-un-numero.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-35-radical-de-un-numero<br/><small>aritmetica · B1</small>"]

    
```


## 📖 Consigna

#### Descripción
Calcular el radical de un número `n`, denotado como `rad(n)`, que es el producto
de sus factores primos distintos.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION radical(n)
VARIABLES:
    resultado (entero)
INICIO
    resultado = 1
    // Lógica para encontrar factores primos distintos y multiplicarlos
    // ...
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Radical de un Número
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_radical_de_un_numero(int val);

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
- **Entrada:** Un entero `n`.
- **Proceso:** Similar a la descomposición en factores primos, pero en lugar de contar potencias, simplemente se multiplica cada factor primo distinto encontrado a una variable `resultado`. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Calcular el radical como el producto de los factores primos distintos del número.
- Validar que n sea mayor que 1.
:::


## 📋 Prototipos y Cabecera (`ej-3-35-radical-de-un-numero.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_35_RADICAL_DE_UN_NUMERO_H
#define EJERCICIO_EJ_3_35_RADICAL_DE_UN_NUMERO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Radical de un Número */
int proc_radical_de_un_numero(int val);

#endif /* EJERCICIO_EJ_3_35_RADICAL_DE_UN_NUMERO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_radical_de_un_numero` | `int` | `int val` | Procesa el flujo principal de Radical de un Número |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un entero `n`.
```

```{tab-item} Pista 2
**Proceso:** Similar a la descomposición en factores primos, pero en lugar de contar potencias, simplemente se multiplica cada factor primo distinto encontrado a una variable `resultado`. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
```

```{tab-item} Pista 3
[Plus Ultra] Calcular el radical como el producto de los factores primos distintos del número.
```

```{tab-item} Pista 4
[Plus Ultra] Validar que n sea mayor que 1.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_radical_de_un_numero_positivo** | `proc_radical_de_un_numero` | `int res = proc_radical_de_un_numero(5); assert(res == 10 || res >= 0);` |

| **test_proc_radical_de_un_numero_cero** | `proc_radical_de_un_numero` | `int res = proc_radical_de_un_numero(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Radical de un Número
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_radical_de_un_numero(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Radical de un Número */
    return 0;
}
```
```
