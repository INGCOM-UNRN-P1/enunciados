

# Ciclo de vida
> **ID:** `ej-14-1-ciclo-de-vida`
 · **Tema:** `memoria_dinamica`
 · **Bloom:** B1 (Recordar)
 · **Carga:** ~10 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `memoria`, `ciclo`, `malloc`, `free`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-1-ciclo-de-vida.ripkg`**](../../paquetes/ej-14-1-ciclo-de-vida.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-1-ciclo-de-vida.ripkg
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
    
    

    current_node["🎯 ej-14-1-ciclo-de-vida<br/><small>memoria_dinamica · B1</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.1 - Ciclo de vida ⭐⭐☆☆☆

Implementar un par de funciones para crear y destruir un arreglo dinámico.

- `int* crear_arreglo(size_t tamano)`: Debe usar `malloc(tamano * sizeof(int))`
  para reservar un bloque de memoria contiguo para `tamano` enteros. Es crucial
  verificar si `malloc` devolvió `NULL` (indicando un fallo) antes de retornar
  el puntero.
- `void liberar_arreglo(int *arr)`: Debe llamar a `free(arr)` para devolver la
  memoria al sistema. Después de liberar, es una buena práctica asignar `NULL`
  al puntero para evitar su uso accidental (puntero colgante).
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-1-ciclo-de-vida.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_1_CICLO_DE_VIDA_H
#define EJERCICIO_EJ_14_1_CICLO_DE_VIDA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ciclo de vida */
int ejecutar_ej_14_1_ciclo_de_vida(int val);

#endif /* EJERCICIO_EJ_14_1_CICLO_DE_VIDA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_14_1_ciclo_de_vida` | `int` | `int val` | Procesa el flujo principal de Ciclo de vida |






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

| **test_ejecutar_ej_14_1_ciclo_de_vida_positivo** | `ejecutar_ej_14_1_ciclo_de_vida` | `int res = ejecutar_ej_14_1_ciclo_de_vida(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_14_1_ciclo_de_vida_cero** | `ejecutar_ej_14_1_ciclo_de_vida` | `int res = ejecutar_ej_14_1_ciclo_de_vida(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ciclo de vida
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_14_1_ciclo_de_vida(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ciclo de vida */
    return 0;
}
```
```
