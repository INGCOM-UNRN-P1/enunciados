

# ¿Es correcto el formato?
> **ID:** `ej-12-1-es-correcto-el-formato`
 · **Tema:** `archivos`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:cadenas`, `dep:punteros`, `dep:io_formato`
>
> **Etiquetas conceptuales:** `memoria`, `correcto`, `formato`, `io_disco`, `archivos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-12-1-es-correcto-el-formato.ripkg`**](../../paquetes/ej-12-1-es-correcto-el-formato.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-12-1-es-correcto-el-formato.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["cadenas"]
        
        node_pre_2["punteros"]
        
        node_pre_3["io_formato"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-12-1-es-correcto-el-formato<br/><small>archivos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 12.1 - ¿Es correcto el formato? ⭐⭐☆☆☆

Desarrollar una función `bool es_formato_correcto(const char *ruta)`.

**Lógica**: Abrir el archivo, leer el primer número (la cuenta esperada). Luego,
iterar con `fgets` o `fscanf` contando las líneas restantes. Finalmente,
comparar la cuenta real con la esperada.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-12-1-es-correcto-el-formato.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_12_1_ES_CORRECTO_EL_FORMATO_H
#define EJERCICIO_EJ_12_1_ES_CORRECTO_EL_FORMATO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de ¿Es correcto el formato? */
int proc__correcto_el_formato(int val);

#endif /* EJERCICIO_EJ_12_1_ES_CORRECTO_EL_FORMATO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__correcto_el_formato` | `int` | `int val` | Procesa el flujo principal de ¿Es correcto el formato? |






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

| **test_proc__correcto_el_formato_positivo** | `proc__correcto_el_formato` | `int res = proc__correcto_el_formato(5); assert(res == 10 || res >= 0);` |

| **test_proc__correcto_el_formato_cero** | `proc__correcto_el_formato` | `int res = proc__correcto_el_formato(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: ¿Es correcto el formato?
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__correcto_el_formato(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de ¿Es correcto el formato? */
    return 0;
}
```
```
