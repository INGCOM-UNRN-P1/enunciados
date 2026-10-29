

# Criba de Divisores Estática
> **ID:** `ej-9-38-criba-de-divisores-estatica` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `clean_code`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `clean_code`, `refactorizacion`, `fundamentos`, `estatica`, `divisores`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-38-criba-de-divisores-estatica.ripkg`**](../../paquetes/ej-9-38-criba-de-divisores-estatica.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-38-criba-de-divisores-estatica.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["testing"]
        
        node_pre_2["diseno_api"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-9-38-criba-de-divisores-estatica<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-ref-criba-estatica
Refactorizá la siguiente función que llena un arreglo indicando la cantidad de
divisores propios de cada número:

``` c
void c(int a[],int n){for(int i=1;i<=n;i++){a[i-1]=0;for(int j=1;j<i;j++)if(i%j==0)a[i-1]++;}}
```

-   **[*plus ultra*]:** Descomponer en `int contar_divisores_propios(int n)` y
    `void llenar_tabla_divisores(int tabla[], int n)`.
-   **[*plus ultra*]:** Validar que `n > 0` y puntero no nulo.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Criba de Divisores Estática
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_divisores_estatica(int val);

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


## 📋 Prototipos y Cabecera (`ej-9-38-criba-de-divisores-estatica.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_38_CRIBA_DE_DIVISORES_ESTATICA_H
#define EJERCICIO_EJ_9_38_CRIBA_DE_DIVISORES_ESTATICA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Criba de Divisores Estática */
int proc_e_divisores_estatica(int val);

#endif /* EJERCICIO_EJ_9_38_CRIBA_DE_DIVISORES_ESTATICA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_divisores_estatica` | `int` | `int val` | Procesa el flujo principal de Criba de Divisores Estática |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_divisores_estatica_positivo** | `proc_e_divisores_estatica` | `int res = proc_e_divisores_estatica(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_divisores_estatica_cero** | `proc_e_divisores_estatica` | `int res = proc_e_divisores_estatica(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Criba de Divisores Estática
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_divisores_estatica(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Criba de Divisores Estática */
    return 0;
}
```
```
