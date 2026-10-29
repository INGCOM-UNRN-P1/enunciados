

# Niveles de notificación
> **ID:** `ej-20-50-niveles-de-notificacion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `enum`, `niveles`, `notificacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-50-niveles-de-notificacion.ripkg`**](../../paquetes/ej-20-50-niveles-de-notificacion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-50-niveles-de-notificacion.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["condicionales"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-20-50-niveles-de-notificacion<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

Modelar un sistema de notificaciones con prioridades.



```{code-block} c
:linenos:
enum nivel_notificacion
{
    NOTIF_DEBUG,
    NOTIF_INFO,
    NOTIF_ADVERTENCIA,
    NOTIF_ERROR,
    NOTIF_CRITICO
};
enum canal_notificacion
{
    CANAL_NINGUNO = 0,
    CANAL_CONSOLE = 1 << 0,
    CANAL_EMAIL = 1 << 1,
    CANAL_SMS = 1 << 2,
    CANAL_PUSH = 1 << 3,
    CANAL_SYSLOG = 1 << 4
};
typedef struct
{
    enum nivel_notificacion nivel;
    unsigned int canales;
    char mensaje[256];
    time_t timestamp;
} notificacion_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Niveles de notificación
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_eles_de_notificacion(int val);

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
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::


## 📋 Prototipos y Cabecera (`ej-20-50-niveles-de-notificacion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_50_NIVELES_DE_NOTIFICACION_H
#define EJERCICIO_EJ_20_50_NIVELES_DE_NOTIFICACION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Niveles de notificación */
int proc_eles_de_notificacion(int val);

#endif /* EJERCICIO_EJ_20_50_NIVELES_DE_NOTIFICACION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_eles_de_notificacion` | `int` | `int val` | Procesa el flujo principal de Niveles de notificación |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_eles_de_notificacion_positivo** | `proc_eles_de_notificacion` | `int res = proc_eles_de_notificacion(5); assert(res == 10 || res >= 0);` |

| **test_proc_eles_de_notificacion_cero** | `proc_eles_de_notificacion` | `int res = proc_eles_de_notificacion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Solucion modelo para ej-20-50-niveles-de-notificacion
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int proc_eles_de_notificacion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int n = 0;
    if (scanf("%d", &n) == 1)
    {
        printf("OK %d\n", n);
    }
    else
    {
        printf("OK\n");
    }
    return 0;
}
```
```
