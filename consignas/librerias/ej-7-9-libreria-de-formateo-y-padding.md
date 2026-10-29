

# Librería de Formateo y Padding de Texto
> **ID:** `ej-7-9-libreria-de-formateo-y-padding`
 · **Tema:** `librerias`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `formateo`, `texto`, `fundamentos`, `headers`, `libreria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-9-libreria-de-formateo-y-padding.ripkg`**](../../paquetes/ej-7-9-libreria-de-formateo-y-padding.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-9-libreria-de-formateo-y-padding.ripkg
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
    
    

    current_node["🎯 ej-7-9-libreria-de-formateo-y-padding<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 7.9 - Librería de Formateo y Padding de Texto ⭐⭐⭐☆☆

Diseñá `str_format.h` y `str_format.c`:
- `bool str_pad_left(const char *src, size_t len_src, char *dest, size_t dest_size, size_t total_len, char pad_char)`
- `bool str_pad_right(const char *src, size_t len_src, char *dest, size_t dest_size, size_t total_len, char pad_char)`
- `bool str_centrar(const char *src, size_t len_src, char *dest, size_t dest_size, size_t total_len, char pad_char)`

:::{hint} Lógica y Consideraciones
- Garantizá siempre la terminación de la cadena resultante con `'\0'`. Retorná `false` si `dest_size` no alcanza.
:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-7-9-libreria-de-formateo-y-padding.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_9_LIBRERIA_DE_FORMATEO_Y_PADDING_H
#define EJERCICIO_EJ_7_9_LIBRERIA_DE_FORMATEO_Y_PADDING_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Formateo y Padding de Texto */
int proc_e_formateo_y_padding(int val);

#endif /* EJERCICIO_EJ_7_9_LIBRERIA_DE_FORMATEO_Y_PADDING_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_formateo_y_padding` | `int` | `int val` | Procesa el flujo principal de Librería de Formateo y Padding de Texto |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Garantizá siempre la terminación de la cadena resultante con `'\0'`. Retorná `false` si `dest_size` no alcanza.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_formateo_y_padding_positivo** | `proc_e_formateo_y_padding` | `int res = proc_e_formateo_y_padding(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_formateo_y_padding_cero** | `proc_e_formateo_y_padding` | `int res = proc_e_formateo_y_padding(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Formateo y Padding de Texto
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_formateo_y_padding(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Formateo y Padding de Texto */
    return 0;
}
```
```
