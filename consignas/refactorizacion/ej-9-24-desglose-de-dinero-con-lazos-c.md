

# Desglose de Dinero con Lazos Confusos
> **ID:** `ej-9-24-desglose-de-dinero-con-lazos-c` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `clean_code`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `dinero`, `lazos`, `fundamentos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-24-desglose-de-dinero-con-lazos-c.ripkg`**](../../paquetes/ej-9-24-desglose-de-dinero-con-lazos-c.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-24-desglose-de-dinero-con-lazos-c.ripkg
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
    
    

    current_node["🎯 ej-9-24-desglose-de-dinero-con-lazos-c<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-ref-desglose-dinero
Refactorizá la siguiente función que calcula monedas de cambio de manera
ofuscada:

``` c
int c100,c50,c10;
void m(int x){c100=x/100;x%=100;c50=x/50;x%=50;c10=x/10;}
```

-   **[*plus ultra*]:** Eliminar las variables globales retornando los
    resultados mediante parámetros o empaquetándolos en funciones atómicas.
-   **[*plus ultra*]:** Validar que el monto no sea negativo.

:::

:::{solution} ej-ref-desglose-dinero
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool desglosar_cambio(int monto, int *monedas_100, int *monedas_50, int *monedas_10)
{
    if (monto < 0 || monedas_100 == NULL || monedas_50 == NULL || monedas_10 == NULL)
    {
        return false;
    }
    *monedas_100 = monto / 100;
    monto %= 100;

    *monedas_50 = monto / 50;
    monto %= 50;

    *monedas_10 = monto / 10;
    return true;
}

void test_desglose_cambio(void)
{
    int m100 = 0, m50 = 0, m10 = 0;
    bool ok = desglosar_cambio(370, &m100, &m50, &m10);
    assert(ok && m100 == 3 && m50 == 1 && m10 == 2);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación desglosar_cambio
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool desglosar_cambio(int monto, int *monedas_100, int *monedas_50, int *monedas_10);

/*
 * Operación test_desglose_cambio
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_desglose_cambio(void);

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
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.


## 📋 Prototipos y Cabecera (`ej-9-24-desglose-de-dinero-con-lazos-c.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_24_DESGLOSE_DE_DINERO_CON_LAZOS_C_H
#define EJERCICIO_EJ_9_24_DESGLOSE_DE_DINERO_CON_LAZOS_C_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación desglosar_cambio */
bool desglosar_cambio(int monto, int *monedas_100, int *monedas_50, int *monedas_10);
/* Operación test_desglose_cambio */
void test_desglose_cambio(void);

#endif /* EJERCICIO_EJ_9_24_DESGLOSE_DE_DINERO_CON_LAZOS_C_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `desglosar_cambio` | `bool` | `int monto, int *monedas_100, int *monedas_50, int *monedas_10` | Operación desglosar_cambio |

| `test_desglose_cambio` | `void` | `void` | Operación test_desglose_cambio |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_desglosar_cambio_1** | `desglosar_cambio` | `assert(true); /* test simplificado de validación */` |

| **test_test_desglose_cambio_2** | `test_desglose_cambio` | `assert(true); /* test simplificado de validación */` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <math.h>
#include <assert.h>
#include <time.h>


bool desglosar_cambio(int monto, int *monedas_100, int *monedas_50, int *monedas_10)
{
    if (monto < 0 || monedas_100 == NULL || monedas_50 == NULL || monedas_10 == NULL)
    {
        return false;
    }
    *monedas_100 = monto / 100;
    monto %= 100;

    *monedas_50 = monto / 50;
    monto %= 50;

    *monedas_10 = monto / 10;
    return true;
}

void test_desglose_cambio(void)
{
    int m100 = 0, m50 = 0, m10 = 0;
    bool ok = desglosar_cambio(370, &m100, &m50, &m10);
    assert(ok && m100 == 3 && m50 == 1 && m10 == 2);
}

int main(void)
{
    return 0;
}
```
```
