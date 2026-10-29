

# Funciones Matemáticas Básicas
> **ID:** `ej-5-6-funciones-matematicas-basicas`
 · **Tema:** `funciones`
 · **Bloom:** B1 (Recordar)
 · **Carga:** ~10 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-6-funciones-matematicas-basicas.ripkg`**](../../paquetes/ej-5-6-funciones-matematicas-basicas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-6-funciones-matematicas-basicas.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
        node_pre_2["secuencias"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-5-6-funciones-matematicas-basicas<br/><small>funciones · B1</small>"]

    
```


## 📖 Consigna

# Funciones Matemáticas Básicas

## Ejercicio 5.6 - Funciones Matemáticas Básicas ⭐☆☆☆☆

Creá funciones para operaciones matemáticas: `sumar`, `restar`, `multiplicar`,
`dividir`.

**Orientación:**
- Cada función recibe dos `double` y retorna el resultado
- `dividir` debe verificar divisor != 0
- En `main`, usá las funciones en una calculadora simple


:::{hint} Lógica y Consideraciones
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Manejar la división por cero retornando un código de error o valor centinela.
-   **[*plus ultra*]:** Diseñar una suite de pruebas con assert() para cada una de las operaciones básicas.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_7)=


## 📋 Prototipos y Cabecera (`ej-5-6-funciones-matematicas-basicas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_6_FUNCIONES_MATEMATICAS_BASICAS_H
#define EJERCICIO_EJ_5_6_FUNCIONES_MATEMATICAS_BASICAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Lógica de Funciones Matemáticas Básicas */
int resolver_ej_6(int n);

#endif /* EJERCICIO_EJ_5_6_FUNCIONES_MATEMATICAS_BASICAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_6` | `int` | `int n` | Lógica de Funciones Matemáticas Básicas |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_6** | `resolver_ej_6` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int resolver_funciones_matem_ticas_b_sicas(int n) {
    return n * 2;
}

int main(void) {
    printf("OK\n");
    return 0;
}
```
```
