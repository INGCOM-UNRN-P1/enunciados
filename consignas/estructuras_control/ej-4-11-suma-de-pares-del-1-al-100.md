

# Suma de pares del 1 al 100
> **ID:** `ej-4-11-suma-de-pares-del-1-al-100` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `estructuras_control` / `control`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:condicionales`, `dep:lazos`
>
> **Etiquetas conceptuales:** `control`, `lazos`, `pares`, `fundamentos`, `condicionales`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-11-suma-de-pares-del-1-al-100.ripkg`**](../../paquetes/ej-4-11-suma-de-pares-del-1-al-100.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-11-suma-de-pares-del-1-al-100.ripkg
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
    
    

    current_node["🎯 ej-4-11-suma-de-pares-del-1-al-100<br/><small>estructuras_control · B2</small>"]

    
```


## 📖 Consigna

Desarrollá un algoritmo que sume los números pares comprendidos en el rango del
1 al 100 inclusive.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Suma de pares del 1 al 100
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_pares_del_1_al_100(int val);

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
- Comparar la suma obtenida con la fórmula matemática de la progresión aritmética.
- Permitir elegir si sumar pares o impares.
:::


## 📋 Prototipos y Cabecera (`ej-4-11-suma-de-pares-del-1-al-100.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_11_SUMA_DE_PARES_DEL_1_AL_100_H
#define EJERCICIO_EJ_4_11_SUMA_DE_PARES_DEL_1_AL_100_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Suma de pares del 1 al 100 */
int proc_e_pares_del_1_al_100(int val);

#endif /* EJERCICIO_EJ_4_11_SUMA_DE_PARES_DEL_1_AL_100_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_pares_del_1_al_100` | `int` | `int val` | Procesa el flujo principal de Suma de pares del 1 al 100 |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Comparar la suma obtenida con la fórmula matemática de la progresión aritmética.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir elegir si sumar pares o impares.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_pares_del_1_al_100_positivo** | `proc_e_pares_del_1_al_100` | `int res = proc_e_pares_del_1_al_100(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_pares_del_1_al_100_cero** | `proc_e_pares_del_1_al_100` | `int res = proc_e_pares_del_1_al_100(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Suma de pares del 1 al 100
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_pares_del_1_al_100(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Suma de pares del 1 al 100 */
    return 0;
}
```
```
