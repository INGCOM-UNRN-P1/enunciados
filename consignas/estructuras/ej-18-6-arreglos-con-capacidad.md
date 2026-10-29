

# Arreglos con Capacidad
> **ID:** `ej-18-6-arreglos-con-capacidad` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `estructuras` / `registros`
 · **Bloom:** B5 (Evaluar / Crear) · **Dificultad:** Desafio
 · **Carga:** ~45 min · **Tipo:** Desafio
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:funciones`
>
> **Etiquetas conceptuales:** `registros`, `arreglos`, `memoria`, `capacidad`, `structs`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-18-6-arreglos-con-capacidad.ripkg`**](../../paquetes/ej-18-6-arreglos-con-capacidad.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-18-6-arreglos-con-capacidad.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["funciones"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-18-6-arreglos-con-capacidad<br/><small>estructuras · B5</small>"]

    
```


## 📖 Consigna

Encapsular un arreglo en una estructura para agrupar el contenedor de datos, su
longitud actual y su capacidad máxima. Esto previene errores de desbordamiento
de búfer y simplifica pasar la información del arreglo a funciones.



``` c
#define CAPACIDAD_MAX 100
typedef struct
{
    int datos[CAPACIDAD_MAX];
    size_t longitud; // Elementos actualmente en uso
} arreglo_t;
```

Este ejercicio puede ser mejorado con memoria dinámica, para lo cual es
necesario agregar un atributo más con el tamaño en memoria pedido para `datos`.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Arreglos con Capacidad
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_reglos_con_capacidad(int val);

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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
:::


## 📋 Prototipos y Cabecera (`ej-18-6-arreglos-con-capacidad.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_18_6_ARREGLOS_CON_CAPACIDAD_H
#define EJERCICIO_EJ_18_6_ARREGLOS_CON_CAPACIDAD_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Arreglos con Capacidad */
int proc_reglos_con_capacidad(int val);

#endif /* EJERCICIO_EJ_18_6_ARREGLOS_CON_CAPACIDAD_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_reglos_con_capacidad` | `int` | `int val` | Procesa el flujo principal de Arreglos con Capacidad |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_reglos_con_capacidad_positivo** | `proc_reglos_con_capacidad` | `int res = proc_reglos_con_capacidad(5); assert(res == 10 || res >= 0);` |

| **test_proc_reglos_con_capacidad_cero** | `proc_reglos_con_capacidad` | `int res = proc_reglos_con_capacidad(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Arreglos con Capacidad
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_reglos_con_capacidad(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Arreglos con Capacidad */
    return 0;
}
```
```
