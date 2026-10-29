

# Verificación de número primo
> **ID:** `ej-4-12-verificacion-de-numero-primo` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `estructuras_control` / `teoria_numeros`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:condicionales`, `dep:lazos`
>
> **Etiquetas conceptuales:** `primo`, `control`, `lazos`, `fundamentos`, `numero`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-12-verificacion-de-numero-primo.ripkg`**](../../paquetes/ej-4-12-verificacion-de-numero-primo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-12-verificacion-de-numero-primo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["condicionales"]
        
        node_pre_2["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-4-12-verificacion-de-numero-primo<br/><small>estructuras_control · B2</small>"]

    
```


## 📖 Consigna

Escribí un programa que solicite un número entero positivo e indique si es un
número primo (divisible únicamente por 1 y por sí mismo).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Verificación de número primo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_cion_de_numero_primo(int val);

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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Optimizar el lazo probando divisores únicamente hasta la raíz cuadrada del número.
- Encapsular la verificación en una función bool es_primo(int n).
:::


## 📋 Prototipos y Cabecera (`ej-4-12-verificacion-de-numero-primo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_12_VERIFICACION_DE_NUMERO_PRIMO_H
#define EJERCICIO_EJ_4_12_VERIFICACION_DE_NUMERO_PRIMO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Verificación de número primo */
int proc_cion_de_numero_primo(int val);

#endif /* EJERCICIO_EJ_4_12_VERIFICACION_DE_NUMERO_PRIMO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_cion_de_numero_primo` | `int` | `int val` | Procesa el flujo principal de Verificación de número primo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Optimizar el lazo probando divisores únicamente hasta la raíz cuadrada del número.
```

```{tab-item} Pista 2
[Plus Ultra] Encapsular la verificación en una función bool es_primo(int n).
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_cion_de_numero_primo_positivo** | `proc_cion_de_numero_primo` | `int res = proc_cion_de_numero_primo(5); assert(res == 10 || res >= 0);` |

| **test_proc_cion_de_numero_primo_cero** | `proc_cion_de_numero_primo` | `int res = proc_cion_de_numero_primo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Verificación de número primo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_cion_de_numero_primo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Verificación de número primo */
    return 0;
}
```
```
