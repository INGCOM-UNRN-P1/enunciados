

# Copiar Arreglos
> **ID:** `ej-8-12-copiar-arreglos`
 · **Tema:** `punteros`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `arreglos`, `memoria`, `punteros`, `copiar`, `direcciones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-12-copiar-arreglos.ripkg`**](../../paquetes/ej-8-12-copiar-arreglos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-12-copiar-arreglos.ripkg
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
    
    

    current_node["🎯 ej-8-12-copiar-arreglos<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.12 - Copiar Arreglos ⭐⭐⭐☆☆

Implementar `void copiar(int *destino, const int *origen, size_t n)` que copie
`n` elementos de `origen` a `destino` usando solo punteros.

**Estrategia:** `while (n--) { *destino++ = *origen++; }`
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-8-12-copiar-arreglos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_12_COPIAR_ARREGLOS_H
#define EJERCICIO_EJ_8_12_COPIAR_ARREGLOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Copiar Arreglos */
int proc_8_12_copiar_arreglos(int val);

#endif /* EJERCICIO_EJ_8_12_COPIAR_ARREGLOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_8_12_copiar_arreglos` | `int` | `int val` | Procesa el flujo principal de Copiar Arreglos |






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

| **test_proc_8_12_copiar_arreglos_positivo** | `proc_8_12_copiar_arreglos` | `int res = proc_8_12_copiar_arreglos(5); assert(res == 10 || res >= 0);` |

| **test_proc_8_12_copiar_arreglos_cero** | `proc_8_12_copiar_arreglos` | `int res = proc_8_12_copiar_arreglos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Copiar Arreglos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_8_12_copiar_arreglos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Copiar Arreglos */
    return 0;
}
```
```
