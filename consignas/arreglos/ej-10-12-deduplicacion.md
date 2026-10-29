

# Deduplicación
> **ID:** `ej-10-12-deduplicacion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `arreglos` / `vectores`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `vectores`, `arreglos`, `deduplicacion`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-12-deduplicacion.ripkg`**](../../paquetes/ej-10-12-deduplicacion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-12-deduplicacion.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-10-12-deduplicacion<br/><small>arreglos · B4</small>"]

    
```


## 📖 Consigna

Eliminar los elementos duplicados de un arreglo, conservando solo la primera
aparición de cada elemento. La función debe modificar el arreglo _in-place_ y
devolver el nuevo tamaño lógico.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION deduplicar_arreglo(REF arreglo, tamano)
INICIO
    SI tamano == 0 RETORNAR 0

    ORDENAR(arreglo, tamano)

    indice_escritura = 1
    PARA i DESDE 1 HASTA tamano-1 HACER
        SI arreglo[i] != arreglo[i-1] ENTONCES
            arreglo[indice_escritura] = arreglo[i]
            indice_escritura = indice_escritura + 1
        FIN SI
    FIN PARA
    RETORNAR indice_escritura
FIN FUNCION

```

:::

## Verificación

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Deduplicación
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__10_12_deduplicacion(int val);

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
- **Entrada:** Un arreglo y su tamaño.
- **Proceso (si el orden no importa):** Ordenar el arreglo primero. Luego, recorrerlo con dos punteros (`lectura` y `escritura`). Si el elemento actual es diferente al anterior, se copia a la posición de `escritura` y se avanza `escritura`.
- **Proceso (si el orden importa):** Usar un lazo anidado o una estructura de datos auxiliar (como un hash set) para llevar un registro de los elementos ya vistos.
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-10-12-deduplicacion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_12_DEDUPLICACION_H
#define EJERCICIO_EJ_10_12_DEDUPLICACION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Deduplicación */
int proc__10_12_deduplicacion(int val);

#endif /* EJERCICIO_EJ_10_12_DEDUPLICACION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__10_12_deduplicacion` | `int` | `int val` | Procesa el flujo principal de Deduplicación |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Un arreglo y su tamaño.
```

```{tab-item} Pista 2
**Proceso (si el orden no importa):** Ordenar el arreglo primero. Luego, recorrerlo con dos punteros (`lectura` y `escritura`). Si el elemento actual es diferente al anterior, se copia a la posición de `escritura` y se avanza `escritura`.
```

```{tab-item} Pista 3
**Proceso (si el orden importa):** Usar un lazo anidado o una estructura de datos auxiliar (como un hash set) para llevar un registro de los elementos ya vistos.
```

```{tab-item} Pista 4
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 5
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__10_12_deduplicacion_positivo** | `proc__10_12_deduplicacion` | `int res = proc__10_12_deduplicacion(5); assert(res == 10 || res >= 0);` |

| **test_proc__10_12_deduplicacion_cero** | `proc__10_12_deduplicacion` | `int res = proc__10_12_deduplicacion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Deduplicación
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__10_12_deduplicacion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Deduplicación */
    return 0;
}
```
```
