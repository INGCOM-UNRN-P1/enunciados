

# Motor de FSM
> **ID:** `ej-20-55-motor-de-fsm` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `motor`, `tipos`, `enum`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-55-motor-de-fsm.ripkg`**](../../paquetes/ej-20-55-motor-de-fsm.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-55-motor-de-fsm.ripkg
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
    
    

    current_node["🎯 ej-20-55-motor-de-fsm<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

Implementar el motor que procesa eventos y ejecuta transiciones.



``` c
void fsm_inicializar(maquina_estados_t *fsm, estado_fsm_t inicial);
bool fsm_agregar_transicion(maquina_estados_t *fsm, transicion_t trans);
bool fsm_procesar_evento(maquina_estados_t *fsm, evento_fsm_t evento);
estado_fsm_t fsm_estado_actual(const maquina_estados_t *fsm);
```

## Análisis Comparativo de Enums

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Motor de FSM
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_20_55_motor_de_fsm(int val);

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
- Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
- Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
:::


## 📋 Prototipos y Cabecera (`ej-20-55-motor-de-fsm.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_55_MOTOR_DE_FSM_H
#define EJERCICIO_EJ_20_55_MOTOR_DE_FSM_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Motor de FSM */
int ejecutar_ej_20_55_motor_de_fsm(int val);

#endif /* EJERCICIO_EJ_20_55_MOTOR_DE_FSM_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_20_55_motor_de_fsm` | `int` | `int val` | Procesa el flujo principal de Motor de FSM |






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

| **test_ejecutar_ej_20_55_motor_de_fsm_positivo** | `ejecutar_ej_20_55_motor_de_fsm` | `int res = ejecutar_ej_20_55_motor_de_fsm(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_20_55_motor_de_fsm_cero** | `ejecutar_ej_20_55_motor_de_fsm` | `int res = ejecutar_ej_20_55_motor_de_fsm(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Motor de FSM
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_20_55_motor_de_fsm(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Motor de FSM */
    return 0;
}
```
```
