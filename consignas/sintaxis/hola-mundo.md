

# ¡Hola mundo!
> **ID:** `hola-mundo`
 · **Tema:** `sintaxis`
 · **Bloom:** B1 (Recordar)
 · **Carga:** ~10 min
>
> **Etiquetas conceptuales:** `sintaxis`, `io`, `basico`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `hola-mundo.ripkg`**](../../paquetes/hola-mundo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run hola-mundo.ripkg
```
:::






## 📖 Consigna

# Ejercicio 1: ¡Hola mundo! ⭐☆☆☆☆
**Identificador:** `ejercicio1` | **Módulo:** Práctica 1

---

## 1. Consigna
El “Hola, mundo!” es el primer paso tradicional en el aprendizaje de un nuevo lenguaje de programación. El objetivo es escribir el programa más simple posible que produzca una salida visible en la pantalla, confirmando que el compilador y el entorno de desarrollo están configurados y funcionando correctamente.

Escribir un programa que imprima `"Hola, mundo!"` en la pantalla seguido de un salto de línea.

---

## 2. Entrada y Salida
- **Entrada (`stdin`):** Ninguna.
- **Salida (`stdout`):** El texto `Hola, mundo!` seguido de un salto de línea.

---

## 3. Ejemplo de Ejecución
```text
Salida:
Hola, mundo!
```


## 📋 Prototipos y Cabecera (`hola-mundo.h`)

```{code-block} c
#ifndef EJERCICIO_HOLA_MUNDO_H
#define EJERCICIO_HOLA_MUNDO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de ¡Hola mundo! */
int ejecutar_hola_mundo(int val);

#endif /* EJERCICIO_HOLA_MUNDO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_hola_mundo` | `int` | `int val` | Procesa el flujo principal de ¡Hola mundo! |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Recordá incluir <stdio.h> para disponer de la función printf.
```

```{tab-item} Pista 2
No olvides agregar el salto de línea \n al final del mensaje.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_hola_mundo_positivo** | `ejecutar_hola_mundo` | `int res = ejecutar_hola_mundo(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_hola_mundo_cero** | `ejecutar_hola_mundo` | `int res = ejecutar_hola_mundo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
Ejercicio 1.1 – Hola Mundo
Escribir un programa que imprima "Hola, mundo!" en la pantalla.
Este ejercicio nos permitirá verificar que el entorno de programación funciona.
-----------------
Docente Cátedra
catedra_p1
*/

#include <stdio.h>


int ejecutar_hola_mundo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    printf("Hola, mundo!\n");
    return 0;
}
```
```
