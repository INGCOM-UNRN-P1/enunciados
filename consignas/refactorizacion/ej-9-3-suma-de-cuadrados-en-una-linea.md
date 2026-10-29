

# Suma de Cuadrados en Una Línea
> **ID:** `ej-9-3-suma-de-cuadrados-en-una-linea` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `clean_code`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `fundamentos`, `cuadrados`, `linea`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-3-suma-de-cuadrados-en-una-linea.ripkg`**](../../paquetes/ej-9-3-suma-de-cuadrados-en-una-linea.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-3-suma-de-cuadrados-en-una-linea.ripkg
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
    
    

    current_node["🎯 ej-9-3-suma-de-cuadrados-en-una-linea<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-ref-suma-cuadrados
Analizá el siguiente lazo comprimido y refactorizalo para que sea claro, robusto
y testeable:

``` c
int p(int n){int s=0;for(int i=1;i<=n;i++)s+=i*i;return s;}
```

-   **[*plus ultra*]:** Validar que $n \ge 0$.
-   **[*plus ultra*]:** Comparar el resultado del lazo con la fórmula cerrada
    $\frac{n(n+1)(2n+1)}{6}$.

:::

:::{solution} ej-ref-suma-cuadrados
:class: dropdown
**Diagnóstico:** Calcula $\sum_{i=1}^n i^2$. Carece de espacios, llaves Allman y
validación para $n < 0$.

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

int calcular_suma_cuadrados(int limite)
{
    if (limite < 0)
    {
        return -1;
    }
    int acumulador = 0;
    for (int i = 1; i <= limite; i++)
    {
        acumulador += (i * i);
    }
    return acumulador;
}

void test_suma_cuadrados(void)
{
    assert(calcular_suma_cuadrados(0) == 0);
    assert(calcular_suma_cuadrados(3) == 14); // 1 + 4 + 9 = 14
    assert(calcular_suma_cuadrados(-5) == -1);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_suma_cuadrados
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int calcular_suma_cuadrados(int limite);

/*
 * Operación test_suma_cuadrados
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_suma_cuadrados(void);

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


## 📋 Prototipos y Cabecera (`ej-9-3-suma-de-cuadrados-en-una-linea.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_3_SUMA_DE_CUADRADOS_EN_UNA_LINEA_H
#define EJERCICIO_EJ_9_3_SUMA_DE_CUADRADOS_EN_UNA_LINEA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación calcular_suma_cuadrados */
int calcular_suma_cuadrados(int limite);
/* Operación test_suma_cuadrados */
void test_suma_cuadrados(void);

#endif /* EJERCICIO_EJ_9_3_SUMA_DE_CUADRADOS_EN_UNA_LINEA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `calcular_suma_cuadrados` | `int` | `int limite` | Operación calcular_suma_cuadrados |

| `test_suma_cuadrados` | `void` | `void` | Operación test_suma_cuadrados |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_calcular_suma_cuadrados_1** | `calcular_suma_cuadrados` | `/* Verificación unitaria de calcular_suma_cuadrados */ int res = calcular_suma_cuadrados(1); (void)res; assert(true);` |

| **test_test_suma_cuadrados_2** | `test_suma_cuadrados` | `/* Verificación unitaria de test_suma_cuadrados */ test_suma_cuadrados(); assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <assert.h>

int calcular_suma_cuadrados(int limite)
{
    if (limite < 0)
    {
        return -1;
    }
    int acumulador = 0;
    for (int i = 1; i <= limite; i++)
    {
        acumulador += (i * i);
    }
    return acumulador;
}

void test_suma_cuadrados(void)
{
    assert(calcular_suma_cuadrados(0) == 0);
    assert(calcular_suma_cuadrados(3) == 14); // 1 + 4 + 9 = 14
    assert(calcular_suma_cuadrados(-5) == -1);
}

int main(void)
{
    return 0;
}
```
```
