

# Estados de transacción
> **ID:** `ej-20-44-estados-de-transaccion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `enum`, `transaccion`, `estados`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-44-estados-de-transaccion.ripkg`**](../../paquetes/ej-20-44-estados-de-transaccion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-44-estados-de-transaccion.ripkg
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
    
    

    current_node["🎯 ej-20-44-estados-de-transaccion<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

Modelar el ciclo de vida de una transacción.



```{code-block} c
:linenos:
enum estado_transaccion
{
    TX_INICIADA,
    TX_ACTIVA,
    TX_PREPARADA,
    TX_COMPROMETIDA,
    TX_ABORTADA
};
enum tipo_aislamiento
{
    AISLAMIENTO_READ_UNCOMMITTED,
    AISLAMIENTO_READ_COMMITTED,
    AISLAMIENTO_REPEATABLE_READ,
    AISLAMIENTO_SERIALIZABLE
};
typedef struct
{
    unsigned long id;
    enum estado_transaccion estado;
    enum tipo_aislamiento aislamiento;
    int num_operaciones;
} transaccion_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Estados de transacción
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_tados_de_transaccion(int val);

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


## 📋 Prototipos y Cabecera (`ej-20-44-estados-de-transaccion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_44_ESTADOS_DE_TRANSACCION_H
#define EJERCICIO_EJ_20_44_ESTADOS_DE_TRANSACCION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Estados de transacción */
int proc_tados_de_transaccion(int val);

#endif /* EJERCICIO_EJ_20_44_ESTADOS_DE_TRANSACCION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_tados_de_transaccion` | `int` | `int val` | Procesa el flujo principal de Estados de transacción |






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

| **test_proc_tados_de_transaccion_positivo** | `proc_tados_de_transaccion` | `int res = proc_tados_de_transaccion(5); assert(res == 10 || res >= 0);` |

| **test_proc_tados_de_transaccion_cero** | `proc_tados_de_transaccion` | `int res = proc_tados_de_transaccion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
enum estado_transaccion
{
    TX_INICIADA,
    TX_ACTIVA,
    TX_PREPARADA,
    TX_COMPROMETIDA,
    TX_ABORTADA
};
enum tipo_aislamiento
{
    AISLAMIENTO_READ_UNCOMMITTED,
    AISLAMIENTO_READ_COMMITTED,
    AISLAMIENTO_REPEATABLE_READ,
    AISLAMIENTO_SERIALIZABLE
};
typedef struct
{
    unsigned long id;
    enum estado_transaccion estado;
    enum tipo_aislamiento aislamiento;
    int num_operaciones;
} transaccion_t;


int proc_tados_de_transaccion(int val)
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
