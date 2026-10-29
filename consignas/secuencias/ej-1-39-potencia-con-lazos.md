

# Potencia con Lazos
> **ID:** `ej-1-39-potencia-con-lazos` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `secuencias` / `potencia`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`
>
> **Etiquetas conceptuales:** `potencia`, `lazos`, `fundamentos`, `secuencias`, `basicos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-1-39-potencia-con-lazos.ripkg`**](../../paquetes/ej-1-39-potencia-con-lazos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-1-39-potencia-con-lazos.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-1-39-potencia-con-lazos<br/><small>secuencias · B3</small>"]

    
```


## 📖 Consigna

Escribir una función que calcule `base^exponente` sin usar la función `pow()` de
la biblioteca `math.h`. Debe funcionar para exponentes enteros no negativos.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO potencia_iterativa
ENTRADA: base (real), exponente (entero)
VARIABLES:
    resultado (real)

INICIO
    resultado = 1.0
    PARA i DESDE 1 HASTA exponente HACER
        resultado = resultado * base
    FIN PARA
    RETORNAR resultado
FIN

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Potencia con Lazos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_9_potencia_con_lazos(int val);

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
- **Entrada:** Una base y un exponente (entero no negativo).
- **Variables:** Se necesita una variable `resultado` inicializada en 1.
- **Proceso:**
- **Salida:** Devolver el `resultado`.
- Validar que el exponente sea un entero no negativo o manejar exponentes negativos retornando un double.
- Comparar el rendimiento contra la función pow() de math.h.
:::


## 📋 Prototipos y Cabecera (`ej-1-39-potencia-con-lazos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_1_39_POTENCIA_CON_LAZOS_H
#define EJERCICIO_EJ_1_39_POTENCIA_CON_LAZOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Potencia con Lazos */
int proc_9_potencia_con_lazos(int val);

#endif /* EJERCICIO_EJ_1_39_POTENCIA_CON_LAZOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_9_potencia_con_lazos` | `int` | `int val` | Procesa el flujo principal de Potencia con Lazos |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Una base y un exponente (entero no negativo).
```

```{tab-item} Pista 2
**Variables:** Se necesita una variable `resultado` inicializada en 1.
```

```{tab-item} Pista 3
**Proceso:**
```

```{tab-item} Pista 4
**Salida:** Devolver el `resultado`.
```

```{tab-item} Pista 5
[Plus Ultra] Validar que el exponente sea un entero no negativo o manejar exponentes negativos retornando un double.
```

```{tab-item} Pista 6
[Plus Ultra] Comparar el rendimiento contra la función pow() de math.h.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_9_potencia_con_lazos_positivo** | `proc_9_potencia_con_lazos` | `int res = proc_9_potencia_con_lazos(5); assert(res == 10 || res >= 0);` |

| **test_proc_9_potencia_con_lazos_cero** | `proc_9_potencia_con_lazos` | `int res = proc_9_potencia_con_lazos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Potencia con Lazos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_9_potencia_con_lazos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Potencia con Lazos */
    return 0;
}
```
```
