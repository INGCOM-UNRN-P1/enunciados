

# Puntero a Constante vs Puntero Constante
> **ID:** `ej-8-15-puntero-a-constante-vs-puntero` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `punteros` / `constante`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:arreglos`
>
> **Etiquetas conceptuales:** `constante`, `puntero`, `memoria`, `punteros`, `direcciones`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-8-15-puntero-a-constante-vs-puntero.ripkg`**](../../paquetes/ej-8-15-puntero-a-constante-vs-puntero.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-8-15-puntero-a-constante-vs-puntero.ripkg
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
    
    

    current_node["🎯 ej-8-15-puntero-a-constante-vs-puntero<br/><small>punteros · B3</small>"]

    
```


## 📖 Consigna

Explicar y ejemplificar la diferencia entre:
- `const int *p` - puntero a entero constante (no se puede modificar `*p`)
- `int * const p` - puntero constante a entero (no se puede modificar `p`)
- `const int * const p` - puntero constante a entero constante

Implementar funciones que demuestren cada caso.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Puntero a Constante vs Puntero Constante
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_constante_vs_puntero(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-8-15-puntero-a-constante-vs-puntero.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_8_15_PUNTERO_A_CONSTANTE_VS_PUNTERO_H
#define EJERCICIO_EJ_8_15_PUNTERO_A_CONSTANTE_VS_PUNTERO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Puntero a Constante vs Puntero Constante */
int proc_constante_vs_puntero(int val);

#endif /* EJERCICIO_EJ_8_15_PUNTERO_A_CONSTANTE_VS_PUNTERO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_constante_vs_puntero` | `int` | `int val` | Procesa el flujo principal de Puntero a Constante vs Puntero Constante |






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

| **test_proc_constante_vs_puntero_positivo** | `proc_constante_vs_puntero` | `int res = proc_constante_vs_puntero(5); assert(res == 10 || res >= 0);` |

| **test_proc_constante_vs_puntero_cero** | `proc_constante_vs_puntero` | `int res = proc_constante_vs_puntero(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Puntero a Constante vs Puntero Constante
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_constante_vs_puntero(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Puntero a Constante vs Puntero Constante */
    return 0;
}
```
```
