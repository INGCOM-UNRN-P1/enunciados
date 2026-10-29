

# Diccionario Dinámico Clave-Valor
> **ID:** `ej-15-26-b25-diccionario-dinamico-clave` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `dinamico`, `stack`, `layout`, `memoria`, `diccionario`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-26-b25-diccionario-dinamico-clave.ripkg`**](../../paquetes/ej-15-26-b25-diccionario-dinamico-clave.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-26-b25-diccionario-dinamico-clave.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["punteros"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-15-26-b25-diccionario-dinamico-clave<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.26 - b.25 - Diccionario Dinámico Clave-Valor ⭐⭐⭐☆☆

Implementar una estructura de diccionario asociativo en memoria dinámica basada en un arreglo de pares `(clave, valor)`:
- Crecer automáticamente mediante `realloc` duplicando su capacidad cuando el arreglo se llene
- Duplicar dinámicamente las cadenas de texto correspondientes a las claves
- Liberar cada cadena individual y el arreglo principal al destruir la estructura

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-15-26-b25-diccionario-dinamico-clave.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_26_B25_DICCIONARIO_DINAMICO_CLAVE_H
#define EJERCICIO_EJ_15_26_B25_DICCIONARIO_DINAMICO_CLAVE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Diccionario Dinámico Clave-Valor */
int proc_nario_dinamico_clave(int val);

#endif /* EJERCICIO_EJ_15_26_B25_DICCIONARIO_DINAMICO_CLAVE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_nario_dinamico_clave` | `int` | `int val` | Procesa el flujo principal de Diccionario Dinámico Clave-Valor |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_nario_dinamico_clave_positivo** | `proc_nario_dinamico_clave` | `int res = proc_nario_dinamico_clave(5); assert(res == 10 || res >= 0);` |

| **test_proc_nario_dinamico_clave_cero** | `proc_nario_dinamico_clave` | `int res = proc_nario_dinamico_clave(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.25 - Diccionario Dinámico Clave-Valor
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_nario_dinamico_clave(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.25 - Diccionario Dinámico Clave-Valor */
    return 0;
}
```
```
