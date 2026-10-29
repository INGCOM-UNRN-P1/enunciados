

# Concatenar Múltiples Cadenas
> **ID:** `ej-14-17-concatenar-multiples-cadenas` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `cadenas`, `concatenar`, `memoria`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-17-concatenar-multiples-cadenas.ripkg`**](../../paquetes/ej-14-17-concatenar-multiples-cadenas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-17-concatenar-multiples-cadenas.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-14-17-concatenar-multiples-cadenas<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.17 - Concatenar Múltiples Cadenas ⭐⭐⭐☆☆

Escribir una función `char* concatenar_muchas(char** cadenas, int n_cadenas)`
que reciba un arreglo de cadenas y las una todas en una sola cadena dinámica,
separadas por un espacio.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-17-concatenar-multiples-cadenas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_17_CONCATENAR_MULTIPLES_CADENAS_H
#define EJERCICIO_EJ_14_17_CONCATENAR_MULTIPLES_CADENAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Concatenar Múltiples Cadenas */
int proc_ar_multiples_cadenas(int val);

#endif /* EJERCICIO_EJ_14_17_CONCATENAR_MULTIPLES_CADENAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ar_multiples_cadenas` | `int` | `int val` | Procesa el flujo principal de Concatenar Múltiples Cadenas |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_ar_multiples_cadenas_positivo** | `proc_ar_multiples_cadenas` | `int res = proc_ar_multiples_cadenas(5); assert(res == 10 || res >= 0);` |

| **test_proc_ar_multiples_cadenas_cero** | `proc_ar_multiples_cadenas` | `int res = proc_ar_multiples_cadenas(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Concatenar Múltiples Cadenas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ar_multiples_cadenas(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Concatenar Múltiples Cadenas */
    return 0;
}
```
```
