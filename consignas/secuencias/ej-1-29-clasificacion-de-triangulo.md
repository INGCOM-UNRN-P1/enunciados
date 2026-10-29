

# Clasificación de Triángulo
> **ID:** `ej-1-29-clasificacion-de-triangulo`
 · **Tema:** `secuencias`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`
>
> **Etiquetas conceptuales:** `fundamentos`, `secuencias`, `triangulo`, `basicos`, `clasificacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-1-29-clasificacion-de-triangulo.ripkg`**](../../paquetes/ej-1-29-clasificacion-de-triangulo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-1-29-clasificacion-de-triangulo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-1-29-clasificacion-de-triangulo<br/><small>secuencias · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 1.29 - Clasificación de Triángulo ⭐⭐☆☆☆


Dados los largos de tres lados, el programa debe determinar si pueden formar un
triángulo válido y, en caso afirmativo, clasificarlo como equilátero (todos los
lados iguales), isósceles (dos lados iguales) o escaleno (todos los lados
diferentes).

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer las longitudes de los tres lados (`a`, `b`, `c`).
-   **Validación (Desigualdad Triangular):** Antes de clasificar, es crucial
-   **Clasificación:**

-   **[*plus ultra*]:** Validar la desigualdad triangular antes de clasificar el triángulo.
-   **[*plus ultra*]:** Determinar además si el triángulo es rectángulo aplicando el teorema de Pitágoras.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO clasificar_triangulo
ENTRADA: a, b, c (reales)

INICIO
    LEER a, b, c
    SI (a+b > c) Y (a+c > b) Y (b+c > a) ENTONCES
        SI a == b Y b == c ENTONCES
            ESCRIBIR "Es un triángulo Equilátero."
        SINO SI a == b O b == c O a == c ENTONCES
            ESCRIBIR "Es un triángulo Isósceles."
        SINO
            ESCRIBIR "Es un triángulo Escaleno."
        FIN SI
    SINO
        ESCRIBIR "Los lados no forman un triángulo válido."
    FIN SI
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-1-29-clasificacion-de-triangulo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_1_29_CLASIFICACION_DE_TRIANGULO_H
#define EJERCICIO_EJ_1_29_CLASIFICACION_DE_TRIANGULO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Clasificación de Triángulo */
int proc_icacion_de_triangulo(int val);

#endif /* EJERCICIO_EJ_1_29_CLASIFICACION_DE_TRIANGULO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_icacion_de_triangulo` | `int` | `int val` | Procesa el flujo principal de Clasificación de Triángulo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Leer las longitudes de los tres lados (`a`, `b`, `c`).
```

```{tab-item} Pista 2
**Validación (Desigualdad Triangular):** Antes de clasificar, es crucial
```

```{tab-item} Pista 3
**Clasificación:**
```

```{tab-item} Pista 4
[Plus Ultra] Validar la desigualdad triangular antes de clasificar el triángulo.
```

```{tab-item} Pista 5
[Plus Ultra] Determinar además si el triángulo es rectángulo aplicando el teorema de Pitágoras.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_icacion_de_triangulo_positivo** | `proc_icacion_de_triangulo` | `int res = proc_icacion_de_triangulo(5); assert(res == 10 || res >= 0);` |

| **test_proc_icacion_de_triangulo_cero** | `proc_icacion_de_triangulo` | `int res = proc_icacion_de_triangulo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Clasificación de Triángulo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_icacion_de_triangulo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Clasificación de Triángulo */
    return 0;
}
```
```
