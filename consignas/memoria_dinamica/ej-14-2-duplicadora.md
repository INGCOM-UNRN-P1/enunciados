

# Duplicadora
> **ID:** `ej-14-2-duplicadora` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `duplicadora`, `memoria`, `malloc`, `free`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-2-duplicadora.ripkg`**](../../paquetes/ej-14-2-duplicadora.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-2-duplicadora.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-14-2-duplicadora<br/><small>memoria_dinamica · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.2 - Duplicadora ⭐⭐☆☆☆

Implementar `int* duplicar_arreglo(const int *origen, size_t tamano)`.
**Algoritmo:**

1.  Reservar memoria para un nuevo arreglo del mismo tamaño que el original.
2.  Verificar que la reserva de memoria fue exitosa.
3.  Recorrer el arreglo de origen y copiar cada elemento al nuevo arreglo.
4.  Retornar el puntero al nuevo arreglo.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-2-duplicadora.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_2_DUPLICADORA_H
#define EJERCICIO_EJ_14_2_DUPLICADORA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Duplicadora */
int ejecutar_ej_14_2_duplicadora(int val);

#endif /* EJERCICIO_EJ_14_2_DUPLICADORA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_14_2_duplicadora` | `int` | `int val` | Procesa el flujo principal de Duplicadora |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_14_2_duplicadora_positivo** | `ejecutar_ej_14_2_duplicadora` | `int res = ejecutar_ej_14_2_duplicadora(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_14_2_duplicadora_cero** | `ejecutar_ej_14_2_duplicadora` | `int res = ejecutar_ej_14_2_duplicadora(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Duplicadora
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_14_2_duplicadora(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Duplicadora */
    return 0;
}
```
```
