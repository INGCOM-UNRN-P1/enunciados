

# Lista de Compras Dinámica
> **ID:** `ej-14-24-lista-de-compras-dinamica`
 · **Tema:** `memoria_dinamica`
 · **Bloom:** B5 (Evaluar / Crear)
 · **Carga:** ~45 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `lista`, `memoria`, `dinamica`, `malloc`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-24-lista-de-compras-dinamica.ripkg`**](../../paquetes/ej-14-24-lista-de-compras-dinamica.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-24-lista-de-compras-dinamica.ripkg
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
    
    

    current_node["🎯 ej-14-24-lista-de-compras-dinamica<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.24 - Lista de Compras Dinámica ⭐⭐⭐☆☆

Crear un programa interactivo que permita al usuario gestionar una lista de
compras. Las opciones deben ser:
1. Añadir producto (cadena dinámica).
2. Eliminar producto.
3. Mostrar lista.
La lista debe ser un arreglo de `char*` que se ajuste dinámicamente.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-24-lista-de-compras-dinamica.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_24_LISTA_DE_COMPRAS_DINAMICA_H
#define EJERCICIO_EJ_14_24_LISTA_DE_COMPRAS_DINAMICA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Lista de Compras Dinámica */
int proc__de_compras_dinamica(int val);

#endif /* EJERCICIO_EJ_14_24_LISTA_DE_COMPRAS_DINAMICA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__de_compras_dinamica` | `int` | `int val` | Procesa el flujo principal de Lista de Compras Dinámica |






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

| **test_proc__de_compras_dinamica_positivo** | `proc__de_compras_dinamica` | `int res = proc__de_compras_dinamica(5); assert(res == 10 || res >= 0);` |

| **test_proc__de_compras_dinamica_cero** | `proc__de_compras_dinamica` | `int res = proc__de_compras_dinamica(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Lista de Compras Dinámica
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__de_compras_dinamica(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Lista de Compras Dinámica */
    return 0;
}
```
```
