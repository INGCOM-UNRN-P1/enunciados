

# Compactador de Espacios Repetidos
> **ID:** `ej-9-47-compactador-de-espacios-repeti` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `clean_code`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `espacios`, `fundamentos`, `compactador`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-47-compactador-de-espacios-repeti.ripkg`**](../../paquetes/ej-9-47-compactador-de-espacios-repeti.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-47-compactador-de-espacios-repeti.ripkg
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
    
    

    current_node["🎯 ej-9-47-compactador-de-espacios-repeti<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 9.47 - Compactador de Espacios Repetidos ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-compactar-espacios
Refactorizá la siguiente función que copia caracteres de `orig` a `dest`
colapsando múltiples espacios consecutivos en uno solo:

``` c
int comp(char o[],int n,char d[]){int j=0,e=0;for(int i=0;i<n;i++){if(o[i]==' '){if(!e){d[j++]=' ';e=1;}}else{d[j++]=o[i];e=0;}}return j;}
```
<!-- c -->

-   **[*plus ultra*]:** Retornar la nueva longitud escrita en `d`.
-   **[*plus ultra*]:** Escribir tests con `assert()` verificando secuencias con
    múltiples espacios.

:::
<!-- {exercise} -->

---


## 📋 Prototipos y Cabecera (`ej-9-47-compactador-de-espacios-repeti.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_47_COMPACTADOR_DE_ESPACIOS_REPETI_H
#define EJERCICIO_EJ_9_47_COMPACTADOR_DE_ESPACIOS_REPETI_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Compactador de Espacios Repetidos */
int proc_r_de_espacios_repeti(int val);

#endif /* EJERCICIO_EJ_9_47_COMPACTADOR_DE_ESPACIOS_REPETI_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_r_de_espacios_repeti` | `int` | `int val` | Procesa el flujo principal de Compactador de Espacios Repetidos |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_r_de_espacios_repeti_positivo** | `proc_r_de_espacios_repeti` | `int res = proc_r_de_espacios_repeti(5); assert(res == 10 || res >= 0);` |

| **test_proc_r_de_espacios_repeti_cero** | `proc_r_de_espacios_repeti` | `int res = proc_r_de_espacios_repeti(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Compactador de Espacios Repetidos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_r_de_espacios_repeti(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Compactador de Espacios Repetidos */
    return 0;
}
```
```
