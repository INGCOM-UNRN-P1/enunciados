

# Números del 1 al 100
> **ID:** `ej-4-10-numeros-del-1-al-100` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `estructuras_control` / `control`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:condicionales`, `dep:lazos`
>
> **Etiquetas conceptuales:** `control`, `lazos`, `fundamentos`, `numeros`, `condicionales`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-10-numeros-del-1-al-100.ripkg`**](../../paquetes/ej-4-10-numeros-del-1-al-100.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-10-numeros-del-1-al-100.ripkg
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
    
    

    current_node["🎯 ej-4-10-numeros-del-1-al-100<br/><small>estructuras_control · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 4.10 - Números del 1 al 100 ⭐⭐☆☆☆

Diseñá un programa que imprima en pantalla los números enteros del 1 al 100
utilizando un lazo `for`.
:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Mostrar los números en una cuadrícula alineada de 10x10.
-   **[*plus ultra*]:** Permitir al usuario elegir el número final del conteo.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-4-10-numeros-del-1-al-100.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_10_NUMEROS_DEL_1_AL_100_H
#define EJERCICIO_EJ_4_10_NUMEROS_DEL_1_AL_100_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Números del 1 al 100 */
int proc_numeros_del_1_al_100(int val);

#endif /* EJERCICIO_EJ_4_10_NUMEROS_DEL_1_AL_100_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_numeros_del_1_al_100` | `int` | `int val` | Procesa el flujo principal de Números del 1 al 100 |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Mostrar los números en una cuadrícula alineada de 10x10.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir al usuario elegir el número final del conteo.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_numeros_del_1_al_100_positivo** | `proc_numeros_del_1_al_100` | `int res = proc_numeros_del_1_al_100(5); assert(res == 10 || res >= 0);` |

| **test_proc_numeros_del_1_al_100_cero** | `proc_numeros_del_1_al_100` | `int res = proc_numeros_del_1_al_100(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Números del 1 al 100
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_numeros_del_1_al_100(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Números del 1 al 100 */
    return 0;
}
```
```
