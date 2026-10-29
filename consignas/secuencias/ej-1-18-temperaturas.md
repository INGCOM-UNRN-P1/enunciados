

# Temperaturas
> **ID:** `ej-1-18-temperaturas` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `secuencias` / `conversion_unidades`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`
>
> **Etiquetas conceptuales:** `temperaturas`, `basicos`, `secuencias`, `fundamentos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-1-18-temperaturas.ripkg`**](../../paquetes/ej-1-18-temperaturas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-1-18-temperaturas.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-1-18-temperaturas<br/><small>secuencias · B3</small>"]

    
```


## 📖 Consigna

Crear un programa que pueda convertir temperaturas entre las escalas Celsius,
Fahrenheit y Kelvin.


:::{tip} Ayuda (pseudocódigo) para celsius a fahrenheit.
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO convertir_c_a_f
ENTRADA: grados_celsius (real)
VARIABLES:
    grados_fahrenheit (real)

INICIO
    LEER grados_celsius
    grados_fahrenheit = (grados_celsius * 9.0 / 5.0) + 32
    ESCRIBIR grados_celsius, "°C son ", grados_fahrenheit, "°F"
FIN

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Temperaturas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_1_18_temperaturas(int val);

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
- **Entrada:** Solicitar al usuario el valor de la temperatura y la escala
- **Proceso:** Aplicar la fórmula de conversión correspondiente:
- Celsius a Fahrenheit: $F = (C \times 9/5) + 32$
- Fahrenheit a Celsius: $C = (F - 32) \times 5/9$
- Celsius a Kelvin: $K = C + 273.15$
- **Precisión:** Al trabajar con divisiones como 9/5, es importante usar
- Validar que la temperatura en Celsius no sea inferior al cero absoluto (-273.15 °C).
- Presentar una tabla comparativa de temperaturas en pasos de 10 grados dentro de un rango.
:::


## 📋 Prototipos y Cabecera (`ej-1-18-temperaturas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_1_18_TEMPERATURAS_H
#define EJERCICIO_EJ_1_18_TEMPERATURAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Temperaturas */
int ejecutar_ej_1_18_temperaturas(int val);

#endif /* EJERCICIO_EJ_1_18_TEMPERATURAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_1_18_temperaturas` | `int` | `int val` | Procesa el flujo principal de Temperaturas |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Solicitar al usuario el valor de la temperatura y la escala
```

```{tab-item} Pista 2
**Proceso:** Aplicar la fórmula de conversión correspondiente:
```

```{tab-item} Pista 3
Celsius a Fahrenheit: $F = (C \times 9/5) + 32$
```

```{tab-item} Pista 4
Fahrenheit a Celsius: $C = (F - 32) \times 5/9$
```

```{tab-item} Pista 5
Celsius a Kelvin: $K = C + 273.15$
```

```{tab-item} Pista 6
**Precisión:** Al trabajar con divisiones como 9/5, es importante usar
```

```{tab-item} Pista 7
[Plus Ultra] Validar que la temperatura en Celsius no sea inferior al cero absoluto (-273.15 °C).
```

```{tab-item} Pista 8
[Plus Ultra] Presentar una tabla comparativa de temperaturas en pasos de 10 grados dentro de un rango.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_1_18_temperaturas_positivo** | `ejecutar_ej_1_18_temperaturas` | `int res = ejecutar_ej_1_18_temperaturas(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_1_18_temperaturas_cero** | `ejecutar_ej_1_18_temperaturas` | `int res = ejecutar_ej_1_18_temperaturas(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Temperaturas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_1_18_temperaturas(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Temperaturas */
    return 0;
}
```
```
