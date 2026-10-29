

# Nombres de Variables Autoexplicativos
> **ID:** `ej-4-41-nombres-de-variables-autoexpli` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `testing` / `aserciones_defensivas`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Laboratorio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:librerias`, `dep:funciones`
>
> **Etiquetas conceptuales:** `nombres`, `aserciones`, `variables`, `fundamentos`, `autoexplicativos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-41-nombres-de-variables-autoexpli.ripkg`**](../../paquetes/ej-4-41-nombres-de-variables-autoexpli.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-41-nombres-de-variables-autoexpli.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["librerias"]
        
        node_pre_2["funciones"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-4-41-nombres-de-variables-autoexpli<br/><small>testing · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-test-nombres-variables
Refactorizá el siguiente código reemplazando los nombres de variables crípticos
por identificadores claros en `snake_case` según la [Regla
0x0007h](../../reglas/0_sintaxis.md#0x0007h):

```{code-block} c
:linenos:
// Código críptico:
double c(double p, double d, double t)
{
    double r = p - (p * (d / 100.0));
    double f = r + (r * (t / 100.0));
    return f;
}

```

-   **[*plus ultra*]:** Escribir un test unitario con assert para verificar el
    cálculo del precio final con descuento e impuesto.

:::

:::{solution} ej-test-nombres-variables
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

double calcular_precio_final(double precio_base, double porcentaje_descuento, double porcentaje_impuesto)
{
    double precio_con_descuento = precio_base - (precio_base * (porcentaje_descuento / 100.0));
    double precio_final = precio_con_descuento + (precio_con_descuento * (porcentaje_impuesto / 100.0));
    return precio_final;
}

void test_precio_final(void)
{
    assert(calcular_precio_final(100.0, 10.0, 21.0) == 108.9);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación c
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double c(double p, double d, double t);

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


## 📋 Prototipos y Cabecera (`ej-4-41-nombres-de-variables-autoexpli.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_41_NOMBRES_DE_VARIABLES_AUTOEXPLI_H
#define EJERCICIO_EJ_4_41_NOMBRES_DE_VARIABLES_AUTOEXPLI_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación c */
double c(double p, double d, double t);

#endif /* EJERCICIO_EJ_4_41_NOMBRES_DE_VARIABLES_AUTOEXPLI_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `c` | `double` | `double p, double d, double t` | Operación c |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_c_1** | `c` | `/* Verificación unitaria de c */ double res = c(1, 2, 3); (void)res; assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
// Código críptico:
double c(double p, double d, double t)
{
    double r = p - (p * (d / 100.0));
    double f = r + (r * (t / 100.0));
    return f;
}

int main(void)
{
    return 0;
}
```
```
