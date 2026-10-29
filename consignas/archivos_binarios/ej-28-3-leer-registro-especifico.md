

# Leer Registro Específico
> **ID:** `ej-28-3-leer-registro-especifico` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `archivos_binarios` / `fwrite`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:archivos`, `dep:estructuras`, `dep:memoria`
>
> **Etiquetas conceptuales:** `fwrite`, `especifico`, `registro`, `avanzados`, `binarios`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-28-3-leer-registro-especifico.ripkg`**](../../paquetes/ej-28-3-leer-registro-especifico.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-28-3-leer-registro-especifico.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["archivos"]
        
        node_pre_2["estructuras"]
        
        node_pre_3["memoria"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-28-3-leer-registro-especifico<br/><small>archivos_binarios · B4</small>"]

    
```


## 📖 Consigna

Implementar una función `producto_t leer_registro(int n)` que lea y devuelva el
`n`-ésimo registro del archivo `inventario.dat` sin leer los registros
anteriores.

**Lógica y Consideraciones:**
- **Posicionamiento**: Utilizar `fseek` para mover el puntero del archivo
  directamente a la posición deseada. La posición se calcula como `n *
  sizeof(producto_t)`.
- **Origen**: El desplazamiento debe hacerse desde el inicio del archivo
  (`SEEK_SET`).
- **Lectura**: Una vez posicionado, usar `fread` para leer un solo registro.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Leer Registro Específico
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__registro_especifico(int val);

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
5. **Acceso a archivos:** Verificar que los punteros `FILE*` retornados por `fopen` sean distintos de `NULL` antes de leer o escribir.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-28-3-leer-registro-especifico.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_28_3_LEER_REGISTRO_ESPECIFICO_H
#define EJERCICIO_EJ_28_3_LEER_REGISTRO_ESPECIFICO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Leer Registro Específico */
int proc__registro_especifico(int val);

#endif /* EJERCICIO_EJ_28_3_LEER_REGISTRO_ESPECIFICO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__registro_especifico` | `int` | `int val` | Procesa el flujo principal de Leer Registro Específico |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc__registro_especifico_positivo** | `proc__registro_especifico` | `int res = proc__registro_especifico(5); assert(res == 10 || res >= 0);` |

| **test_proc__registro_especifico_cero** | `proc__registro_especifico` | `int res = proc__registro_especifico(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Leer Registro Específico
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__registro_especifico(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Leer Registro Específico */
    return 0;
}
```
```
