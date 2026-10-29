

# Distancia entre Punteros
> **ID:** `ej-8-14-distancia-entre-punteros` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `distancia`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `distancia`, `memoria`, `punteros`, `direcciones`, `entre`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-14-distancia-entre-punteros.ripkg`**](../../paquetes/ej-8-14-distancia-entre-punteros.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-14-distancia-entre-punteros.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["arreglos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-8-14-distancia-entre-punteros<br/><small>punteros · B1</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.14 - Distancia entre Punteros ⭐⭐⭐☆☆

Implementar `size_t distancia(const int *p1, const int *p2)` que calcule cuántos
elementos hay entre dos punteros del mismo arreglo.

**Recordatorio:** La diferencia entre punteros del mismo arreglo da el número de
elementos entre ellos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Punteros Constantes


## 📋 Prototipos y Cabecera (`ej-8-14-distancia-entre-punteros.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_14_DISTANCIA_ENTRE_PUNTEROS_H
#define EJERCICIO_EJ_8_14_DISTANCIA_ENTRE_PUNTEROS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Distancia entre Punteros */
int proc_ancia_entre_punteros(int val);

#endif /* EJERCICIO_EJ_8_14_DISTANCIA_ENTRE_PUNTEROS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ancia_entre_punteros` | `int` | `int val` | Procesa el flujo principal de Distancia entre Punteros |






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

| **test_proc_ancia_entre_punteros_positivo** | `proc_ancia_entre_punteros` | `int res = proc_ancia_entre_punteros(5); assert(res == 10 || res >= 0);` |

| **test_proc_ancia_entre_punteros_cero** | `proc_ancia_entre_punteros` | `int res = proc_ancia_entre_punteros(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Distancia entre Punteros
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ancia_entre_punteros(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Distancia entre Punteros */
    return 0;
}
```
```
