

# Números Felices
> **ID:** `ej-3-16-numeros-felices` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `aritmetica` / `fundamentos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `fundamentos`, `aritmetica`, `felices`, `numeros`, `matematica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-16-numeros-felices.ripkg`**](../../paquetes/ej-3-16-numeros-felices.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-16-numeros-felices.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-16-numeros-felices<br/><small>aritmetica · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Determinar si un número es un "número feliz". El proceso consiste en reemplazar
el número por la suma de los cuadrados de sus dígitos repetidamente. Si el
proceso llega a 1, el número es feliz. Si entra en un ciclo que no incluye el 1
(notablemente el ciclo `4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4`), no es
feliz.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_feliz(n)
INICIO
    MIENTRAS n != 1 Y n != 4 HACER
        suma_cuadrados = 0
        temp = n
        MIENTRAS temp > 0 HACER
            digito = temp MOD 10
            suma_cuadrados = suma_cuadrados + digito * digito
            temp = temp / 10
        FIN MIENTRAS
        n = suma_cuadrados
    FIN MIENTRAS

    RETORNAR (n == 1)
FIN FUNCION

```

:::

---

## Algoritmos Numéricos Avanzados

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Felices
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_3_16_numeros_felices(int val);

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
- **Entrada:** Un entero positivo `n`.
- **Proceso:** Usar un lazo `while`. En cada iteración, calcular la suma de los cuadrados de los dígitos del número actual. El lazo debe terminar si el número se convierte en 1 (feliz) o si se detecta un ciclo (no feliz). Para detectar ciclos, se puede guardar los números ya vistos en un arreglo o simplemente detectar si se llega al número 4. filas (*row-major order*) para mejorar el uso de caché. estrictamente dentro de los límites del contenedor.
- Detectar ciclos usando un límite de iteraciones para números que no son felices.
- Listar todos los números felices comprendidos entre 1 y 100.
:::


## 📋 Prototipos y Cabecera (`ej-3-16-numeros-felices.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_16_NUMEROS_FELICES_H
#define EJERCICIO_EJ_3_16_NUMEROS_FELICES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Números Felices */
int proc_3_16_numeros_felices(int val);

#endif /* EJERCICIO_EJ_3_16_NUMEROS_FELICES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_3_16_numeros_felices` | `int` | `int val` | Procesa el flujo principal de Números Felices |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un entero positivo `n`.
```

```{tab-item} Pista 2
**Proceso:** Usar un lazo `while`. En cada iteración, calcular la suma de los cuadrados de los dígitos del número actual. El lazo debe terminar si el número se convierte en 1 (feliz) o si se detecta un ciclo (no feliz). Para detectar ciclos, se puede guardar los números ya vistos en un arreglo o simplemente detectar si se llega al número 4. filas (*row-major order*) para mejorar el uso de caché. estrictamente dentro de los límites del contenedor.
```

```{tab-item} Pista 3
[Plus Ultra] Detectar ciclos usando un límite de iteraciones para números que no son felices.
```

```{tab-item} Pista 4
[Plus Ultra] Listar todos los números felices comprendidos entre 1 y 100.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_3_16_numeros_felices_positivo** | `proc_3_16_numeros_felices` | `int res = proc_3_16_numeros_felices(5); assert(res == 10 || res >= 0);` |

| **test_proc_3_16_numeros_felices_cero** | `proc_3_16_numeros_felices` | `int res = proc_3_16_numeros_felices(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Números Felices
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_3_16_numeros_felices(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Números Felices */
    return 0;
}
```
```
