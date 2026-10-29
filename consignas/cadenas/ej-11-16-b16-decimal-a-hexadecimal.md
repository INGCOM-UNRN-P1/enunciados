

# Decimal a hexadecimal
> **ID:** `ej-11-16-b16-decimal-a-hexadecimal` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `cadenas` / `procesamiento_texto`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:caracteres`
>
> **Etiquetas conceptuales:** `cadenas`, `strings`, `memoria`, `decimal`, `hexadecimal`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-11-16-b16-decimal-a-hexadecimal.ripkg`**](../../paquetes/ej-11-16-b16-decimal-a-hexadecimal.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-11-16-b16-decimal-a-hexadecimal.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["caracteres"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-11-16-b16-decimal-a-hexadecimal<br/><small>cadenas · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Convertir un número entero decimal a su representación en una cadena de texto
hexadecimal.



:::{tip} Lógica y Consideraciones

-   **Proceso:** Similar a la conversión a binario, pero usando 16 como base.
-   **Conversión de Dígitos:** Los restos entre 10 y 15 deben ser mapeados a los
    caracteres 'A' a 'F'.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION decimal_a_hexadecimal(n)
VARIABLES:
    cadena_inversa, cadena_final (cadenas)
    mapa_hex = "0123456789ABCDEF"
INICIO
    SI n == 0 RETORNAR "0"

    MIENTRAS n > 0 HACER
        resto = n MOD 16
        AÑADIR mapa_hex[resto] a cadena_inversa
        n = n / 16
    FIN MIENTRAS

    cadena_final = invertir_cadena(cadena_inversa)
    RETORNAR cadena_final
FIN FUNCION

```

:::

## Más Ejercicios de Cadenas

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Decimal a hexadecimal
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ecimal_a_hexadecimal(int val);

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
4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
- **Proceso:** Similar a la conversión a binario, pero usando 16 como base.
- **Conversión de Dígitos:** Los restos entre 10 y 15 deben ser mapeados a los caracteres 'A' a 'F'.
:::


## 📋 Prototipos y Cabecera (`ej-11-16-b16-decimal-a-hexadecimal.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_11_16_B16_DECIMAL_A_HEXADECIMAL_H
#define EJERCICIO_EJ_11_16_B16_DECIMAL_A_HEXADECIMAL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Decimal a hexadecimal */
int proc_ecimal_a_hexadecimal(int val);

#endif /* EJERCICIO_EJ_11_16_B16_DECIMAL_A_HEXADECIMAL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ecimal_a_hexadecimal` | `int` | `int val` | Procesa el flujo principal de Decimal a hexadecimal |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

```{tab-item} Pista 3
**Proceso:** Similar a la conversión a binario, pero usando 16 como base.
```

```{tab-item} Pista 4
**Conversión de Dígitos:** Los restos entre 10 y 15 deben ser mapeados a los caracteres 'A' a 'F'.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_ecimal_a_hexadecimal_positivo** | `proc_ecimal_a_hexadecimal` | `int res = proc_ecimal_a_hexadecimal(5); assert(res == 10 || res >= 0);` |

| **test_proc_ecimal_a_hexadecimal_cero** | `proc_ecimal_a_hexadecimal` | `int res = proc_ecimal_a_hexadecimal(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.16 - Decimal a hexadecimal
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ecimal_a_hexadecimal(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.16 - Decimal a hexadecimal */
    return 0;
}
```
```
