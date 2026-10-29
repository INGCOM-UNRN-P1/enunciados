

# Generar línea de comandos
> **ID:** `ej-20-21-generar-linea-de-comandos`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `generar`, `tipos`, `comandos`, `memoria`, `enum`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-21-generar-linea-de-comandos.ripkg`**](../../paquetes/ej-20-21-generar-linea-de-comandos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-21-generar-linea-de-comandos.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["condicionales"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-20-21-generar-linea-de-comandos<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.21 - Generar línea de comandos ⭐⭐☆☆☆

Implementar una función que genere una cadena con las opciones de compilación
correspondientes a los flags activos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void generar_comando_compilacion(unsigned int opciones, char *buffer,
                                 size_t tam);
```
<!-- c -->

Ejemplo: Si `opciones` tiene `OPT_DEBUG | OPT_WARNINGS`, el buffer debe contener
`"-g -Wall"`.


## 📋 Prototipos y Cabecera (`ej-20-21-generar-linea-de-comandos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_21_GENERAR_LINEA_DE_COMANDOS_H
#define EJERCICIO_EJ_20_21_GENERAR_LINEA_DE_COMANDOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Generar línea de comandos */
int proc_ar_linea_de_comandos(int val);

#endif /* EJERCICIO_EJ_20_21_GENERAR_LINEA_DE_COMANDOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ar_linea_de_comandos` | `int` | `int val` | Procesa el flujo principal de Generar línea de comandos |






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

| **test_proc_ar_linea_de_comandos_positivo** | `proc_ar_linea_de_comandos` | `int res = proc_ar_linea_de_comandos(5); assert(res == 10 || res >= 0);` |

| **test_proc_ar_linea_de_comandos_cero** | `proc_ar_linea_de_comandos` | `int res = proc_ar_linea_de_comandos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Generar línea de comandos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ar_linea_de_comandos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Generar línea de comandos */
    return 0;
}
```
```
