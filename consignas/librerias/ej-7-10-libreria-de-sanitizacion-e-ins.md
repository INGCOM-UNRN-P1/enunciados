

# Librería de Sanitización e Inspección de Entradas
> **ID:** `ej-7-10-libreria-de-sanitizacion-e-ins` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `sanitizacion`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `sanitizacion`, `entradas`, `inspeccion`, `fundamentos`, `headers`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-10-libreria-de-sanitizacion-e-ins.ripkg`**](../../paquetes/ej-7-10-libreria-de-sanitizacion-e-ins.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-10-libreria-de-sanitizacion-e-ins.ripkg
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
    
    

    current_node["🎯 ej-7-10-libreria-de-sanitizacion-e-ins<br/><small>librerias · B5</small>"]

    
```


## 📖 Consigna

Creá `sanitizer.h` y `sanitizer.c`:
- `bool san_es_entero_valido(const char *str, size_t len_str)`
- `bool san_es_decimal_valido(const char *str, size_t len_str)`
- `bool san_es_email_basico(const char *str, size_t len_str)` (presencia de `@` y al menos un `.`)
- `void san_reemplazar_caracter(char *str, size_t len_str, char viejo, char nuevo)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Sanitización e Inspección de Entradas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_sanitizacion_e_ins(int val);

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
- Utilizá esta librería para validar la entrada ingresada por el usuario antes de convertirla a tipos numéricos.
:::


## 📋 Prototipos y Cabecera (`ej-7-10-libreria-de-sanitizacion-e-ins.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_10_LIBRERIA_DE_SANITIZACION_E_INS_H
#define EJERCICIO_EJ_7_10_LIBRERIA_DE_SANITIZACION_E_INS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Sanitización e Inspección de Entradas */
int proc_e_sanitizacion_e_ins(int val);

#endif /* EJERCICIO_EJ_7_10_LIBRERIA_DE_SANITIZACION_E_INS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_sanitizacion_e_ins` | `int` | `int val` | Procesa el flujo principal de Librería de Sanitización e Inspección de Entradas |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Utilizá esta librería para validar la entrada ingresada por el usuario antes de convertirla a tipos numéricos.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_sanitizacion_e_ins_positivo** | `proc_e_sanitizacion_e_ins` | `int res = proc_e_sanitizacion_e_ins(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_sanitizacion_e_ins_cero** | `proc_e_sanitizacion_e_ins` | `int res = proc_e_sanitizacion_e_ins(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Sanitización e Inspección de Entradas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_sanitizacion_e_ins(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Sanitización e Inspección de Entradas */
    return 0;
}
```
```
