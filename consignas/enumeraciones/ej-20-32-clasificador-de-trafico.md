

# Clasificador de tráfico
> **ID:** `ej-20-32-clasificador-de-trafico`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `clasificador`, `enum`, `trafico`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-32-clasificador-de-trafico.ripkg`**](../../paquetes/ej-20-32-clasificador-de-trafico.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-32-clasificador-de-trafico.ripkg
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
    
    

    current_node["🎯 ej-20-32-clasificador-de-trafico<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.32 - Clasificador de tráfico ⭐⭐☆☆☆

Implementar una función que clasifique un paquete basándose en reglas
heurísticas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
enum tipo_trafico clasificar_paquete(const paquete_red_t *paquete);
```
<!-- c -->

**Reglas sugeridas:**
- Puertos conocidos (80, 443, 22) → `TRAFICO_NORMAL`
- Puertos altos no estándar → `TRAFICO_SOSPECHOSO`
- Transferencias muy grandes o patrones anómalos → `TRAFICO_MALICIOSO`


## 📋 Prototipos y Cabecera (`ej-20-32-clasificador-de-trafico.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_32_CLASIFICADOR_DE_TRAFICO_H
#define EJERCICIO_EJ_20_32_CLASIFICADOR_DE_TRAFICO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Clasificador de tráfico */
int proc_sificador_de_trafico(int val);

#endif /* EJERCICIO_EJ_20_32_CLASIFICADOR_DE_TRAFICO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_sificador_de_trafico` | `int` | `int val` | Procesa el flujo principal de Clasificador de tráfico |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 2
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_sificador_de_trafico_positivo** | `proc_sificador_de_trafico` | `int res = proc_sificador_de_trafico(5); assert(res == 10 || res >= 0);` |

| **test_proc_sificador_de_trafico_cero** | `proc_sificador_de_trafico` | `int res = proc_sificador_de_trafico(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Clasificador de tráfico
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_sificador_de_trafico(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Clasificador de tráfico */
    return 0;
}
```
```
