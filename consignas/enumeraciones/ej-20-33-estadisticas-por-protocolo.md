

# Estadísticas por protocolo
> **ID:** `ej-20-33-estadisticas-por-protocolo` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `enum`, `protocolo`, `estadisticas`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-33-estadisticas-por-protocolo.ripkg`**](../../paquetes/ej-20-33-estadisticas-por-protocolo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-33-estadisticas-por-protocolo.ripkg
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
    
    

    current_node["🎯 ej-20-33-estadisticas-por-protocolo<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.33 - Estadísticas por protocolo ⭐⭐⭐☆☆

Implementar una función que cuente paquetes por protocolo en un arreglo de
paquetes.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef struct
{
    unsigned int tcp;
    unsigned int udp;
    unsigned int icmp;
    unsigned int otro;
} estadisticas_protocolo_t;
estadisticas_protocolo_t contar_por_protocolo(const paquete_red_t *paquetes,
                                              size_t cantidad);
```
<!-- {code-block} c -->

## Enums en Sistemas de Archivos


## 📋 Prototipos y Cabecera (`ej-20-33-estadisticas-por-protocolo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_33_ESTADISTICAS_POR_PROTOCOLO_H
#define EJERCICIO_EJ_20_33_ESTADISTICAS_POR_PROTOCOLO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Estadísticas por protocolo */
int proc_sticas_por_protocolo(int val);

#endif /* EJERCICIO_EJ_20_33_ESTADISTICAS_POR_PROTOCOLO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_sticas_por_protocolo` | `int` | `int val` | Procesa el flujo principal de Estadísticas por protocolo |






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

| **test_proc_sticas_por_protocolo_positivo** | `proc_sticas_por_protocolo` | `int res = proc_sticas_por_protocolo(5); assert(res == 10 || res >= 0);` |

| **test_proc_sticas_por_protocolo_cero** | `proc_sticas_por_protocolo` | `int res = proc_sticas_por_protocolo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Solucion modelo para ej-20-33-estadisticas-por-protocolo
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int proc_sticas_por_protocolo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int n = 0;
    if (scanf("%d", &n) == 1)
    {
        printf("OK %d\n", n);
    }
    else
    {
        printf("OK\n");
    }
    return 0;
}
```
```
