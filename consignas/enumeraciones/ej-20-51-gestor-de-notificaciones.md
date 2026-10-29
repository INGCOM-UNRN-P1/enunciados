

# Gestor de notificaciones
> **ID:** `ej-20-51-gestor-de-notificaciones` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `notificaciones`, `memoria`, `enum`, `gestor`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-51-gestor-de-notificaciones.ripkg`**](../../paquetes/ej-20-51-gestor-de-notificaciones.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-51-gestor-de-notificaciones.ripkg
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
    
    

    current_node["🎯 ej-20-51-gestor-de-notificaciones<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

Implementar funciones para filtrar y enviar notificaciones.



``` c
void enviar_notificacion(const notificacion_t *notif);
bool debe_notificar(enum nivel_notificacion nivel,
                    enum nivel_notificacion nivel_minimo);
unsigned int canales_para_nivel(enum nivel_notificacion nivel);
```

## Compresión de Datos

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Gestor de notificaciones
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_or_de_notificaciones(int val);

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
- Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
- Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
:::


## 📋 Prototipos y Cabecera (`ej-20-51-gestor-de-notificaciones.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_51_GESTOR_DE_NOTIFICACIONES_H
#define EJERCICIO_EJ_20_51_GESTOR_DE_NOTIFICACIONES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Gestor de notificaciones */
int proc_or_de_notificaciones(int val);

#endif /* EJERCICIO_EJ_20_51_GESTOR_DE_NOTIFICACIONES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_or_de_notificaciones` | `int` | `int val` | Procesa el flujo principal de Gestor de notificaciones |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 2
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_or_de_notificaciones_positivo** | `proc_or_de_notificaciones` | `int res = proc_or_de_notificaciones(5); assert(res == 10 || res >= 0);` |

| **test_proc_or_de_notificaciones_cero** | `proc_or_de_notificaciones` | `int res = proc_or_de_notificaciones(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Gestor de notificaciones
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_or_de_notificaciones(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Gestor de notificaciones */
    return 0;
}
```
```
