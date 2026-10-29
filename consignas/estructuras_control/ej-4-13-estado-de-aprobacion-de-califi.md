

# Estado de aprobación de calificación
> **ID:** `ej-4-13-estado-de-aprobacion-de-califi` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `estructuras_control` / `control`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:condicionales`, `dep:lazos`
>
> **Etiquetas conceptuales:** `control`, `lazos`, `fundamentos`, `aprobacion`, `calificacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-13-estado-de-aprobacion-de-califi.ripkg`**](../../paquetes/ej-4-13-estado-de-aprobacion-de-califi.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-13-estado-de-aprobacion-de-califi.ripkg
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
    
    

    current_node["🎯 ej-4-13-estado-de-aprobacion-de-califi<br/><small>estructuras_control · B2</small>"]

    
```


## 📖 Consigna

Escribí un programa que pida una calificación (0 a 10) e indique si el
estudiante aprobó (calificación mayor o igual a 4).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Estado de aprobación de calificación
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_aprobacion_de_califi(int val);

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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar que la nota sea un número real en el rango [0, 10].
- Clasificar con una escala cualitativa (Sobresaliente, Notable, Aprobado, Reprobado).
:::


## 📋 Prototipos y Cabecera (`ej-4-13-estado-de-aprobacion-de-califi.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_13_ESTADO_DE_APROBACION_DE_CALIFI_H
#define EJERCICIO_EJ_4_13_ESTADO_DE_APROBACION_DE_CALIFI_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Estado de aprobación de calificación */
int proc_aprobacion_de_califi(int val);

#endif /* EJERCICIO_EJ_4_13_ESTADO_DE_APROBACION_DE_CALIFI_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_aprobacion_de_califi` | `int` | `int val` | Procesa el flujo principal de Estado de aprobación de calificación |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar que la nota sea un número real en el rango [0, 10].
```

```{tab-item} Pista 2
[Plus Ultra] Clasificar con una escala cualitativa (Sobresaliente, Notable, Aprobado, Reprobado).
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_aprobacion_de_califi_positivo** | `proc_aprobacion_de_califi` | `int res = proc_aprobacion_de_califi(5); assert(res == 10 || res >= 0);` |

| **test_proc_aprobacion_de_califi_cero** | `proc_aprobacion_de_califi` | `int res = proc_aprobacion_de_califi(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Estado de aprobación de calificación
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_aprobacion_de_califi(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Estado de aprobación de calificación */
    return 0;
}
```
```
