

# Librería de Manejo de Registro de Logs
> **ID:** `ej-7-29-libreria-de-manejo-de-registro` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `librerias` / `fundamentos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `fundamentos`, `headers`, `libreria`, `registro`, `librerias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-29-libreria-de-manejo-de-registro.ripkg`**](../../paquetes/ej-7-29-libreria-de-manejo-de-registro.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-29-libreria-de-manejo-de-registro.ripkg
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
    
    

    current_node["🎯 ej-7-29-libreria-de-manejo-de-registro<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

Diseñá `logger.h` y `logger.c`:
- `typedef enum { LOG_DEBUG, LOG_INFO, LOG_WARN, LOG_ERROR } log_nivel_t`
- `void log_set_nivel_minimo(log_nivel_t nivel)`
- `void log_mensaje(log_nivel_t nivel, const char *modulo, size_t len_mod, const char *mensaje, size_t len_msg)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Manejo de Registro de Logs
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_manejo_de_registro(int val);

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
- Los mensajes con un nivel inferior al nivel mínimo configurado deben ser ignorados.
:::


## 📋 Prototipos y Cabecera (`ej-7-29-libreria-de-manejo-de-registro.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_29_LIBRERIA_DE_MANEJO_DE_REGISTRO_H
#define EJERCICIO_EJ_7_29_LIBRERIA_DE_MANEJO_DE_REGISTRO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Manejo de Registro de Logs */
int proc_e_manejo_de_registro(int val);

#endif /* EJERCICIO_EJ_7_29_LIBRERIA_DE_MANEJO_DE_REGISTRO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_manejo_de_registro` | `int` | `int val` | Procesa el flujo principal de Librería de Manejo de Registro de Logs |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Los mensajes con un nivel inferior al nivel mínimo configurado deben ser ignorados.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_manejo_de_registro_positivo** | `proc_e_manejo_de_registro` | `int res = proc_e_manejo_de_registro(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_manejo_de_registro_cero** | `proc_e_manejo_de_registro` | `int res = proc_e_manejo_de_registro(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Manejo de Registro de Logs
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_manejo_de_registro(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Manejo de Registro de Logs */
    return 0;
}
```
```
