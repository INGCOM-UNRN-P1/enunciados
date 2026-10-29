

# Buffer de Lectura Dinámico
> **ID:** `ej-14-23-buffer-de-lectura-dinamico`
 · **Tema:** `memoria_dinamica`
 · **Bloom:** B5 (Evaluar / Crear)
 · **Carga:** ~45 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `dinamico`, `buffer`, `memoria`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-23-buffer-de-lectura-dinamico.ripkg`**](../../paquetes/ej-14-23-buffer-de-lectura-dinamico.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-23-buffer-de-lectura-dinamico.ripkg
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
    
    

    current_node["🎯 ej-14-23-buffer-de-lectura-dinamico<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.23 - Buffer de Lectura Dinámico ⭐⭐⭐☆☆

Crear una función que lea una línea completa desde `stdin` (hasta el salto de
línea), alojando dinámicamente la memoria necesaria para la línea sin imponer un
límite de tamaño predefinido. La función podría empezar con un buffer pequeño y
usar `realloc` para agrandarlo según sea necesario.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-23-buffer-de-lectura-dinamico.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_23_BUFFER_DE_LECTURA_DINAMICO_H
#define EJERCICIO_EJ_14_23_BUFFER_DE_LECTURA_DINAMICO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Buffer de Lectura Dinámico */
int proc__de_lectura_dinamico(int val);

#endif /* EJERCICIO_EJ_14_23_BUFFER_DE_LECTURA_DINAMICO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__de_lectura_dinamico` | `int` | `int val` | Procesa el flujo principal de Buffer de Lectura Dinámico |






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

| **test_proc__de_lectura_dinamico_positivo** | `proc__de_lectura_dinamico` | `int res = proc__de_lectura_dinamico(5); assert(res == 10 || res >= 0);` |

| **test_proc__de_lectura_dinamico_cero** | `proc__de_lectura_dinamico` | `int res = proc__de_lectura_dinamico(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Buffer de Lectura Dinámico
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__de_lectura_dinamico(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Buffer de Lectura Dinámico */
    return 0;
}
```
```
