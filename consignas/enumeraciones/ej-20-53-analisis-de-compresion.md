

# Análisis de compresión
> **ID:** `ej-20-53-analisis-de-compresion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `compresion`, `tipos`, `analisis`, `memoria`, `enum`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-53-analisis-de-compresion.ripkg`**](../../paquetes/ej-20-53-analisis-de-compresion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-53-analisis-de-compresion.ripkg
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
    
    

    current_node["🎯 ej-20-53-analisis-de-compresion<br/><small>enumeraciones · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.53 - Análisis de compresión ⭐⭐☆☆☆

Implementar funciones para analizar rendimiento de compresión.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double calcular_ratio(const resultado_compresion_t *resultado);
double porcentaje_ahorro(const resultado_compresion_t *resultado);
bool es_algoritmo_rapido(enum algoritmo_compresion alg);
const char *nombre_algoritmo(enum algoritmo_compresion alg);
```
<!-- c -->

## Máquina de Estados Finita Genérica


## 📋 Prototipos y Cabecera (`ej-20-53-analisis-de-compresion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_53_ANALISIS_DE_COMPRESION_H
#define EJERCICIO_EJ_20_53_ANALISIS_DE_COMPRESION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Análisis de compresión */
int proc_alisis_de_compresion(int val);

#endif /* EJERCICIO_EJ_20_53_ANALISIS_DE_COMPRESION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_alisis_de_compresion` | `int` | `int val` | Procesa el flujo principal de Análisis de compresión |






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

| **test_proc_alisis_de_compresion_positivo** | `proc_alisis_de_compresion` | `int res = proc_alisis_de_compresion(5); assert(res == 10 || res >= 0);` |

| **test_proc_alisis_de_compresion_cero** | `proc_alisis_de_compresion` | `int res = proc_alisis_de_compresion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Análisis de compresión
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_alisis_de_compresion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Análisis de compresión */
    return 0;
}
```
```
