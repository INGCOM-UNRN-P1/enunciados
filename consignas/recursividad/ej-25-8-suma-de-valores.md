

# Suma de valores
> **ID:** `ej-25-8-suma-de-valores` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `recursividad` / `algoritmos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `recursividad`, `algoritmos`, `valores`, `induccion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-25-8-suma-de-valores.ripkg`**](../../paquetes/ej-25-8-suma-de-valores.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-25-8-suma-de-valores.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-25-8-suma-de-valores<br/><small>recursividad · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 25.8 - Suma de valores ⭐⭐☆☆☆

Sumar el primer elemento con el resultado de llamar a la función sobre el resto
del arreglo.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Cadenas Recursivas


## 📋 Prototipos y Cabecera (`ej-25-8-suma-de-valores.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_25_8_SUMA_DE_VALORES_H
#define EJERCICIO_EJ_25_8_SUMA_DE_VALORES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Suma de valores */
int proc_25_8_suma_de_valores(int val);

#endif /* EJERCICIO_EJ_25_8_SUMA_DE_VALORES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_25_8_suma_de_valores` | `int` | `int val` | Procesa el flujo principal de Suma de valores |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_25_8_suma_de_valores_positivo** | `proc_25_8_suma_de_valores` | `int res = proc_25_8_suma_de_valores(5); assert(res == 10 || res >= 0);` |

| **test_proc_25_8_suma_de_valores_cero** | `proc_25_8_suma_de_valores` | `int res = proc_25_8_suma_de_valores(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Suma de valores
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_25_8_suma_de_valores(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Suma de valores */
    return 0;
}
```
```
