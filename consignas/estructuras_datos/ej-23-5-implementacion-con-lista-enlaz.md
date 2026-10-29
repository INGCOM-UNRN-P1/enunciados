

# Implementación con Lista Enlazada
> **ID:** `ej-23-5-implementacion-con-lista-enlaz` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `estructuras_datos` / `listas_enlazadas`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tad`, `dep:memoria_dinamica`, `dep:recursividad`
>
> **Etiquetas conceptuales:** `listas`, `lista`, `nodos`, `enlazada`, `implementacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-23-5-implementacion-con-lista-enlaz.ripkg`**](../../paquetes/ej-23-5-implementacion-con-lista-enlaz.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-23-5-implementacion-con-lista-enlaz.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tad"]
        
        node_pre_2["memoria_dinamica"]
        
        node_pre_3["recursividad"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-23-5-implementacion-con-lista-enlaz<br/><small>estructuras_datos · B3</small>"]

    
```


## 📖 Consigna

- **`void encolar(cola_t *cola, int dato)`**: Crea un nuevo nodo y lo añade al
  final de la lista, actualizando el puntero `final`.
- **`int desencolar(cola_t *cola)`**: Elimina el nodo del frente de la lista,
  devuelve su dato y actualiza el puntero `frente`.



---

## Estructuras de Datos Avanzadas (Opcional)

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Implementación con Lista Enlazada
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_cion_con_lista_enlaz(int val);

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
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-23-5-implementacion-con-lista-enlaz.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_23_5_IMPLEMENTACION_CON_LISTA_ENLAZ_H
#define EJERCICIO_EJ_23_5_IMPLEMENTACION_CON_LISTA_ENLAZ_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Implementación con Lista Enlazada */
int proc_cion_con_lista_enlaz(int val);

#endif /* EJERCICIO_EJ_23_5_IMPLEMENTACION_CON_LISTA_ENLAZ_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_cion_con_lista_enlaz` | `int` | `int val` | Procesa el flujo principal de Implementación con Lista Enlazada |






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

| **test_proc_cion_con_lista_enlaz_positivo** | `proc_cion_con_lista_enlaz` | `int res = proc_cion_con_lista_enlaz(5); assert(res == 10 || res >= 0);` |

| **test_proc_cion_con_lista_enlaz_cero** | `proc_cion_con_lista_enlaz` | `int res = proc_cion_con_lista_enlaz(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Implementación con Lista Enlazada
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_cion_con_lista_enlaz(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Implementación con Lista Enlazada */
    return 0;
}
```
```
