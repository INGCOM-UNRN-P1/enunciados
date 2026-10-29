

# Extraer subcadena
> **ID:** `ej-11-29-b29-extraer-subcadena` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `cadenas` / `procesamiento_texto`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:caracteres`
>
> **Etiquetas conceptuales:** `cadenas`, `strings`, `extraer`, `memoria`, `subcadena`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-11-29-b29-extraer-subcadena.ripkg`**](../../paquetes/ej-11-29-b29-extraer-subcadena.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-11-29-b29-extraer-subcadena.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["caracteres"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-11-29-b29-extraer-subcadena<br/><small>cadenas · B5</small>"]

    
```


## 📖 Consigna

#### Descripción
Crear una función que extraiga una porción de una cadena. La función debe
recibir la cadena original, una posición de inicio y una longitud, y devolver
una nueva cadena con la subcadena extraída.



:::{tip} Lógica y Consideraciones

-   **Memoria:** La función debe reservar memoria para la nueva cadena.
-   **Proceso:**
    1.  Calcular la longitud de la subcadena y reservar memoria (longitud + 1
        para el `\0`).
    2.  Copiar los caracteres desde la posición de inicio de la cadena original
        a la nueva cadena.
    3.  Añadir el terminador nulo `\0` al final de la nueva cadena.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION extraer_subcadena(cadena, inicio, longitud)
VARIABLES:
    subcadena (cadena)
INICIO
    // ... reservar memoria para subcadena ...
    COPIAR_MEMORIA(subcadena, cadena + inicio, longitud)
    subcadena[longitud] = FIN_DE_CADENA
    RETORNAR subcadena
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Extraer subcadena
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_29_extraer_subcadena(int val);

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
4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
- **Memoria:** La función debe reservar memoria para la nueva cadena.
- **Proceso:**
- Calcular la longitud de la subcadena y reservar memoria (longitud + 1 para el `\0`).
- Copiar los caracteres desde la posición de inicio de la cadena original a la nueva cadena.
- Añadir el terminador nulo `\0` al final de la nueva cadena.
:::


## 📋 Prototipos y Cabecera (`ej-11-29-b29-extraer-subcadena.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_11_29_B29_EXTRAER_SUBCADENA_H
#define EJERCICIO_EJ_11_29_B29_EXTRAER_SUBCADENA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Extraer subcadena */
int proc_29_extraer_subcadena(int val);

#endif /* EJERCICIO_EJ_11_29_B29_EXTRAER_SUBCADENA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_29_extraer_subcadena` | `int` | `int val` | Procesa el flujo principal de Extraer subcadena |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

```{tab-item} Pista 3
**Memoria:** La función debe reservar memoria para la nueva cadena.
```

```{tab-item} Pista 4
**Proceso:**
```

```{tab-item} Pista 5
Calcular la longitud de la subcadena y reservar memoria (longitud + 1 para el `\0`).
```

```{tab-item} Pista 6
Copiar los caracteres desde la posición de inicio de la cadena original a la nueva cadena.
```

```{tab-item} Pista 7
Añadir el terminador nulo `\0` al final de la nueva cadena.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_29_extraer_subcadena_positivo** | `proc_29_extraer_subcadena` | `int res = proc_29_extraer_subcadena(5); assert(res == 10 || res >= 0);` |

| **test_proc_29_extraer_subcadena_cero** | `proc_29_extraer_subcadena` | `int res = proc_29_extraer_subcadena(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.29 - Extraer subcadena
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_29_extraer_subcadena(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.29 - Extraer subcadena */
    return 0;
}
```
```
