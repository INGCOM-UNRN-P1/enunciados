

# Tabla de Multiplicar Formateada y Modularizada
> **ID:** `ej-9-30-tabla-de-multiplicar-formatead` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `clean_code`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `fundamentos`, `tabla`, `modularizada`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-30-tabla-de-multiplicar-formatead.ripkg`**](../../paquetes/ej-9-30-tabla-de-multiplicar-formatead.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-30-tabla-de-multiplicar-formatead.ripkg
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
    
    

    current_node["🎯 ej-9-30-tabla-de-multiplicar-formatead<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-ref-tabla-multiplicar-modular
Refactorizá la siguiente función que imprime tablas de multiplicar desacoplando
la generación del producto de la salida por pantalla:

```{code-block} c
:linenos:
#include <stdio.h>

void tabla(int n)
{
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

```

-   **[*plus ultra*]:** Implementar `int calcular_producto(int multiplicando,
    int multiplicador)`.
-   **[*plus ultra*]:** Formatear las columnas en `imprimir_tabla` con ancho
    fijo `%2d x %2d = %4d`.

:::

:::{solution} ej-ref-tabla-multiplicar-modular
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdio.h>

int calcular_producto(int multiplicando, int multiplicador)
{
    return multiplicando * multiplicador;
}

void imprimir_tabla_multiplicar(int numero)
{
    for (int factor = 1; factor <= 10; factor++)
    {
        int resultado = calcular_producto(numero, factor);
        printf("%2d x %2d = %4d\n", numero, factor, resultado);
    }
}

void test_calcular_producto(void)
{
    assert(calcular_producto(7, 8) == 56);
    assert(calcular_producto(0, 5) == 0);
    assert(calcular_producto(-3, 4) == -12);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación tabla
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void tabla(int n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
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


## 📋 Prototipos y Cabecera (`ej-9-30-tabla-de-multiplicar-formatead.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_30_TABLA_DE_MULTIPLICAR_FORMATEAD_H
#define EJERCICIO_EJ_9_30_TABLA_DE_MULTIPLICAR_FORMATEAD_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación tabla */
void tabla(int n);

#endif /* EJERCICIO_EJ_9_30_TABLA_DE_MULTIPLICAR_FORMATEAD_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `tabla` | `void` | `int n` | Operación tabla |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_tabla_1** | `tabla` | `/* Verificación unitaria de tabla */ tabla(1); assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>

void tabla(int n)
{
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

int main(void)
{
    return 0;
}
```
```
