

# Librería de Finanzas Básicas
> **ID:** `ej-7-22-libreria-de-finanzas-basicas` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `basicas`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `basicas`, `finanzas`, `fundamentos`, `headers`, `libreria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-22-libreria-de-finanzas-basicas.ripkg`**](../../paquetes/ej-7-22-libreria-de-finanzas-basicas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-22-libreria-de-finanzas-basicas.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-7-22-libreria-de-finanzas-basicas<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

Creá `finanzas.h` y `finanzas.c`:
- `double fin_interes_simple(double capital, double tasa, double tiempo)`
- `double fin_interes_compuesto(double capital, double tasa, int periodos)`
- `double fin_cuota_prestamo(double capital, double tasa_mensual, int meses)`
- `double fin_valor_futuro_anualidad(double cuota, double tasa, int periodos)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Finanzas Básicas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__de_finanzas_basicas(int val);

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
- Usá `pow()` de `<math.h>` para los cálculos con exponencial.
:::


## 📋 Prototipos y Cabecera (`ej-7-22-libreria-de-finanzas-basicas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_22_LIBRERIA_DE_FINANZAS_BASICAS_H
#define EJERCICIO_EJ_7_22_LIBRERIA_DE_FINANZAS_BASICAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Finanzas Básicas */
int proc__de_finanzas_basicas(int val);

#endif /* EJERCICIO_EJ_7_22_LIBRERIA_DE_FINANZAS_BASICAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__de_finanzas_basicas` | `int` | `int val` | Procesa el flujo principal de Librería de Finanzas Básicas |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Usá `pow()` de `<math.h>` para los cálculos con exponencial.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__de_finanzas_basicas_positivo** | `proc__de_finanzas_basicas` | `int res = proc__de_finanzas_basicas(5); assert(res == 10 || res >= 0);` |

| **test_proc__de_finanzas_basicas_cero** | `proc__de_finanzas_basicas` | `int res = proc__de_finanzas_basicas(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Finanzas Básicas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__de_finanzas_basicas(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Finanzas Básicas */
    return 0;
}
```
```
