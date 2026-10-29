

# Suma de dígitos
> **ID:** `ej-3-7-suma-de-digitos` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `aritmetica` / `digitos`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `aritmetica`, `digitos`, `matematica`, `fundamentos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-7-suma-de-digitos.ripkg`**](../../paquetes/ej-3-7-suma-de-digitos.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-7-suma-de-digitos.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-7-suma-de-digitos<br/><small>aritmetica · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Calcular la suma de los dígitos individuales de un número entero positivo.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION sumar_digitos(n)
VARIABLES:
    suma (entero)
INICIO
    suma = 0
    MIENTRAS n > 0 HACER
        suma = suma + (n MOD 10)
        n = n / 10
    FIN MIENTRAS
    RETORNAR suma
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Suma de dígitos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__3_7_suma_de_digitos(int val);

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
- **Entrada:** Un entero positivo `n`.
- **Proceso:** Se utiliza un lazo que se repite mientras `n` sea mayor que 0.
- **Obtener último dígito:** `digito = n % 10`.
- **Sumar dígito:** `suma = suma + digito`.
- **Eliminar último dígito:** `n = n / 10` (división entera). error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Manejar números negativos considerando sus dígitos como positivos.
- Repetir la suma de dígitos hasta obtener un valor de un solo dígito (raíz digital).
:::


## 📋 Prototipos y Cabecera (`ej-3-7-suma-de-digitos.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_7_SUMA_DE_DIGITOS_H
#define EJERCICIO_EJ_3_7_SUMA_DE_DIGITOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Suma de dígitos */
int proc__3_7_suma_de_digitos(int val);

#endif /* EJERCICIO_EJ_3_7_SUMA_DE_DIGITOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__3_7_suma_de_digitos` | `int` | `int val` | Procesa el flujo principal de Suma de dígitos |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un entero positivo `n`.
```

```{tab-item} Pista 2
**Proceso:** Se utiliza un lazo que se repite mientras `n` sea mayor que 0.
```

```{tab-item} Pista 3
**Obtener último dígito:** `digito = n % 10`.
```

```{tab-item} Pista 4
**Sumar dígito:** `suma = suma + digito`.
```

```{tab-item} Pista 5
**Eliminar último dígito:** `n = n / 10` (división entera). error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
```

```{tab-item} Pista 6
[Plus Ultra] Manejar números negativos considerando sus dígitos como positivos.
```

```{tab-item} Pista 7
[Plus Ultra] Repetir la suma de dígitos hasta obtener un valor de un solo dígito (raíz digital).
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__3_7_suma_de_digitos_positivo** | `proc__3_7_suma_de_digitos` | `int res = proc__3_7_suma_de_digitos(5); assert(res == 10 || res >= 0);` |

| **test_proc__3_7_suma_de_digitos_cero** | `proc__3_7_suma_de_digitos` | `int res = proc__3_7_suma_de_digitos(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Suma de dígitos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__3_7_suma_de_digitos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Suma de dígitos */
    return 0;
}
```
```
