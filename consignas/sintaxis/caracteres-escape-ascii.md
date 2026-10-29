

# Secuencias de Escape en Literales de Cadena
> **ID:** `caracteres-escape-ascii` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `sintaxis` / `recordar`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **Etiquetas conceptuales:** `sintaxis`, `recordar`, `c11`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `caracteres-escape-ascii.ripkg`**](../../paquetes/caracteres-escape-ascii.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run caracteres-escape-ascii.ripkg
```
:::






## 📖 Consigna

# Secuencias de Escape en Literales de Cadena

## 1. Consigna
Demostrar y evaluar el comportamiento sintáctico y semántico en C para: **Secuencias de Escape en Literales de Cadena**.
Analizar en detalle las directivas del estándar C11 relativas a literales, secuencias de escape, límites de tipos enteros y operadores de tamaño en memoria.

## 2. Firmas y Prototipos Requeridos
- `int proc_acteres_escape_ascii(int val)`: Procesa el flujo principal de Secuencias de Escape en Literales de Cadena

## 3. Requisitos y Consideraciones
- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 10 minutos (Nivel Bloom 1).


## 📋 Prototipos y Cabecera (`caracteres-escape-ascii.h`)

```{code-block} c
#ifndef EJERCICIO_CARACTERES_ESCAPE_ASCII_H
#define EJERCICIO_CARACTERES_ESCAPE_ASCII_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Secuencias de Escape en Literales de Cadena */
int proc_acteres_escape_ascii(int val);

#endif /* EJERCICIO_CARACTERES_ESCAPE_ASCII_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_acteres_escape_ascii` | `int` | `int val` | Procesa el flujo principal de Secuencias de Escape en Literales de Cadena |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Las secuencias de escape permiten representar caracteres no imprimibles o especiales.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_acteres_escape_ascii_positivo** | `proc_acteres_escape_ascii` | `int res = proc_acteres_escape_ascii(5); assert(res == 10 || res >= 0);` |

| **test_proc_acteres_escape_ascii_cero** | `proc_acteres_escape_ascii` | `int res = proc_acteres_escape_ascii(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>

int proc_acteres_escape_ascii(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    printf("Tab:\t[TAB]\nBackslash:\\[BS]\nQuote:\"[Q]\"\n");
    return 0;
}
```
```
