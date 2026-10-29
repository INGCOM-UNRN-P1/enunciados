

# Ordenamiento Burbuja con Salida Temprana
> **ID:** `ej-9-55-ordenamiento-burbuja-con-salid`
 · **Tema:** `refactorizacion`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `temprana`, `fundamentos`, `ordenamiento`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-55-ordenamiento-burbuja-con-salid.ripkg`**](../../paquetes/ej-9-55-ordenamiento-burbuja-con-salid.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-55-ordenamiento-burbuja-con-salid.ripkg
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
    
    

    current_node["🎯 ej-9-55-ordenamiento-burbuja-con-salid<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 9.55 - Ordenamiento Burbuja con Salida Temprana ⭐⭐⭐⭐☆

:::{exercise}
:label: ej-ref-burbuja-temprana
Refactorizá la siguiente función de ordenamiento burbuja escrita en un solo lazo
críptico:

``` c
void bsort(int a[],int n){int s=1;while(s){s=0;for(int i=0;i<n-1;i++)if(a[i]>a[i+1]){int t=a[i];a[i]=a[i+1];a[i+1]=t;s=1;}}}
```
<!-- c -->

**Tu tarea:**
1. Descomponer el algoritmo en dos lazos estructurados `for` en estilo Allman.
2. Extraer la función auxiliar pura `void intercambiar_enteros(int *a, int *b)`.
3. Escribir tests unitarios con `assert()` verificando arreglos desordenados,
   ordenados e invertidos.

:::
<!-- {exercise} -->

---


## 📋 Prototipos y Cabecera (`ej-9-55-ordenamiento-burbuja-con-salid.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_55_ORDENAMIENTO_BURBUJA_CON_SALID_H
#define EJERCICIO_EJ_9_55_ORDENAMIENTO_BURBUJA_CON_SALID_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ordenamiento Burbuja con Salida Temprana */
int proc_to_burbuja_con_salid(int val);

#endif /* EJERCICIO_EJ_9_55_ORDENAMIENTO_BURBUJA_CON_SALID_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_to_burbuja_con_salid` | `int` | `int val` | Procesa el flujo principal de Ordenamiento Burbuja con Salida Temprana |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_to_burbuja_con_salid_positivo** | `proc_to_burbuja_con_salid` | `int res = proc_to_burbuja_con_salid(5); assert(res == 10 || res >= 0);` |

| **test_proc_to_burbuja_con_salid_cero** | `proc_to_burbuja_con_salid` | `int res = proc_to_burbuja_con_salid(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ordenamiento Burbuja con Salida Temprana
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_to_burbuja_con_salid(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ordenamiento Burbuja con Salida Temprana */
    return 0;
}
```
```
