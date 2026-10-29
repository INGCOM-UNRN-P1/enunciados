

# Carga y muestra
> **ID:** `ej-10-1-carga-y-muestra` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `arreglos` / `memoria`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `arreglos`, `memoria`, `vectores`, `muestra`, `carga`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-1-carga-y-muestra.ripkg`**](../../paquetes/ej-10-1-carga-y-muestra.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-1-carga-y-muestra.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-10-1-carga-y-muestra<br/><small>arreglos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 10.1 - Carga y muestra ⭐⭐☆☆☆


Crear dos funciones complementarias para manejar arreglos: una para que el
usuario ingrese datos y llene un arreglo, y otra para mostrar el contenido del
arreglo de una forma clara y legible.

:::{hint} Lógica y Consideraciones

-   **`cargar_arreglo`:**
    -   **Entrada:** Un arreglo y su tamaño.
    -   **Proceso:** Usar un lazo `for` que itere desde 0 hasta `tamaño-1`. En
        cada iteración, solicitar al usuario un número y almacenarlo en la
        posición correspondiente del arreglo (`arreglo[i]`).
-   **`mostrar_arreglo`:**
    -   **Entrada:** Un arreglo y su tamaño.
    -   **Proceso:** Usar un lazo `for` para recorrer el arreglo.
    -   **Salida:** Imprimir los elementos de una forma legible, por ejemplo,
        entre corchetes y separados por comas.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO cargar_arreglo(REF arreglo, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        ESCRIBIR "Ingrese el elemento ", i, ":"
        LEER arreglo[i]
    FIN PARA
FIN PROCEDIMIENTO

PROCEDIMIENTO mostrar_arreglo(arreglo, tamano)
INICIO
    ESCRIBIR "[" SIN SALTO DE LÍNEA
    PARA i DESDE 0 HASTA tamano-1 HACER
        ESCRIBIR arreglo[i]
        SI i < tamano-1 ENTONCES
            ESCRIBIR ", " SIN SALTO DE LÍNEA
        FIN SI
    FIN PARA
    ESCRIBIR "]"
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->


## 📋 Prototipos y Cabecera (`ej-10-1-carga-y-muestra.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_1_CARGA_Y_MUESTRA_H
#define EJERCICIO_EJ_10_1_CARGA_Y_MUESTRA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Carga y muestra */
int proc_10_1_carga_y_muestra(int val);

#endif /* EJERCICIO_EJ_10_1_CARGA_Y_MUESTRA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_10_1_carga_y_muestra` | `int` | `int val` | Procesa el flujo principal de Carga y muestra |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**`cargar_arreglo`:**
```

```{tab-item} Pista 2
**Entrada:** Un arreglo y su tamaño.
```

```{tab-item} Pista 3
**Proceso:** Usar un lazo `for` que itere desde 0 hasta `tamaño-1`. En cada iteración, solicitar al usuario un número y almacenarlo en la posición correspondiente del arreglo (`arreglo[i]`).
```

```{tab-item} Pista 4
**`mostrar_arreglo`:**
```

```{tab-item} Pista 5
**Entrada:** Un arreglo y su tamaño.
```

```{tab-item} Pista 6
**Proceso:** Usar un lazo `for` para recorrer el arreglo.
```

```{tab-item} Pista 7
**Salida:** Imprimir los elementos de una forma legible, por ejemplo, entre corchetes y separados por comas.
```

```{tab-item} Pista 8
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 9
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_10_1_carga_y_muestra_positivo** | `proc_10_1_carga_y_muestra` | `int res = proc_10_1_carga_y_muestra(5); assert(res == 10 || res >= 0);` |

| **test_proc_10_1_carga_y_muestra_cero** | `proc_10_1_carga_y_muestra` | `int res = proc_10_1_carga_y_muestra(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Carga y muestra
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_10_1_carga_y_muestra(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Carga y muestra */
    return 0;
}
```
```
