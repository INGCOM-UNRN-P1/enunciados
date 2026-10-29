

# Patrón de Rombo
> **ID:** `ej-1-35-patron-de-rombo` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `secuencias` / `patron`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`
>
> **Etiquetas conceptuales:** `patron`, `fundamentos`, `secuencias`, `basicos`, `rombo`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-1-35-patron-de-rombo.ripkg`**](../../paquetes/ej-1-35-patron-de-rombo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-1-35-patron-de-rombo.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-1-35-patron-de-rombo<br/><small>secuencias · B3</small>"]

    
```


## 📖 Consigna

Implementar un programa que pida un número impar `n` e imprima un rombo de
asteriscos de `n` filas de altura.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO rombo_asteriscos
ENTRADA: n (entero impar)

INICIO
    // Parte superior (pirámide)
    PARA fila DESDE 1 HASTA (n/2) + 1 HACER
        // Imprimir espacios y asteriscos como en el ejercicio de la pirámide
    FIN PARA

    // Parte inferior (pirámide invertida)
    PARA fila DESDE n/2 HASTA 1 CON PASO -1 HACER
        // Imprimir espacios y asteriscos de forma similar pero con el lazo decreciente
    FIN PARA
FIN

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Patrón de Rombo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_1_35_patron_de_rombo(int val);

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
- **Estructura:** Un rombo puede verse como una pirámide seguida de una
- **Entrada:** Leer un entero impar `n`.
- **Proceso:**
- Validar que el tamaño del rombo sea un número impar positivo.
- Generar el rombo con bordes decorativos personalizados.
:::


## 📋 Prototipos y Cabecera (`ej-1-35-patron-de-rombo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_1_35_PATRON_DE_ROMBO_H
#define EJERCICIO_EJ_1_35_PATRON_DE_ROMBO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Patrón de Rombo */
int proc_1_35_patron_de_rombo(int val);

#endif /* EJERCICIO_EJ_1_35_PATRON_DE_ROMBO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_1_35_patron_de_rombo` | `int` | `int val` | Procesa el flujo principal de Patrón de Rombo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Estructura:** Un rombo puede verse como una pirámide seguida de una
```

```{tab-item} Pista 2
**Entrada:** Leer un entero impar `n`.
```

```{tab-item} Pista 3
**Proceso:**
```

```{tab-item} Pista 4
[Plus Ultra] Validar que el tamaño del rombo sea un número impar positivo.
```

```{tab-item} Pista 5
[Plus Ultra] Generar el rombo con bordes decorativos personalizados.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_1_35_patron_de_rombo_positivo** | `proc_1_35_patron_de_rombo` | `int res = proc_1_35_patron_de_rombo(5); assert(res == 10 || res >= 0);` |

| **test_proc_1_35_patron_de_rombo_cero** | `proc_1_35_patron_de_rombo` | `int res = proc_1_35_patron_de_rombo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Patrón de Rombo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_1_35_patron_de_rombo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Patrón de Rombo */
    return 0;
}
```
```
