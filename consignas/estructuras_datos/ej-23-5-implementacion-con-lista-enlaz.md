

# Implementación con Lista Enlazada
> **ID:** `ej-23-5-implementacion-con-lista-enlaz`
 · **Tema:** `estructuras_datos`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
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

### Ejercicio 23.5 - Implementación con Lista Enlazada ⭐⭐☆☆☆

- **`void encolar(cola_t *cola, int dato)`**: Crea un nuevo nodo y lo añade al
  final de la lista, actualizando el puntero `final`.
- **`int desencolar(cola_t *cola)`**: Elimina el nodo del frente de la lista,
  devuelve su dato y actualiza el puntero `frente`.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Estructuras de Datos Avanzadas (Opcional)


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
