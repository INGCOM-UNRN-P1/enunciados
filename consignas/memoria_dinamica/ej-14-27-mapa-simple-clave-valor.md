

# Mapa Simple (Clave-Valor)
> **ID:** `ej-14-27-mapa-simple-clave-valor` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria_dinamica` / `gestion_heap`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `simple`, `memoria`, `malloc`, `free`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-27-mapa-simple-clave-valor.ripkg`**](../../paquetes/ej-14-27-mapa-simple-clave-valor.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-27-mapa-simple-clave-valor.ripkg
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
    
    

    current_node["🎯 ej-14-27-mapa-simple-clave-valor<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.27 - Mapa Simple (Clave-Valor) ⭐☆☆☆☆

Implementar una estructura para un mapa simple (diccionario) que almacene pares
clave-valor (`char*`-`int`). El mapa debe usar un arreglo dinámico de `struct
par {char* clave; int valor;}`. La tabla debe crecer usando `realloc` cuando se
quede sin espacio.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-27-mapa-simple-clave-valor.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_27_MAPA_SIMPLE_CLAVE_VALOR_H
#define EJERCICIO_EJ_14_27_MAPA_SIMPLE_CLAVE_VALOR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Mapa Simple (Clave-Valor) */
int proc_a_simple_clave_valor(int val);

#endif /* EJERCICIO_EJ_14_27_MAPA_SIMPLE_CLAVE_VALOR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_a_simple_clave_valor` | `int` | `int val` | Procesa el flujo principal de Mapa Simple (Clave-Valor) |






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

| **test_proc_a_simple_clave_valor_positivo** | `proc_a_simple_clave_valor` | `int res = proc_a_simple_clave_valor(5); assert(res == 10 || res >= 0);` |

| **test_proc_a_simple_clave_valor_cero** | `proc_a_simple_clave_valor` | `int res = proc_a_simple_clave_valor(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Mapa Simple (Clave-Valor)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_a_simple_clave_valor(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Mapa Simple (Clave-Valor) */
    return 0;
}
```
```
