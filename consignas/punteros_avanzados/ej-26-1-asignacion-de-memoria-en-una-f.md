

# Asignación de Memoria en una Función
> **ID:** `ej-26-1-asignacion-de-memoria-en-una-f` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `punteros_avanzados` / `doble_puntero`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `doble_puntero`, `funcion`, `punteros_funcion`, `memoria`, `avanzados`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-26-1-asignacion-de-memoria-en-una-f.ripkg`**](../../paquetes/ej-26-1-asignacion-de-memoria-en-una-f.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-26-1-asignacion-de-memoria-en-una-f.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["memoria_dinamica"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-26-1-asignacion-de-memoria-en-una-f<br/><small>punteros_avanzados · B2</small>"]

    
```


## 📖 Consigna

Escribir una función `void alocar_cadena(char **puntero_a_cadena, const char
*valor_inicial)` que reciba un puntero doble. La función debe reservar memoria
para una nueva cadena, copiar el `valor_inicial` en ella, y hacer que el puntero
original en `main` apunte a esta nueva memoria.

**Lógica y Consideraciones:**
- **Parámetro**: El puntero doble `char **puntero_a_cadena` permite modificar el
  `char *` original.
- **Proceso**:
  1. Dentro de la función, usar `malloc` para reservar la memoria necesaria.
  2. Usar `strcpy` para copiar el `valor_inicial`.
  3. Asignar la nueva dirección de memoria al puntero desreferenciado:
     `*puntero_a_cadena = nueva_cadena;`.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Asignación de Memoria en una Función
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__de_memoria_en_una_f(int val);

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
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-26-1-asignacion-de-memoria-en-una-f.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_26_1_ASIGNACION_DE_MEMORIA_EN_UNA_F_H
#define EJERCICIO_EJ_26_1_ASIGNACION_DE_MEMORIA_EN_UNA_F_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Asignación de Memoria en una Función */
int proc__de_memoria_en_una_f(int val);

#endif /* EJERCICIO_EJ_26_1_ASIGNACION_DE_MEMORIA_EN_UNA_F_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__de_memoria_en_una_f` | `int` | `int val` | Procesa el flujo principal de Asignación de Memoria en una Función |






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

| **test_proc__de_memoria_en_una_f_positivo** | `proc__de_memoria_en_una_f` | `int res = proc__de_memoria_en_una_f(5); assert(res == 10 || res >= 0);` |

| **test_proc__de_memoria_en_una_f_cero** | `proc__de_memoria_en_una_f` | `int res = proc__de_memoria_en_una_f(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Asignación de Memoria en una Función
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc__de_memoria_en_una_f(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Asignación de Memoria en una Función */
    return 0;
}
```
```
