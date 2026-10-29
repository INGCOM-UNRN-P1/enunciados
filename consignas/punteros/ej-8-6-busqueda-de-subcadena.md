

# Búsqueda de subcadena
> **ID:** `ej-8-6-busqueda-de-subcadena`
 · **Tema:** `punteros`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `busqueda`, `memoria`, `punteros`, `direcciones`, `subcadena`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-6-busqueda-de-subcadena.ripkg`**](../../paquetes/ej-8-6-busqueda-de-subcadena.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-6-busqueda-de-subcadena.ripkg
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
    
    

    current_node["🎯 ej-8-6-busqueda-de-subcadena<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.6 - Búsqueda de subcadena ⭐⭐⭐☆☆

Implementar `char* busqueda(const char *cadena, const char *buscado)`. Se debe
retornar un puntero al inicio de la primera ocurrencia de `buscado` dentro de
`cadena`, o `NULL`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-8-6-busqueda-de-subcadena.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_6_BUSQUEDA_DE_SUBCADENA_H
#define EJERCICIO_EJ_8_6_BUSQUEDA_DE_SUBCADENA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Búsqueda de subcadena */
int proc_usqueda_de_subcadena(int val);

#endif /* EJERCICIO_EJ_8_6_BUSQUEDA_DE_SUBCADENA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_usqueda_de_subcadena` | `int` | `int val` | Procesa el flujo principal de Búsqueda de subcadena |






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

| **test_proc_usqueda_de_subcadena_positivo** | `proc_usqueda_de_subcadena` | `int res = proc_usqueda_de_subcadena(5); assert(res == 10 || res >= 0);` |

| **test_proc_usqueda_de_subcadena_cero** | `proc_usqueda_de_subcadena` | `int res = proc_usqueda_de_subcadena(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Búsqueda de subcadena
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_usqueda_de_subcadena(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Búsqueda de subcadena */
    return 0;
}
```
```
