

# Crear y decodificar cabecera
> **ID:** `ej-20-19-crear-y-decodificar-cabecera` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `crear`, `memoria`, `enum`, `decodificar`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-19-crear-y-decodificar-cabecera.ripkg`**](../../paquetes/ej-20-19-crear-y-decodificar-cabecera.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-19-crear-y-decodificar-cabecera.ripkg
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
    
    

    current_node["🎯 ej-20-19-crear-y-decodificar-cabecera<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.19 - Crear y decodificar cabecera ⭐⭐☆☆☆

Implementar funciones para construir y extraer información de la cabecera.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
cabecera_mensaje_t crear_cabecera(enum tipo_mensaje tipo,
                                  unsigned int prioridad,
                                  unsigned int secuencia);
void imprimir_cabecera(cabecera_mensaje_t cabecera);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-20-19-crear-y-decodificar-cabecera.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_19_CREAR_Y_DECODIFICAR_CABECERA_H
#define EJERCICIO_EJ_20_19_CREAR_Y_DECODIFICAR_CABECERA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Crear y decodificar cabecera */
int proc_decodificar_cabecera(int val);

#endif /* EJERCICIO_EJ_20_19_CREAR_Y_DECODIFICAR_CABECERA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_decodificar_cabecera` | `int` | `int val` | Procesa el flujo principal de Crear y decodificar cabecera |






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

| **test_proc_decodificar_cabecera_positivo** | `proc_decodificar_cabecera` | `int res = proc_decodificar_cabecera(5); assert(res == 10 || res >= 0);` |

| **test_proc_decodificar_cabecera_cero** | `proc_decodificar_cabecera` | `int res = proc_decodificar_cabecera(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Crear y decodificar cabecera
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_decodificar_cabecera(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Crear y decodificar cabecera */
    return 0;
}
```
```
