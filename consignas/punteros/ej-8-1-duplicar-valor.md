

# Duplicar valor
> **ID:** `ej-8-1-duplicar-valor` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `duplicar`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `duplicar`, `memoria`, `punteros`, `valor`, `direcciones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-1-duplicar-valor.ripkg`**](../../paquetes/ej-8-1-duplicar-valor.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-1-duplicar-valor.ripkg
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
    
    

    current_node["🎯 ej-8-1-duplicar-valor<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.1 - Duplicar valor ⭐⭐☆☆☆

Implementar `void duplicar(int *numero)` que modifique el valor de la variable
original.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-8-1-duplicar-valor.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_1_DUPLICAR_VALOR_H
#define EJERCICIO_EJ_8_1_DUPLICAR_VALOR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Duplicar valor */
int ejecutar_ej_8_1_duplicar_valor(int val);

#endif /* EJERCICIO_EJ_8_1_DUPLICAR_VALOR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_8_1_duplicar_valor` | `int` | `int val` | Procesa el flujo principal de Duplicar valor |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_8_1_duplicar_valor_positivo** | `ejecutar_ej_8_1_duplicar_valor` | `int res = ejecutar_ej_8_1_duplicar_valor(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_8_1_duplicar_valor_cero** | `ejecutar_ej_8_1_duplicar_valor` | `int res = ejecutar_ej_8_1_duplicar_valor(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Duplicar valor
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_8_1_duplicar_valor(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Duplicar valor */
    return 0;
}
```
```
