

# Arreglo de Cadenas
> **ID:** `ej-8-10-arreglo-de-cadenas` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `procesamiento_texto`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `cadenas`, `arreglo`, `memoria`, `punteros`, `direcciones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-10-arreglo-de-cadenas.ripkg`**](../../paquetes/ej-8-10-arreglo-de-cadenas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-10-arreglo-de-cadenas.ripkg
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
    
    

    current_node["🎯 ej-8-10-arreglo-de-cadenas<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.10 - Arreglo de Cadenas ⭐⭐⭐☆☆

Implementar `void ordenar_cadenas(char **cadenas, int n)` que ordene un arreglo
de punteros a cadenas lexicográficamente usando `strcmp`.

**Ejemplo:**

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
char *palabras[] = {"hola", "adios", "casa", "barco"};
ordenar_cadenas(palabras, 4);
// Resultado: {"adios", "barco", "casa", "hola"}
```
<!-- c -->

---

## Aritmética de Punteros Avanzada


## 📋 Prototipos y Cabecera (`ej-8-10-arreglo-de-cadenas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_10_ARREGLO_DE_CADENAS_H
#define EJERCICIO_EJ_8_10_ARREGLO_DE_CADENAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Arreglo de Cadenas */
int proc_0_arreglo_de_cadenas(int val);

#endif /* EJERCICIO_EJ_8_10_ARREGLO_DE_CADENAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_0_arreglo_de_cadenas` | `int` | `int val` | Procesa el flujo principal de Arreglo de Cadenas |






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

| **test_proc_0_arreglo_de_cadenas_positivo** | `proc_0_arreglo_de_cadenas` | `int res = proc_0_arreglo_de_cadenas(5); assert(res == 10 || res >= 0);` |

| **test_proc_0_arreglo_de_cadenas_cero** | `proc_0_arreglo_de_cadenas` | `int res = proc_0_arreglo_de_cadenas(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Arreglo de Cadenas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_0_arreglo_de_cadenas(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Arreglo de Cadenas */
    return 0;
}
```
```
