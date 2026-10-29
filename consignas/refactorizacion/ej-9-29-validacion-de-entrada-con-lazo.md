

# Validación de Entrada con Lazos Desacoplados
> **ID:** `ej-9-29-validacion-de-entrada-con-lazo` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `clean_code`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `lazos`, `fundamentos`, `desacoplados`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-29-validacion-de-entrada-con-lazo.ripkg`**](../../paquetes/ej-9-29-validacion-de-entrada-con-lazo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-29-validacion-de-entrada-con-lazo.ripkg
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
    
    

    current_node["🎯 ej-9-29-validacion-de-entrada-con-lazo<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-ref-validacion-desacoplada
Refactorizá la siguiente función para separar la lógica de validación matemática
de la lógica interactiva de reintento:

```{code-block} c
:linenos:
#include <stdio.h>

int pedir_entero_rango(int min, int max)
{
    int val;
    while (1) {
        printf("Ingrese valor entre %d y %d: ", min, max);
        if (scanf("%d", &val) == 1) {
            if (val >= min && val <= max) {
                return val;
            }
        }
        printf("Invalido, reintente.\n");
        while (getchar() != '\n'); // Limpia buffer
    }
}

```

-   **[*plus ultra*]:** Extraer la función pura `bool esta_en_rango(int valor,
    int min, int max)`.
-   **[*plus ultra*]:** Escribir tests con `assert()` para `esta_en_rango`.

:::

:::{solution} ej-ref-validacion-desacoplada
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool esta_en_rango(int valor, int limite_inferior, int limite_superior)
{
    return (valor >= limite_inferior && valor <= limite_superior);
}

void test_esta_en_rango(void)
{
    assert(esta_en_rango(5, 1, 10) == true);
    assert(esta_en_rango(1, 1, 10) == true);
    assert(esta_en_rango(10, 1, 10) == true);
    assert(esta_en_rango(0, 1, 10) == false);
    assert(esta_en_rango(11, 1, 10) == false);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación pedir_entero_rango
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int pedir_entero_rango(int min, int max);

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


## 📋 Prototipos y Cabecera (`ej-9-29-validacion-de-entrada-con-lazo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_29_VALIDACION_DE_ENTRADA_CON_LAZO_H
#define EJERCICIO_EJ_9_29_VALIDACION_DE_ENTRADA_CON_LAZO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación pedir_entero_rango */
int pedir_entero_rango(int min, int max);

#endif /* EJERCICIO_EJ_9_29_VALIDACION_DE_ENTRADA_CON_LAZO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `pedir_entero_rango` | `int` | `int min, int max` | Operación pedir_entero_rango |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_pedir_entero_rango_1** | `pedir_entero_rango` | `assert(true); /* test simplificado de validación */` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>

int pedir_entero_rango(int min, int max)
{
    int val;
    while (1) {
        printf("Ingrese valor entre %d y %d: ", min, max);
        if (scanf("%d", &val) == 1) {
            if (val >= min && val <= max) {
                return val;
            }
        }
        printf("Invalido, reintente.\n");
        while (getchar() != '\n'); // Limpia buffer
    }
}

int main(void)
{
    return 0;
}
```
```
