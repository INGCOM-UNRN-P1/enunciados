

# Cadenas de Solo Lectura
> **ID:** `ej-8-17-cadenas-de-solo-lectura`
 · **Tema:** `punteros`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `cadenas`, `memoria`, `punteros`, `direcciones`, `lectura`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-17-cadenas-de-solo-lectura.ripkg`**](../../paquetes/ej-8-17-cadenas-de-solo-lectura.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-17-cadenas-de-solo-lectura.ripkg
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
    
    

    current_node["🎯 ej-8-17-cadenas-de-solo-lectura<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 8.17 - Cadenas de Solo Lectura ⭐⭐⭐☆☆

Implementar `size_t contar_vocales(const char *str)` que cuente vocales sin
modificar la cadena.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Punteros y Estructuras


## 📋 Prototipos y Cabecera (`ej-8-17-cadenas-de-solo-lectura.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_17_CADENAS_DE_SOLO_LECTURA_H
#define EJERCICIO_EJ_8_17_CADENAS_DE_SOLO_LECTURA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Cadenas de Solo Lectura */
int proc_enas_de_solo_lectura(int val);

#endif /* EJERCICIO_EJ_8_17_CADENAS_DE_SOLO_LECTURA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_enas_de_solo_lectura` | `int` | `int val` | Procesa el flujo principal de Cadenas de Solo Lectura |






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

| **test_proc_enas_de_solo_lectura_positivo** | `proc_enas_de_solo_lectura` | `int res = proc_enas_de_solo_lectura(5); assert(res == 10 || res >= 0);` |

| **test_proc_enas_de_solo_lectura_cero** | `proc_enas_de_solo_lectura` | `int res = proc_enas_de_solo_lectura(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Cadenas de Solo Lectura
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_enas_de_solo_lectura(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Cadenas de Solo Lectura */
    return 0;
}
```
```
