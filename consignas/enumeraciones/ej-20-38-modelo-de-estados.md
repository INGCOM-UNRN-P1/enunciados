

# Modelo de estados
> **ID:** `ej-20-38-modelo-de-estados` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `modelo`, `tipos`, `memoria`, `enum`, `estados`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-38-modelo-de-estados.ripkg`**](../../paquetes/ej-20-38-modelo-de-estados.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-38-modelo-de-estados.ripkg
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
    
    

    current_node["🎯 ej-20-38-modelo-de-estados<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.38 - Modelo de estados ⭐⭐⭐☆☆

Modelar el ciclo de vida de un proceso en un sistema operativo.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum estado_proceso
{
    PROCESO_NUEVO,
    PROCESO_LISTO,
    PROCESO_EJECUTANDO,
    PROCESO_BLOQUEADO,
    PROCESO_TERMINADO
};
enum razon_bloqueo
{
    BLOQ_IO,
    BLOQ_MUTEX,
    BLOQ_SEMAFORO,
    BLOQ_MENSAJE
};
typedef struct
{
    int pid;
    enum estado_proceso estado;
    enum razon_bloqueo razon; // Solo válido si estado == BLOQUEADO
    int prioridad;
} proceso_t;
```
<!-- {code-block} c -->


## 📋 Prototipos y Cabecera (`ej-20-38-modelo-de-estados.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_38_MODELO_DE_ESTADOS_H
#define EJERCICIO_EJ_20_38_MODELO_DE_ESTADOS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Modelo de estados */
int proc_38_modelo_de_estados(int val);

#endif /* EJERCICIO_EJ_20_38_MODELO_DE_ESTADOS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_38_modelo_de_estados` | `int` | `int val` | Procesa el flujo principal de Modelo de estados |






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

| **test_proc_38_modelo_de_estados_positivo** | `proc_38_modelo_de_estados` | `int res = proc_38_modelo_de_estados(5); assert(res == 10 || res >= 0);` |

| **test_proc_38_modelo_de_estados_cero** | `proc_38_modelo_de_estados` | `int res = proc_38_modelo_de_estados(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
enum estado_proceso
{
    PROCESO_NUEVO,
    PROCESO_LISTO,
    PROCESO_EJECUTANDO,
    PROCESO_BLOQUEADO,
    PROCESO_TERMINADO
};
enum razon_bloqueo
{
    BLOQ_IO,
    BLOQ_MUTEX,
    BLOQ_SEMAFORO,
    BLOQ_MENSAJE
};
typedef struct
{
    int pid;
    enum estado_proceso estado;
    enum razon_bloqueo razon; // Solo válido si estado == BLOQUEADO
    int prioridad;
} proceso_t;


int proc_38_modelo_de_estados(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}
```
```
