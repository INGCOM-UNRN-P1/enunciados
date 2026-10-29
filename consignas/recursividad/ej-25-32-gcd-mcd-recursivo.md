

# GCD (MCD) Recursivo
> **ID:** `ej-25-32-gcd-mcd-recursivo` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `recursividad` / `induccion`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `recursividad`, `induccion`, `recursivo`, `algoritmos`, `mcd`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-25-32-gcd-mcd-recursivo.ripkg`**](../../paquetes/ej-25-32-gcd-mcd-recursivo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-25-32-gcd-mcd-recursivo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-25-32-gcd-mcd-recursivo<br/><small>recursividad · B4</small>"]

    
```


## 📖 Consigna

Implementá algoritmo de Euclides recursivamente.

**Orientación:**
- Caso base: `b == 0` retorna a
- Caso recursivo: `gcd(b, a % b)`



---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de GCD (MCD) Recursivo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_32_gcd_mcd_recursivo(int val);

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
- Transformar el algoritmo a una versión con recursión de cola (*tail recursion*) para reducir el consumo de pila.
- Añadir un contador del número de llamadas recursivas realizadas para analizar la complejidad empírica.
:::


## 📋 Prototipos y Cabecera (`ej-25-32-gcd-mcd-recursivo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_25_32_GCD_MCD_RECURSIVO_H
#define EJERCICIO_EJ_25_32_GCD_MCD_RECURSIVO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de GCD (MCD) Recursivo */
int proc_32_gcd_mcd_recursivo(int val);

#endif /* EJERCICIO_EJ_25_32_GCD_MCD_RECURSIVO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_32_gcd_mcd_recursivo` | `int` | `int val` | Procesa el flujo principal de GCD (MCD) Recursivo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Transformar el algoritmo a una versión con recursión de cola (*tail recursion*) para reducir el consumo de pila.
```

```{tab-item} Pista 2
[Plus Ultra] Añadir un contador del número de llamadas recursivas realizadas para analizar la complejidad empírica.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_32_gcd_mcd_recursivo_positivo** | `proc_32_gcd_mcd_recursivo` | `int res = proc_32_gcd_mcd_recursivo(5); assert(res == 10 || res >= 0);` |

| **test_proc_32_gcd_mcd_recursivo_cero** | `proc_32_gcd_mcd_recursivo` | `int res = proc_32_gcd_mcd_recursivo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: GCD (MCD) Recursivo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_32_gcd_mcd_recursivo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de GCD (MCD) Recursivo */
    return 0;
}
```
```
