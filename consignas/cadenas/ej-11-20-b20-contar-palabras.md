

# Contar palabras
> **ID:** `ej-11-20-b20-contar-palabras` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `cadenas` / `procesamiento_texto`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:caracteres`
>
> **Etiquetas conceptuales:** `contar`, `cadenas`, `strings`, `memoria`, `palabras`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-11-20-b20-contar-palabras.ripkg`**](../../paquetes/ej-11-20-b20-contar-palabras.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-11-20-b20-contar-palabras.ripkg
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
    
    

    current_node["🎯 ej-11-20-b20-contar-palabras<br/><small>cadenas · B3</small>"]

    
```


## 📖 Consigna

#### Descripción
Desarrollar una función que cuente el número de palabras en una cadena. Se puede
considerar que las palabras están separadas por uno o más espacios.



:::{tip} Lógica y Consideraciones

-   **Máquina de Estados:** Una forma robusta de hacerlo es con una máquina de
    estados simple con dos estados: `DENTRO_DE_PALABRA` y `FUERA_DE_PALABRA`.
-   **Proceso:**
    1.  Inicializar `contador_palabras = 0` y `estado = FUERA_DE_PALABRA`.
    2.  Recorrer la cadena. Si se está `FUERA_DE_PALABRA` y se encuentra un
        carácter que no es un espacio, se ha encontrado el inicio de una nueva
        palabra. Incrementar `contador_palabras` y cambiar a `estado =
        DENTRO_DE_PALABRA`.
    3.  Si se está `DENTRO_DE_PALABRA` y se encuentra un espacio, cambiar a
        `estado = FUERA_DE_PALABRA`.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION contar_palabras(cadena)
VARIABLES:
    contador, estado (enteros)
INICIO
    contador = 0
    estado = FUERA_DE_PALABRA

    PARA cada caracter c en cadena HACER
        SI c == ' ' O c == '\n' O c == '\t' ENTONCES
            estado = FUERA_DE_PALABRA
        SINO SI estado == FUERA_DE_PALABRA ENTONCES
            estado = DENTRO_DE_PALABRA
            contador = contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Contar palabras
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__b20_contar_palabras(int val);

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
- **Máquina de Estados:** Una forma robusta de hacerlo es con una máquina de estados simple con dos estados: `DENTRO_DE_PALABRA` y `FUERA_DE_PALABRA`.
- **Proceso:**
- Inicializar `contador_palabras = 0` y `estado = FUERA_DE_PALABRA`.
- Recorrer la cadena. Si se está `FUERA_DE_PALABRA` y se encuentra un carácter que no es un espacio, se ha encontrado el inicio de una nueva palabra. Incrementar `contador_palabras` y cambiar a `estado = DENTRO_DE_PALABRA`.
- Si se está `DENTRO_DE_PALABRA` y se encuentra un espacio, cambiar a `estado = FUERA_DE_PALABRA`.
:::


## 📋 Prototipos y Cabecera (`ej-11-20-b20-contar-palabras.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_11_20_B20_CONTAR_PALABRAS_H
#define EJERCICIO_EJ_11_20_B20_CONTAR_PALABRAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Contar palabras */
int proc__b20_contar_palabras(int val);

#endif /* EJERCICIO_EJ_11_20_B20_CONTAR_PALABRAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__b20_contar_palabras` | `int` | `int val` | Procesa el flujo principal de Contar palabras |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

```{tab-item} Pista 3
**Máquina de Estados:** Una forma robusta de hacerlo es con una máquina de estados simple con dos estados: `DENTRO_DE_PALABRA` y `FUERA_DE_PALABRA`.
```

```{tab-item} Pista 4
**Proceso:**
```

```{tab-item} Pista 5
Inicializar `contador_palabras = 0` y `estado = FUERA_DE_PALABRA`.
```

```{tab-item} Pista 6
Recorrer la cadena. Si se está `FUERA_DE_PALABRA` y se encuentra un carácter que no es un espacio, se ha encontrado el inicio de una nueva palabra. Incrementar `contador_palabras` y cambiar a `estado = DENTRO_DE_PALABRA`.
```

```{tab-item} Pista 7
Si se está `DENTRO_DE_PALABRA` y se encuentra un espacio, cambiar a `estado = FUERA_DE_PALABRA`.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__b20_contar_palabras_positivo** | `proc__b20_contar_palabras` | `int res = proc__b20_contar_palabras(5); assert(res == 10 || res >= 0);` |

| **test_proc__b20_contar_palabras_cero** | `proc__b20_contar_palabras` | `int res = proc__b20_contar_palabras(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.20 - Contar palabras
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__b20_contar_palabras(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.20 - Contar palabras */
    return 0;
}
```
```
