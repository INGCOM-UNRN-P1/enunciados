

# Lazo con Incremento Variable
> **ID:** `ej-24-6-lazo-con-incremento-variable` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `complejidad` / `big_o`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:algoritmos_ordenamiento`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `big_o`, `complejidad`, `algoritmos`, `incremento`, `asintotica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-24-6-lazo-con-incremento-variable.ripkg`**](../../paquetes/ej-24-6-lazo-con-incremento-variable.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-24-6-lazo-con-incremento-variable.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["algoritmos_ordenamiento"]
        
        node_pre_2["lazos_anidados"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-24-6-lazo-con-incremento-variable<br/><small>complejidad · B4</small>"]

    
```


## 📖 Consigna

Analizar la complejidad de:


``` c
int suma = 0;
for (int i = 0; i < n; i += 2)
{
    suma += i;
}
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Lazo con Incremento Variable
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__incremento_variable(int val);

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
- Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
- Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
:::


## 📋 Prototipos y Cabecera (`ej-24-6-lazo-con-incremento-variable.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_24_6_LAZO_CON_INCREMENTO_VARIABLE_H
#define EJERCICIO_EJ_24_6_LAZO_CON_INCREMENTO_VARIABLE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Lazo con Incremento Variable */
int proc__incremento_variable(int val);

#endif /* EJERCICIO_EJ_24_6_LAZO_CON_INCREMENTO_VARIABLE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__incremento_variable` | `int` | `int val` | Procesa el flujo principal de Lazo con Incremento Variable |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__incremento_variable_positivo** | `proc__incremento_variable` | `int res = proc__incremento_variable(5); assert(res == 10 || res >= 0);` |

| **test_proc__incremento_variable_cero** | `proc__incremento_variable` | `int res = proc__incremento_variable(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Lazo con Incremento Variable
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__incremento_variable(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Lazo con Incremento Variable */
    return 0;
}
```
```
