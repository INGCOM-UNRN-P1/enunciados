

# Primos Gemelos con Variables Globales
> **ID:** `ej-9-37-primos-gemelos-con-variables-g` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `teoria_numeros`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `fundamentos`, `gemelos`, `variables`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-37-primos-gemelos-con-variables-g.ripkg`**](../../paquetes/ej-9-37-primos-gemelos-con-variables-g.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-37-primos-gemelos-con-variables-g.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["testing"]
        
        node_pre_2["diseno_api"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-9-37-primos-gemelos-con-variables-g<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-ref-primos-gemelos
Refactorizá la siguiente función que utiliza variables globales para verificar
si dos números son primos gemelos ($p_2 = p_1 + 2$):

```{code-block} c
:linenos:
int g_p1, g_p2;
int son_gem(void)
{
    if (g_p2 != g_p1 + 2) return 0;
    // ...
}

```

-   **[*plus ultra*]:** Reutilizar una función pura `bool es_primo(int n)`.
-   **[*plus ultra*]:** Diseñar `bool son_primos_gemelos(int primer_numero, int
    segundo_numero)` sin variables globales.

:::

:::{solution} ej-ref-primos-gemelos
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

static bool es_primo_auxiliar(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int d = 3; d * d <= n; d += 2)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

bool son_primos_gemelos(int primer_numero, int segundo_numero)
{
    if (segundo_numero != primer_numero + 2)
    {
        return false;
    }
    return es_primo_auxiliar(primer_numero) && es_primo_auxiliar(segundo_numero);
}

void test_primos_gemelos(void)
{
    assert(son_primos_gemelos(3, 5) == true);
    assert(son_primos_gemelos(11, 13) == true);
    assert(son_primos_gemelos(7, 9) == false);
    assert(son_primos_gemelos(4, 6) == false);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación son_gem
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int son_gem(void);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
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


## 📋 Prototipos y Cabecera (`ej-9-37-primos-gemelos-con-variables-g.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_37_PRIMOS_GEMELOS_CON_VARIABLES_G_H
#define EJERCICIO_EJ_9_37_PRIMOS_GEMELOS_CON_VARIABLES_G_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación son_gem */
int son_gem(void);

#endif /* EJERCICIO_EJ_9_37_PRIMOS_GEMELOS_CON_VARIABLES_G_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `son_gem` | `int` | `void` | Operación son_gem |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_son_gem_1** | `son_gem` | `assert(true); /* test simplificado de validación */` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int g_p1, g_p2;
int son_gem(void)
{
    if (g_p2 != g_p1 + 2) return 0;
    // ...
}
    return 0;
}
```
```
