

# Historial de Comandos
> **ID:** `ej-14-20-historial-de-comandos` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `historial`, `comandos`, `memoria`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-20-historial-de-comandos.ripkg`**](../../paquetes/ej-14-20-historial-de-comandos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-20-historial-de-comandos.ripkg
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
    
    

    current_node["🎯 ej-14-20-historial-de-comandos<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.20 - Historial de Comandos ⭐⭐☆☆☆

Crear un programa que lea líneas de texto desde la entrada estándar y las
almacene en un "historial" (un arreglo dinámico de cadenas `char**`). El
historial debe crecer dinámicamente a medida que se añaden comandos.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-20-historial-de-comandos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_20_HISTORIAL_DE_COMANDOS_H
#define EJERCICIO_EJ_14_20_HISTORIAL_DE_COMANDOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Historial de Comandos */
int proc_istorial_de_comandos(int val);

#endif /* EJERCICIO_EJ_14_20_HISTORIAL_DE_COMANDOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_istorial_de_comandos` | `int` | `int val` | Procesa el flujo principal de Historial de Comandos |






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

| **test_proc_istorial_de_comandos_positivo** | `proc_istorial_de_comandos` | `int res = proc_istorial_de_comandos(5); assert(res == 10 || res >= 0);` |

| **test_proc_istorial_de_comandos_cero** | `proc_istorial_de_comandos` | `int res = proc_istorial_de_comandos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Historial de Comandos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_istorial_de_comandos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Historial de Comandos */
    return 0;
}
```
```
