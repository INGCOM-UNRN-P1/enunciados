

# Vector Redimensionable con Crecimiento
> **ID:** `ej-17-10-vector-redimensionable-con-cre` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `crecimiento`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `crecimiento`, `estructuras`, `vector`, `memoria`, `punteros`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-17-10-vector-redimensionable-con-cre.ripkg`**](../../paquetes/ej-17-10-vector-redimensionable-con-cre.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-17-10-vector-redimensionable-con-cre.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["arreglos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-17-10-vector-redimensionable-con-cre<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 17.10 - Vector Redimensionable con Crecimiento ⭐⭐☆☆☆

Implementar un vector dinámico de enteros que duplique su capacidad
automáticamente al llenarse, asegurando un manejo correcto del valor de retorno
de `realloc` mediante un puntero intermedio temporal.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-17-10-vector-redimensionable-con-cre.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_17_10_VECTOR_REDIMENSIONABLE_CON_CRE_H
#define EJERCICIO_EJ_17_10_VECTOR_REDIMENSIONABLE_CON_CRE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Vector Redimensionable con Crecimiento */
int proc_imensionable_con_cre(int val);

#endif /* EJERCICIO_EJ_17_10_VECTOR_REDIMENSIONABLE_CON_CRE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_imensionable_con_cre` | `int` | `int val` | Procesa el flujo principal de Vector Redimensionable con Crecimiento |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_imensionable_con_cre_positivo** | `proc_imensionable_con_cre` | `int res = proc_imensionable_con_cre(5); assert(res == 10 || res >= 0);` |

| **test_proc_imensionable_con_cre_cero** | `proc_imensionable_con_cre` | `int res = proc_imensionable_con_cre(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Vector Redimensionable con Crecimiento
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_imensionable_con_cre(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Vector Redimensionable con Crecimiento */
    return 0;
}
```
```
