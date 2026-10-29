

# Estados de semáforo
> **ID:** `ej-20-42-estados-de-semaforo` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `enum`, `estados`, `semaforo`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-42-estados-de-semaforo.ripkg`**](../../paquetes/ej-20-42-estados-de-semaforo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-42-estados-de-semaforo.ripkg
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
    
    

    current_node["🎯 ej-20-42-estados-de-semaforo<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

Modelar un sistema de semáforo de tráfico.



```{code-block} c
:linenos:
enum estado_semaforo
{
    SEMAFORO_ROJO,
    SEMAFORO_AMARILLO,
    SEMAFORO_VERDE,
    SEMAFORO_INTERMITENTE
};
enum direccion_trafico
{
    DIR_NORTE_SUR,
    DIR_ESTE_OESTE,
    DIR_TODAS
};
typedef struct
{
    enum estado_semaforo estado;
    enum direccion_trafico direccion_activa;
    int tiempo_restante; // Segundos
} semaforo_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Estados de semáforo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__estados_de_semaforo(int val);

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


## 📋 Prototipos y Cabecera (`ej-20-42-estados-de-semaforo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_42_ESTADOS_DE_SEMAFORO_H
#define EJERCICIO_EJ_20_42_ESTADOS_DE_SEMAFORO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Estados de semáforo */
int proc__estados_de_semaforo(int val);

#endif /* EJERCICIO_EJ_20_42_ESTADOS_DE_SEMAFORO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__estados_de_semaforo` | `int` | `int val` | Procesa el flujo principal de Estados de semáforo |






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

| **test_proc__estados_de_semaforo_positivo** | `proc__estados_de_semaforo` | `int res = proc__estados_de_semaforo(5); assert(res == 10 || res >= 0);` |

| **test_proc__estados_de_semaforo_cero** | `proc__estados_de_semaforo` | `int res = proc__estados_de_semaforo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
enum estado_semaforo
{
    SEMAFORO_ROJO,
    SEMAFORO_AMARILLO,
    SEMAFORO_VERDE,
    SEMAFORO_INTERMITENTE
};
enum direccion_trafico
{
    DIR_NORTE_SUR,
    DIR_ESTE_OESTE,
    DIR_TODAS
};
typedef struct
{
    enum estado_semaforo estado;
    enum direccion_trafico direccion_activa;
    int tiempo_restante; // Segundos
} semaforo_t;


int proc__estados_de_semaforo(int val)
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
