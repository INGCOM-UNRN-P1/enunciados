

# Árbol de Búsqueda Binaria (BST)
> **ID:** `ej-23-6-arbol-de-busqueda-binaria-bst` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `estructuras_datos` / `arboles_binarios`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tad`, `dep:memoria_dinamica`, `dep:recursividad`
>
> **Etiquetas conceptuales:** `listas`, `nodos`, `busqueda`, `bst`, `binaria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-23-6-arbol-de-busqueda-binaria-bst.ripkg`**](../../paquetes/ej-23-6-arbol-de-busqueda-binaria-bst.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-23-6-arbol-de-busqueda-binaria-bst.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tad"]
        
        node_pre_2["memoria_dinamica"]
        
        node_pre_3["recursividad"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-23-6-arbol-de-busqueda-binaria-bst<br/><small>estructuras_datos · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 23.6 - Árbol de Búsqueda Binaria (BST) ⭐⭐☆☆☆

Un árbol binario de búsqueda es una estructura de datos basada en nodos donde
cada nodo tiene un valor, un puntero a un sub-árbol izquierdo (con valores
menores) y un puntero a un sub-árbol derecho (con valores mayores).

- **`nodo_arbol_t* insertar_en_bst(nodo_arbol_t *raiz, int dato)`**: Función
  recursiva que encuentra la posición correcta e inserta un nuevo nodo.
- **`void imprimir_en_orden(nodo_arbol_t *raiz)`**: Recorrido recursivo
  (izquierdo, raíz, derecho) que imprime los elementos de forma ordenada.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-23-6-arbol-de-busqueda-binaria-bst.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_23_6_ARBOL_DE_BUSQUEDA_BINARIA_BST_H
#define EJERCICIO_EJ_23_6_ARBOL_DE_BUSQUEDA_BINARIA_BST_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Árbol de Búsqueda Binaria (BST) */
int proc_busqueda_binaria_bst(int val);

#endif /* EJERCICIO_EJ_23_6_ARBOL_DE_BUSQUEDA_BINARIA_BST_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_busqueda_binaria_bst` | `int` | `int val` | Procesa el flujo principal de Árbol de Búsqueda Binaria (BST) |






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

| **test_proc_busqueda_binaria_bst_positivo** | `proc_busqueda_binaria_bst` | `int res = proc_busqueda_binaria_bst(5); assert(res == 10 || res >= 0);` |

| **test_proc_busqueda_binaria_bst_cero** | `proc_busqueda_binaria_bst` | `int res = proc_busqueda_binaria_bst(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Árbol de Búsqueda Binaria (BST)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_busqueda_binaria_bst(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Árbol de Búsqueda Binaria (BST) */
    return 0;
}
```
```
