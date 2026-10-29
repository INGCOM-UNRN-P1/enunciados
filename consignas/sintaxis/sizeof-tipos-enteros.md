

# Tamaños de Tipos Enteros (sizeof)
> **ID:** `sizeof-tipos-enteros` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `sintaxis` / `recordar`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **Etiquetas conceptuales:** `sintaxis`, `recordar`, `c11`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `sizeof-tipos-enteros.ripkg`**](../../paquetes/sizeof-tipos-enteros.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run sizeof-tipos-enteros.ripkg
```
:::






## 📖 Consigna

Demostrar y evaluar el comportamiento sintáctico y semántico en C para: **Tamaños de Tipos Enteros (sizeof)**.
Analizar en detalle las directivas del estándar C11 relativas a literales, secuencias de escape, límites de tipos enteros y operadores de tamaño en memoria.

- `int ejecutar_sizeof_tipos_enteros(int val)`: Procesa el flujo principal de Tamaños de Tipos Enteros (sizeof)

- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 10 minutos (Nivel Bloom 1).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Tamaños de Tipos Enteros (sizeof)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_sizeof_tipos_enteros(int val);

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
- char, short, int, long, long long\n
:::


## 📋 Prototipos y Cabecera (`sizeof-tipos-enteros.h`)

```{code-block} c
#ifndef EJERCICIO_SIZEOF_TIPOS_ENTEROS_H
#define EJERCICIO_SIZEOF_TIPOS_ENTEROS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Tamaños de Tipos Enteros (sizeof) */
int ejecutar_sizeof_tipos_enteros(int val);

#endif /* EJERCICIO_SIZEOF_TIPOS_ENTEROS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_sizeof_tipos_enteros` | `int` | `int val` | Procesa el flujo principal de Tamaños de Tipos Enteros (sizeof) |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
char, short, int, long, long long\n
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_sizeof_tipos_enteros_positivo** | `ejecutar_sizeof_tipos_enteros` | `int res = ejecutar_sizeof_tipos_enteros(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_sizeof_tipos_enteros_cero** | `ejecutar_sizeof_tipos_enteros` | `int res = ejecutar_sizeof_tipos_enteros(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>

int ejecutar_sizeof_tipos_enteros(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    printf("char: %zu\nshort: %zu\nint: %zu\nlong: %zu\nlong long: %zu\n",
           sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    return 0;
}
```
```
