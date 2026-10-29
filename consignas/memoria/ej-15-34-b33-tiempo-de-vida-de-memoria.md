

# Tiempo de Vida de Memoria
> **ID:** `ej-15-34-b33-tiempo-de-vida-de-memoria` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `tiempo`, `layout`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-34-b33-tiempo-de-vida-de-memoria.ripkg`**](../../paquetes/ej-15-34-b33-tiempo-de-vida-de-memoria.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-34-b33-tiempo-de-vida-de-memoria.ripkg
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
    
    

    current_node["🎯 ej-15-34-b33-tiempo-de-vida-de-memoria<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.34 - b.33 - Tiempo de Vida de Memoria ⭐⭐☆☆☆

**Pregunta:** Clasificar las siguientes asignaciones según su tiempo de vida:
- Variable local
- Variable `static` local
- Variable global
- Memoria de `malloc`

**Respuestas:**
- Variable local: hasta el final del bloque
- Variable `static` local: toda la ejecución del programa (inicializada una vez)
- Variable global: toda la ejecución del programa
- Memoria de `malloc`: hasta el `free` correspondiente

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-15-34-b33-tiempo-de-vida-de-memoria.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_34_B33_TIEMPO_DE_VIDA_DE_MEMORIA_H
#define EJERCICIO_EJ_15_34_B33_TIEMPO_DE_VIDA_DE_MEMORIA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Tiempo de Vida de Memoria */
int proc_o_de_vida_de_memoria(int val);

#endif /* EJERCICIO_EJ_15_34_B33_TIEMPO_DE_VIDA_DE_MEMORIA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_o_de_vida_de_memoria` | `int` | `int val` | Procesa el flujo principal de Tiempo de Vida de Memoria |






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

| **test_proc_o_de_vida_de_memoria_positivo** | `proc_o_de_vida_de_memoria` | `int res = proc_o_de_vida_de_memoria(5); assert(res == 10 || res >= 0);` |

| **test_proc_o_de_vida_de_memoria_cero** | `proc_o_de_vida_de_memoria` | `int res = proc_o_de_vida_de_memoria(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.33 - Tiempo de Vida de Memoria
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_o_de_vida_de_memoria(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.33 - Tiempo de Vida de Memoria */
    return 0;
}
```
```
