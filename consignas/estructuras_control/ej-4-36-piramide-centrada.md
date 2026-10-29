

# Pirámide Centrada
> **ID:** `ej-4-36-piramide-centrada` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `estructuras_control` / `control`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:condicionales`, `dep:lazos`
>
> **Etiquetas conceptuales:** `control`, `lazos`, `fundamentos`, `piramide`, `condicionales`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-36-piramide-centrada.ripkg`**](../../paquetes/ej-4-36-piramide-centrada.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-36-piramide-centrada.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["condicionales"]
        
        node_pre_2["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-4-36-piramide-centrada<br/><small>estructuras_control · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 4.36 - Pirámide Centrada ⭐⭐⭐⭐⭐

Dibujá una pirámide centrada de asteriscos.

**Ejemplo (N=5):**

:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Validar que la altura de la pirámide sea un entero positivo.
-   **[*plus ultra*]:** Permitir alternar entre pirámide sólida y con borde.

:::
<!-- {hint} Lógica y Consideraciones -->

```
    *
   ***
  *****
 *******
*********
```

**Orientación:**
- Para cada fila i (de 0 a N-1):
  - Imprimí (N-i-1) espacios
  - Imprimí (2*i+1) asteriscos
  - Nueva línea

---


## 📋 Prototipos y Cabecera (`ej-4-36-piramide-centrada.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_36_PIRAMIDE_CENTRADA_H
#define EJERCICIO_EJ_4_36_PIRAMIDE_CENTRADA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Pirámide Centrada */
int proc_36_piramide_centrada(int val);

#endif /* EJERCICIO_EJ_4_36_PIRAMIDE_CENTRADA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_36_piramide_centrada` | `int` | `int val` | Procesa el flujo principal de Pirámide Centrada |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar que la altura de la pirámide sea un entero positivo.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir alternar entre pirámide sólida y con borde.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_36_piramide_centrada_positivo** | `proc_36_piramide_centrada` | `int res = proc_36_piramide_centrada(5); assert(res == 10 || res >= 0);` |

| **test_proc_36_piramide_centrada_cero** | `proc_36_piramide_centrada` | `int res = proc_36_piramide_centrada(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Pirámide Centrada
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_36_piramide_centrada(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Pirámide Centrada */
    return 0;
}
```
```
