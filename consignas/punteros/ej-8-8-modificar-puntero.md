

# Modificar Puntero
> **ID:** `ej-8-8-modificar-puntero`
 · **Tema:** `punteros`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `modificar`, `puntero`, `memoria`, `punteros`, `direcciones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-8-modificar-puntero.ripkg`**](../../paquetes/ej-8-8-modificar-puntero.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-8-modificar-puntero.ripkg
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
    
    

    current_node["🎯 ej-8-8-modificar-puntero<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.8 - Modificar Puntero ⭐⭐⭐☆☆

Implementar `void asignar_memoria(int **ptr, int valor)` que reserve memoria
para un entero, le asigne el `valor` y modifique el puntero original para que
apunte a esa memoria.

**Uso esperado:**

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int *p = NULL;
asignar_memoria(&p, 42);
// Ahora *p contiene 42
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-8-8-modificar-puntero.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_8_MODIFICAR_PUNTERO_H
#define EJERCICIO_EJ_8_8_MODIFICAR_PUNTERO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Modificar Puntero */
int proc__8_modificar_puntero(int val);

#endif /* EJERCICIO_EJ_8_8_MODIFICAR_PUNTERO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__8_modificar_puntero` | `int` | `int val` | Procesa el flujo principal de Modificar Puntero |






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

| **test_proc__8_modificar_puntero_positivo** | `proc__8_modificar_puntero` | `int res = proc__8_modificar_puntero(5); assert(res == 10 || res >= 0);` |

| **test_proc__8_modificar_puntero_cero** | `proc__8_modificar_puntero` | `int res = proc__8_modificar_puntero(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Modificar Puntero
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__8_modificar_puntero(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Modificar Puntero */
    return 0;
}
```
```
