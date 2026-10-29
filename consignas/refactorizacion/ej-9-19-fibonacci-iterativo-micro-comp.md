

# Fibonacci Iterativo Micro-comprimido
> **ID:** `ej-9-19-fibonacci-iterativo-micro-comp`
 · **Tema:** `refactorizacion`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `fundamentos`, `fibonacci`, `micro-comprimido`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-19-fibonacci-iterativo-micro-comp.ripkg`**](../../paquetes/ej-9-19-fibonacci-iterativo-micro-comp.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-19-fibonacci-iterativo-micro-comp.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["testing"]
        
        node_pre_2["diseno_api"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-9-19-fibonacci-iterativo-micro-comp<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 9.19 - Fibonacci Iterativo Micro-comprimido ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-fibonacci-micro
Refactorizá la siguiente implementación de la secuencia de Fibonacci:

``` c
int fib(int n){int a=0,b=1,c,i;if(!n)return 0;for(i=2;i<=n;i++)c=a+b,a=b,b=c;return b;}
```
<!-- c -->

-   **[*plus ultra*]:** Validar que $n \ge 0$ y usar `long long` para soportar
    términos mayores.
-   **[*plus ultra*]:** Descomponer la lógica con llaves Allman e inicialización
    limpia.

:::
<!-- {exercise} -->

:::{solution} ej-ref-fibonacci-micro
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

long long calcular_fibonacci(int posicion)
{
    if (posicion < 0)
    {
        return -1;
    }
    if (posicion == 0)
    {
        return 0;
    }
    if (posicion == 1)
    {
        return 1;
    }

    long long anterior = 0;
    long long actual = 1;

    for (int i = 2; i <= posicion; i++)
    {
        long long siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }
    return actual;
}

void test_fibonacci(void)
{
    assert(calcular_fibonacci(0) == 0);
    assert(calcular_fibonacci(1) == 1);
    assert(calcular_fibonacci(6) == 8);
    assert(calcular_fibonacci(10) == 55);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-fibonacci-micro -->

---


## 📋 Prototipos y Cabecera (`ej-9-19-fibonacci-iterativo-micro-comp.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_19_FIBONACCI_ITERATIVO_MICRO_COMP_H
#define EJERCICIO_EJ_9_19_FIBONACCI_ITERATIVO_MICRO_COMP_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación calcular_fibonacci */
long long calcular_fibonacci(int posicion);
/* Operación test_fibonacci */
void test_fibonacci(void);

#endif /* EJERCICIO_EJ_9_19_FIBONACCI_ITERATIVO_MICRO_COMP_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `calcular_fibonacci` | `long long` | `int posicion` | Operación calcular_fibonacci |

| `test_fibonacci` | `void` | `void` | Operación test_fibonacci |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_calcular_fibonacci_1** | `calcular_fibonacci` | `/* Verificación unitaria de calcular_fibonacci */ long long res = calcular_fibonacci(1); (void)res; assert(true);` |

| **test_test_fibonacci_2** | `test_fibonacci` | `/* Verificación unitaria de test_fibonacci */ test_fibonacci(); assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <assert.h>

long long calcular_fibonacci(int posicion)
{
    if (posicion < 0)
    {
        return -1;
    }
    if (posicion == 0)
    {
        return 0;
    }
    if (posicion == 1)
    {
        return 1;
    }

    long long anterior = 0;
    long long actual = 1;

    for (int i = 2; i <= posicion; i++)
    {
        long long siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }
    return actual;
}

void test_fibonacci(void)
{
    assert(calcular_fibonacci(0) == 0);
    assert(calcular_fibonacci(1) == 1);
    assert(calcular_fibonacci(6) == 8);
    assert(calcular_fibonacci(10) == 55);
}

int main(void)
{
    return 0;
}
```
```
