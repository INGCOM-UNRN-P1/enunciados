

# Supresor de Falsos Positivos
> **ID:** `ej-15-20-b20-supresor-de-falsos-positiv` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `memoria`, `supresor`, `falsos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-20-b20-supresor-de-falsos-positiv.ripkg`**](../../paquetes/ej-15-20-b20-supresor-de-falsos-positiv.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-20-b20-supresor-de-falsos-positiv.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["punteros"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-15-20-b20-supresor-de-falsos-positiv<br/><small>memoria · B4</small>"]

    
```


## 📖 Consigna

Crear un archivo de supresión para Valgrind que ignore leaks conocidos de
bibliotecas del sistema:



```
{
   leak_ignorado_libc
   Memcheck:Leak
   ...
   obj:/lib/x86_64-linux-gnu/libc-*.so
}
```

Usar con: `valgrind --suppressions=mi_supresion.supp ./programa`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Supresor de Falsos Positivos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_or_de_falsos_positiv(int val);

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
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Verificar la correcta apertura del archivo y controlar errores de E/S con `ferror` y `feof`.
- Soportar rutas complejas y asegurar el cierre del archivo en todos los caminos de ejecución.
:::


## 📋 Prototipos y Cabecera (`ej-15-20-b20-supresor-de-falsos-positiv.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_20_B20_SUPRESOR_DE_FALSOS_POSITIV_H
#define EJERCICIO_EJ_15_20_B20_SUPRESOR_DE_FALSOS_POSITIV_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Supresor de Falsos Positivos */
int proc_or_de_falsos_positiv(int val);

#endif /* EJERCICIO_EJ_15_20_B20_SUPRESOR_DE_FALSOS_POSITIV_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_or_de_falsos_positiv` | `int` | `int val` | Procesa el flujo principal de Supresor de Falsos Positivos |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar la correcta apertura del archivo y controlar errores de E/S con `ferror` y `feof`.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar rutas complejas y asegurar el cierre del archivo en todos los caminos de ejecución.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_or_de_falsos_positiv_positivo** | `proc_or_de_falsos_positiv` | `int res = proc_or_de_falsos_positiv(5); assert(res == 10 || res >= 0);` |

| **test_proc_or_de_falsos_positiv_cero** | `proc_or_de_falsos_positiv` | `int res = proc_or_de_falsos_positiv(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.20 - Supresor de Falsos Positivos
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_or_de_falsos_positiv(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.20 - Supresor de Falsos Positivos */
    return 0;
}
```
```
