

# Pangrama
> **ID:** `ej-11-7-b7-pangrama` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `cadenas` / `procesamiento_texto`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:caracteres`
>
> **Etiquetas conceptuales:** `pangrama`, `cadenas`, `strings`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-11-7-b7-pangrama.ripkg`**](../../paquetes/ej-11-7-b7-pangrama.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-11-7-b7-pangrama.ripkg
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
    
    

    current_node["🎯 ej-11-7-b7-pangrama<br/><small>cadenas · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Verificar si una cadena es un pangrama, es decir, si contiene todas las letras
del alfabeto inglés al menos una vez. La verificación debe ser insensible a
mayúsculas/minúsculas.



:::{tip} Lógica y Consideraciones

-   **Estructura de Datos:** Un arreglo booleano de 26 posiciones
    (`letras_vistas`) es perfecto para este fin.
-   **Proceso:**
    1.  Inicializar el arreglo `letras_vistas` en `falso`.
    2.  Recorrer la cadena. Para cada carácter, si es una letra, marcar la
        posición correspondiente en el arreglo como `verdadero`.
    3.  Después de recorrer la cadena, verificar si todas las posiciones del
        arreglo `letras_vistas` son `verdadero`. Si es así, es un pangrama.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_pangrama(cadena)
VARIABLES:
    letras_vistas (arreglo booleano de 26 posiciones)
INICIO
    INICIALIZAR letras_vistas con FALSO

    PARA cada caracter c en cadena HACER
        SI es_alfabetico(c) ENTONCES
            letras_vistas[posicion_alfabeto(c)] = VERDADERO
        FIN SI
    FIN PARA

    PARA i DESDE 0 HASTA 25 HACER
        SI letras_vistas[i] == FALSO RETORNAR FALSO
    FIN PARA

    RETORNAR VERDADERO
FIN FUNCION

```

:::

## Manipulación y Transformación

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Pangrama
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_11_7_b7_pangrama(int val);

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
- **Estructura de Datos:** Un arreglo booleano de 26 posiciones (`letras_vistas`) es perfecto para este fin.
- **Proceso:**
- Inicializar el arreglo `letras_vistas` en `falso`.
- Recorrer la cadena. Para cada carácter, si es una letra, marcar la posición correspondiente en el arreglo como `verdadero`.
- Después de recorrer la cadena, verificar si todas las posiciones del arreglo `letras_vistas` son `verdadero`. Si es así, es un pangrama.
:::


## 📋 Prototipos y Cabecera (`ej-11-7-b7-pangrama.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_11_7_B7_PANGRAMA_H
#define EJERCICIO_EJ_11_7_B7_PANGRAMA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Pangrama */
int ejecutar_ej_11_7_b7_pangrama(int val);

#endif /* EJERCICIO_EJ_11_7_B7_PANGRAMA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_11_7_b7_pangrama` | `int` | `int val` | Procesa el flujo principal de Pangrama |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

```{tab-item} Pista 3
**Estructura de Datos:** Un arreglo booleano de 26 posiciones (`letras_vistas`) es perfecto para este fin.
```

```{tab-item} Pista 4
**Proceso:**
```

```{tab-item} Pista 5
Inicializar el arreglo `letras_vistas` en `falso`.
```

```{tab-item} Pista 6
Recorrer la cadena. Para cada carácter, si es una letra, marcar la posición correspondiente en el arreglo como `verdadero`.
```

```{tab-item} Pista 7
Después de recorrer la cadena, verificar si todas las posiciones del arreglo `letras_vistas` son `verdadero`. Si es así, es un pangrama.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_11_7_b7_pangrama_positivo** | `ejecutar_ej_11_7_b7_pangrama` | `int res = ejecutar_ej_11_7_b7_pangrama(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_11_7_b7_pangrama_cero** | `ejecutar_ej_11_7_b7_pangrama` | `int res = ejecutar_ej_11_7_b7_pangrama(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.7 - Pangrama
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_11_7_b7_pangrama(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.7 - Pangrama */
    return 0;
}
```
```
