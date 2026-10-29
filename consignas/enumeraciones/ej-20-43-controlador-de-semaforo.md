

# Controlador de semáforo
> **ID:** `ej-20-43-controlador-de-semaforo` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `enum`, `semaforo`, `controlador`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-43-controlador-de-semaforo.ripkg`**](../../paquetes/ej-20-43-controlador-de-semaforo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-43-controlador-de-semaforo.ripkg
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
    
    

    current_node["🎯 ej-20-43-controlador-de-semaforo<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.43 - Controlador de semáforo ⭐⭐☆☆☆

Implementar la lógica de transición de un semáforo.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void actualizar_semaforo(semaforo_t *semaforo);
enum estado_semaforo siguiente_estado(enum estado_semaforo actual);
bool puede_pasar(const semaforo_t *semaforo, enum direccion_trafico direccion);
```
<!-- c -->

## Transacciones de Base de Datos


## 📋 Prototipos y Cabecera (`ej-20-43-controlador-de-semaforo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_43_CONTROLADOR_DE_SEMAFORO_H
#define EJERCICIO_EJ_20_43_CONTROLADOR_DE_SEMAFORO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Controlador de semáforo */
int proc_trolador_de_semaforo(int val);

#endif /* EJERCICIO_EJ_20_43_CONTROLADOR_DE_SEMAFORO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_trolador_de_semaforo` | `int` | `int val` | Procesa el flujo principal de Controlador de semáforo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
```

```{tab-item} Pista 2
[Plus Ultra] Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_trolador_de_semaforo_positivo** | `proc_trolador_de_semaforo` | `int res = proc_trolador_de_semaforo(5); assert(res == 10 || res >= 0);` |

| **test_proc_trolador_de_semaforo_cero** | `proc_trolador_de_semaforo` | `int res = proc_trolador_de_semaforo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Controlador de semáforo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_trolador_de_semaforo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Controlador de semáforo */
    return 0;
}
```
```
