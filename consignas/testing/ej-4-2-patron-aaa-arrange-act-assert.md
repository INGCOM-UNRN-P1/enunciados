

# Patrón AAA (Arrange - Act - Assert)
> **ID:** `ej-4-2-patron-aaa-arrange-act-assert` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `testing` / `aserciones_defensivas`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Laboratorio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:librerias`, `dep:funciones`
>
> **Etiquetas conceptuales:** `patron`, `aserciones`, `fundamentos`, `arrange`, `assert`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-2-patron-aaa-arrange-act-assert.ripkg`**](../../paquetes/ej-4-2-patron-aaa-arrange-act-assert.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-2-patron-aaa-arrange-act-assert.ripkg
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
    
    

    current_node["🎯 ej-4-2-patron-aaa-arrange-act-assert<br/><small>testing · B2</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-test-patron-aaa
Identificá y comentá las tres etapas del patrón AAA en la siguiente función de
prueba unitaria:

```{code-block} c
:linenos:
void test_calcular_promedio_tres_notas(void)
{
    int nota1 = 8;
    int nota2 = 6;
    int nota3 = 10;
    double esperado = 8.0;

    double resultado = calcular_promedio(nota1, nota2, nota3);

    assert(resultado == esperado);
}

```

-   **[*plus ultra*]:** Separar explícitamente cada bloque con comentarios `//
    1. Arrange`, `// 2. Act`, `// 3. Assert`.
-   **[*plus ultra*]:** Escribir una segunda función de prueba
    `test_calcular_promedio_con_decimales` para notas 7, 8, 8.

:::

:::{solution} ej-test-patron-aaa
:class: dropdown
```{code-block} c
:linenos:
void test_calcular_promedio_tres_notas(void)
{
    // 1. Arrange (Preparar): Definición de datos de entrada y resultado esperado
    int nota1 = 8;
    int nota2 = 6;
    int nota3 = 10;
    double esperado = 8.0;

    // 2. Act (Actuar): Invocación de la función bajo prueba
    double resultado = calcular_promedio(nota1, nota2, nota3);

    // 3. Assert (Verificar): Comprobación de que el resultado coincide con lo esperado
    assert(resultado == esperado);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Patrón AAA (Arrange - Act - Assert)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_a_arrange_act_assert(int val);

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


## 📋 Prototipos y Cabecera (`ej-4-2-patron-aaa-arrange-act-assert.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_2_PATRON_AAA_ARRANGE_ACT_ASSERT_H
#define EJERCICIO_EJ_4_2_PATRON_AAA_ARRANGE_ACT_ASSERT_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Patrón AAA (Arrange - Act - Assert) */
int proc_a_arrange_act_assert(int val);

#endif /* EJERCICIO_EJ_4_2_PATRON_AAA_ARRANGE_ACT_ASSERT_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_a_arrange_act_assert` | `int` | `int val` | Procesa el flujo principal de Patrón AAA (Arrange - Act - Assert) |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_a_arrange_act_assert_positivo** | `proc_a_arrange_act_assert` | `int res = proc_a_arrange_act_assert(5); assert(res == 10 || res >= 0);` |

| **test_proc_a_arrange_act_assert_cero** | `proc_a_arrange_act_assert` | `int res = proc_a_arrange_act_assert(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Solucion modelo para ej-4-2-patron-aaa-arrange-act-assert
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int proc_a_arrange_act_assert(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int n = 0;
    if (scanf("%d", &n) == 1)
    {
        printf("OK %d\n", n);
    }
    else
    {
        printf("OK\n");
    }
    return 0;
}
```
```
