

# Suma lenta
> **ID:** `ej-3-1-suma-lenta` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `aritmetica` / `lenta`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `aritmetica`, `lenta`, `matematica`, `fundamentos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-1-suma-lenta.ripkg`**](../../paquetes/ej-3-1-suma-lenta.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-1-suma-lenta.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-1-suma-lenta<br/><small>aritmetica · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 3.1 - Suma lenta ⭐⭐☆☆☆

#### Descripción
Implementar la función `int suma_lenta(int a, int b);` que simule la adición de dos números enteros, `a` y `b`, utilizando únicamente las operaciones más básicas de la unidad aritmético-lógica: sumar o restar 1. Este ejercicio ayuda a comprender la suma como una serie de incrementos o decrementos sucesivos.

:::{hint} Lógica y Consideraciones
-   **Firma requerida:** `int suma_lenta(int a, int b);`
-   **Entrada:** Dos números enteros, `a` y `b`.
-   **Proceso:** El objetivo es llegar desde `a` al resultado `a+b` aplicando la
    operación de incremento `b` veces (si `b` es positivo) o la operación de
    decremento `|b|` veces (si `b` es negativo).
-   Se puede usar un lazo que se repita `abs(b)` veces (el valor absoluto de `b`).
-   Dentro del lazo, se verifica el signo de `b`. Si `b > 0`, se incrementa el
    resultado. Si `b < 0`, se decrementa.

-   **[*plus ultra*]:** Validar que los operandos sean enteros no negativos antes de iniciar las sumas sucesivas.
-   **[*plus ultra*]:** Contar la cantidad total de incrementos realizados para verificar el costo de la operación.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION suma_lenta(a, b)
VARIABLES:
    resultado (entero)
INICIO
    resultado = a
    SI b > 0 ENTONCES
        PARA i DESDE 1 HASTA b HACER
            resultado = resultado + 1
        FIN PARA
    SINO
        PARA i DESDE 1 HASTA VALOR_ABSOLUTO(b) HACER
            resultado = resultado - 1
        FIN PARA
    FIN SI
    RETORNAR resultado
FIN FUNCION
```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-3-1-suma-lenta.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_1_SUMA_LENTA_H
#define EJERCICIO_EJ_3_1_SUMA_LENTA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Suma lenta */
int ejecutar_ej_3_1_suma_lenta(int val);

#endif /* EJERCICIO_EJ_3_1_SUMA_LENTA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `suma_lenta` | `int` | `int a, int b` | Suma a y b mediante incrementos o decrementos unitarios |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Dos números enteros, `n` y `m`.
```

```{tab-item} Pista 2
**Proceso:** El objetivo es llegar desde `n` al resultado `n+m` aplicando la operación de incremento `m` veces (si `m` es positivo) o la operación de decremento `|m|` veces (si `m` es negativo).
```

```{tab-item} Pista 3
Se puede usar un lazo que se repita `abs(m)` veces (el valor absoluto de `m`).
```

```{tab-item} Pista 4
Dentro del lazo, se verifica el signo de `m`. Si `m > 0`, se incrementa el resultado. Si `m < 0`, se decrementa. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
```

```{tab-item} Pista 5
[Plus Ultra] Validar que los operandos sean enteros no negativos antes de iniciar las sumas sucesivas.
```

```{tab-item} Pista 6
[Plus Ultra] Contar la cantidad total de incrementos realizados para verificar el costo de la operación.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_suma_positivos** | `suma_lenta` | `assert(suma_lenta(3, 4) == 7);` |

| **test_suma_negativo** | `suma_lenta` | `assert(suma_lenta(5, -2) == 3);` |

| **test_suma_cero** | `suma_lenta` | `assert(suma_lenta(0, 0) == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int suma_lenta(int a, int b) {
    int res = a;
    if (b >= 0) {
        for (int i = 0; i < b; i++) res++;
    } else {
        for (int i = 0; i < -b; i++) res--;
    }
    return res;
}

int main(void) {
    printf("3 + 4 = %d\n", suma_lenta(3, 4));
    return 0;
}
```
```
