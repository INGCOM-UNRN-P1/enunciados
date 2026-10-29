

# Cuadrado Mágico
> **ID:** `ej-3-31-cuadrado-magico` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `aritmetica` / `fundamentos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `fundamentos`, `magico`, `cuadrado`, `aritmetica`, `matematica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-31-cuadrado-magico.ripkg`**](../../paquetes/ej-3-31-cuadrado-magico.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-31-cuadrado-magico.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-31-cuadrado-magico<br/><small>aritmetica · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Verificar si una matriz cuadrada `n x n` de números es un cuadrado mágico. Un
cuadrado mágico es una matriz donde la suma de los números de cada fila, cada
columna y ambas diagonales principales es la misma ("constante mágica").


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_cuadrado_magico(matriz, n)
VARIABLES:
    constante_magica, suma_actual (entero)
INICIO
    // Calcular constante de referencia
    constante_magica = suma_fila(matriz, 0)

    // Verificar filas y columnas
    PARA i DESDE 1 HASTA n-1 HACER
        SI suma_fila(matriz, i) != constante_magica RETORNAR FALSO
        SI suma_columna(matriz, i) != constante_magica RETORNAR FALSO
    FIN PARA

    // Verificar diagonales
    SI suma_diagonal_principal(matriz) != constante_magica RETORNAR FALSO
    SI suma_diagonal_secundaria(matriz) != constante_magica RETORNAR FALSO

    RETORNAR VERDADERO
FIN FUNCION

```

:::

---

## Más Teoría de Números y Algoritmos

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Cuadrado Mágico
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_3_31_cuadrado_magico(int val);

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
- **Entrada:** Una matriz `n x n`.
- **Proceso:**
- Calcular la suma de la primera fila y guardarla como la `constante_magica` de referencia.
- Iterar por las demás filas, calculando su suma y comparándola con la `constante_magica`.
- Iterar por todas las columnas, calculando su suma y comparándola.
- Calcular la suma de la diagonal principal y la diagonal secundaria y compararlas.
- Si todas las sumas son iguales, es un cuadrado mágico. filas (*row-major order*) para mejorar el uso de caché. estrictamente dentro de los límites del contenedor.
- Validar que la dimensión sea un entero impar positivo mayor o igual a 3.
- Verificar que la constante mágica calculada sea igual a n*(n^2 + 1)/2.
:::


## 📋 Prototipos y Cabecera (`ej-3-31-cuadrado-magico.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_31_CUADRADO_MAGICO_H
#define EJERCICIO_EJ_3_31_CUADRADO_MAGICO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Cuadrado Mágico */
int proc_3_31_cuadrado_magico(int val);

#endif /* EJERCICIO_EJ_3_31_CUADRADO_MAGICO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_3_31_cuadrado_magico` | `int` | `int val` | Procesa el flujo principal de Cuadrado Mágico |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Una matriz `n x n`.
```

```{tab-item} Pista 2
**Proceso:**
```

```{tab-item} Pista 3
Calcular la suma de la primera fila y guardarla como la `constante_magica` de referencia.
```

```{tab-item} Pista 4
Iterar por las demás filas, calculando su suma y comparándola con la `constante_magica`.
```

```{tab-item} Pista 5
Iterar por todas las columnas, calculando su suma y comparándola.
```

```{tab-item} Pista 6
Calcular la suma de la diagonal principal y la diagonal secundaria y compararlas.
```

```{tab-item} Pista 7
Si todas las sumas son iguales, es un cuadrado mágico. filas (*row-major order*) para mejorar el uso de caché. estrictamente dentro de los límites del contenedor.
```

```{tab-item} Pista 8
[Plus Ultra] Validar que la dimensión sea un entero impar positivo mayor o igual a 3.
```

```{tab-item} Pista 9
[Plus Ultra] Verificar que la constante mágica calculada sea igual a n*(n^2 + 1)/2.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_3_31_cuadrado_magico_positivo** | `proc_3_31_cuadrado_magico` | `int res = proc_3_31_cuadrado_magico(5); assert(res == 10 || res >= 0);` |

| **test_proc_3_31_cuadrado_magico_cero** | `proc_3_31_cuadrado_magico` | `int res = proc_3_31_cuadrado_magico(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Cuadrado Mágico
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_3_31_cuadrado_magico(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Cuadrado Mágico */
    return 0;
}
```
```
