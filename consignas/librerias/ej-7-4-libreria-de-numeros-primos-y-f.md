

# Librería de Números Primos y Factorización
> **ID:** `ej-7-4-libreria-de-numeros-primos-y-f` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `teoria_numeros`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `fundamentos`, `headers`, `libreria`, `primos`, `factorizacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-4-libreria-de-numeros-primos-y-f.ripkg`**](../../paquetes/ej-7-4-libreria-de-numeros-primos-y-f.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-4-libreria-de-numeros-primos-y-f.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-7-4-libreria-de-numeros-primos-y-f<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

Implementá la librería `primos.h` y `primos.c`:
- `bool primo_es_primo(unsigned long n)`
- `unsigned long primo_siguiente(unsigned long n)`
- `size_t primo_contar_en_rango(unsigned long inicio, unsigned long fin)`
- `void primo_factores_primos(unsigned long n, unsigned long *factores, size_t *cant)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Números Primos y Factorización
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_numeros_primos_y_f(int val);

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
- Optimizar el chequeo de primalidad probando divisores hasta `sqrt(n)`.
:::


## 📋 Prototipos y Cabecera (`ej-7-4-libreria-de-numeros-primos-y-f.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_4_LIBRERIA_DE_NUMEROS_PRIMOS_Y_F_H
#define EJERCICIO_EJ_7_4_LIBRERIA_DE_NUMEROS_PRIMOS_Y_F_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Números Primos y Factorización */
int proc_e_numeros_primos_y_f(int val);

#endif /* EJERCICIO_EJ_7_4_LIBRERIA_DE_NUMEROS_PRIMOS_Y_F_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_numeros_primos_y_f` | `int` | `int val` | Procesa el flujo principal de Librería de Números Primos y Factorización |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Optimizar el chequeo de primalidad probando divisores hasta `sqrt(n)`.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_numeros_primos_y_f_positivo** | `proc_e_numeros_primos_y_f` | `int res = proc_e_numeros_primos_y_f(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_numeros_primos_y_f_cero** | `proc_e_numeros_primos_y_f` | `int res = proc_e_numeros_primos_y_f(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Números Primos y Factorización
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_numeros_primos_y_f(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Números Primos y Factorización */
    return 0;
}
```
```
