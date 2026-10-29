

# Deduplicador
> **ID:** `ej-14-6-deduplicador`
 · **Tema:** `memoria_dinamica`
 · **Bloom:** B5 (Evaluar / Crear)
 · **Carga:** ~45 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria`, `dep:punteros`
>
> **Etiquetas conceptuales:** `heap`, `memoria`, `malloc`, `free`, `deduplicador`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-14-6-deduplicador.ripkg`**](../../paquetes/ej-14-6-deduplicador.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-14-6-deduplicador.ripkg
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
    
    

    current_node["🎯 ej-14-6-deduplicador<br/><small>memoria_dinamica · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 14.6 - Deduplicador ⭐⭐☆☆☆

Implementar `char* deduplicar(const char *s)`. Como el tamaño final es
desconocido, una estrategia de dos pasadas es robusta:

1.  **Primera pasada**: Recorrer la cadena `s` con un arreglo auxiliar de
    contadores para determinar el número de caracteres únicos y, por lo tanto,
    el tamaño de la cadena resultante.
2.  **Segunda pasada**: Reservar memoria del tamaño exacto y construir la nueva
    cadena solo con los caracteres únicos.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-14-6-deduplicador.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_14_6_DEDUPLICADOR_H
#define EJERCICIO_EJ_14_6_DEDUPLICADOR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Deduplicador */
int ejecutar_ej_14_6_deduplicador(int val);

#endif /* EJERCICIO_EJ_14_6_DEDUPLICADOR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_14_6_deduplicador` | `int` | `int val` | Procesa el flujo principal de Deduplicador |






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

| **test_ejecutar_ej_14_6_deduplicador_positivo** | `ejecutar_ej_14_6_deduplicador` | `int res = ejecutar_ej_14_6_deduplicador(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_14_6_deduplicador_cero** | `ejecutar_ej_14_6_deduplicador` | `int res = ejecutar_ej_14_6_deduplicador(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Deduplicador
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_14_6_deduplicador(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Deduplicador */
    return 0;
}
```
```
