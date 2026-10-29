

# Librería de Conversión de Bases Numéricas
> **ID:** `ej-7-24-libreria-de-conversion-de-base` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `numericas`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `numericas`, `fundamentos`, `headers`, `conversion`, `libreria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-24-libreria-de-conversion-de-base.ripkg`**](../../paquetes/ej-7-24-libreria-de-conversion-de-base.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-24-libreria-de-conversion-de-base.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-7-24-libreria-de-conversion-de-base<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 7.24 - Librería de Conversión de Bases Numéricas ⭐⭐⭐☆☆

Implementá `bases.h` y `bases.c`:
- `bool base_dec_a_binario(unsigned int dec, char *buf, size_t buf_size)`
- `bool base_dec_a_hex(unsigned int dec, char *buf, size_t buf_size)`
- `unsigned int base_binario_a_dec(const char *bin_str, size_t len_str)`
- `unsigned int base_hex_a_dec(const char *hex_str, size_t len_str)`

:::{hint} Lógica y Consideraciones
- Asegurá la validación de los caracteres recibidos en las cadenas fuente.
:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-7-24-libreria-de-conversion-de-base.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_24_LIBRERIA_DE_CONVERSION_DE_BASE_H
#define EJERCICIO_EJ_7_24_LIBRERIA_DE_CONVERSION_DE_BASE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Conversión de Bases Numéricas */
int proc_e_conversion_de_base(int val);

#endif /* EJERCICIO_EJ_7_24_LIBRERIA_DE_CONVERSION_DE_BASE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_conversion_de_base` | `int` | `int val` | Procesa el flujo principal de Librería de Conversión de Bases Numéricas |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Asegurá la validación de los caracteres recibidos en las cadenas fuente.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_conversion_de_base_positivo** | `proc_e_conversion_de_base` | `int res = proc_e_conversion_de_base(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_conversion_de_base_cero** | `proc_e_conversion_de_base` | `int res = proc_e_conversion_de_base(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Conversión de Bases Numéricas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_conversion_de_base(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Conversión de Bases Numéricas */
    return 0;
}
```
```
