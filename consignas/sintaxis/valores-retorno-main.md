

# Códigos de Retorno EXIT_SUCCESS y EXIT_FAILURE
> **ID:** `valores-retorno-main` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `sintaxis` / `recordar`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **Etiquetas conceptuales:** `sintaxis`, `recordar`, `c11`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `valores-retorno-main.ripkg`**](../../paquetes/valores-retorno-main.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run valores-retorno-main.ripkg
```
:::






## 📖 Consigna

Escribir un programa que evalúe un parámetro de entrada y devuelva EXIT_SUCCESS (0) o EXIT_FAILURE (1) de <stdlib.h>.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Códigos de Retorno EXIT_SUCCESS y EXIT_FAILURE
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_valores_retorno_main(int val);

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
- Usar las macros estándar de stdlib.h.
:::


## 📋 Prototipos y Cabecera (`valores-retorno-main.h`)

```{code-block} c
#ifndef EJERCICIO_VALORES_RETORNO_MAIN_H
#define EJERCICIO_VALORES_RETORNO_MAIN_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Códigos de Retorno EXIT_SUCCESS y EXIT_FAILURE */
int ejecutar_valores_retorno_main(int val);

#endif /* EJERCICIO_VALORES_RETORNO_MAIN_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_valores_retorno_main` | `int` | `int val` | Procesa el flujo principal de Códigos de Retorno EXIT_SUCCESS y EXIT_FAILURE |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Usar las macros estándar de stdlib.h.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_valores_retorno_main_positivo** | `ejecutar_valores_retorno_main` | `int res = ejecutar_valores_retorno_main(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_valores_retorno_main_cero** | `ejecutar_valores_retorno_main` | `int res = ejecutar_valores_retorno_main(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int ejecutar_valores_retorno_main(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int v = 0;
    if (scanf("%d", &v) == 1 && v >= 0) {
        printf("EXIT_SUCCESS\n");
        return EXIT_SUCCESS;
    }
    printf("EXIT_FAILURE\n");
    return EXIT_FAILURE;
}
```
```
