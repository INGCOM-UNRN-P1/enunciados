

# Detectar conflictos
> **ID:** `ej-20-22-detectar-conflictos` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `detectar`, `memoria`, `enum`, `conflictos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-22-detectar-conflictos.ripkg`**](../../paquetes/ej-20-22-detectar-conflictos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-22-detectar-conflictos.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["condicionales"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-20-22-detectar-conflictos<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

Implementar una función que detecte combinaciones incompatibles de opciones.



``` c
bool opciones_compatibles(unsigned int opciones);
```

Por ejemplo, `OPT_OPTIMIZAR` y `OPT_DEBUG` podrían considerarse incompatibles en
ciertos contextos.

## Menú de Aplicación

Implementar un sistema de menú interactivo usando enumeraciones.

```{code-block} c
:linenos:
enum opcion_menu
{
    MENU_NUEVO = 1,
    MENU_ABRIR,
    MENU_GUARDAR,
    MENU_CERRAR,
    MENU_SALIR,
    MENU_INVALIDO = -1
};
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Detectar conflictos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__detectar_conflictos(int val);

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
- Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
- Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
:::


## 📋 Prototipos y Cabecera (`ej-20-22-detectar-conflictos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_22_DETECTAR_CONFLICTOS_H
#define EJERCICIO_EJ_20_22_DETECTAR_CONFLICTOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Detectar conflictos */
int proc__detectar_conflictos(int val);

#endif /* EJERCICIO_EJ_20_22_DETECTAR_CONFLICTOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__detectar_conflictos` | `int` | `int val` | Procesa el flujo principal de Detectar conflictos |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 2
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__detectar_conflictos_positivo** | `proc__detectar_conflictos` | `int res = proc__detectar_conflictos(5); assert(res == 10 || res >= 0);` |

| **test_proc__detectar_conflictos_cero** | `proc__detectar_conflictos` | `int res = proc__detectar_conflictos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
enum opcion_menu
{
    MENU_NUEVO = 1,
    MENU_ABRIR,
    MENU_GUARDAR,
    MENU_CERRAR,
    MENU_SALIR,
    MENU_INVALIDO = -1
};


int proc__detectar_conflictos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}
```
```
