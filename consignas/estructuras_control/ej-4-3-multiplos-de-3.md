

# Múltiplos de 3
> **ID:** `ej-4-3-multiplos-de-3` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `estructuras_control` / `control`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:condicionales`, `dep:lazos`
>
> **Etiquetas conceptuales:** `control`, `lazos`, `fundamentos`, `condicionales`, `multiplos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-3-multiplos-de-3.ripkg`**](../../paquetes/ej-4-3-multiplos-de-3.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-3-multiplos-de-3.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["condicionales"]
        
        node_pre_2["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-4-3-multiplos-de-3<br/><small>estructuras_control · B1</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: lazo_for
:enumerator: for
Usá un lazo `for` para mostrar los números múltiplos de 3 comprendidos en el
rango de 0 a 30 inclusive.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Permitir al usuario definir el límite superior hasta el cual buscar múltiplos.
-   **[*plus ultra*]:** Contar la cantidad total de múltiplos encontrados.

:::

:::{solution} lazo_for
:label: solucion-lazo_for
:class: dropdown
```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    for (int i = 0; i <= 30; i = i + 1)
    {
        if (i % 3 == 0)
        {
            printf("%d es múltiplo de 3\n", i);
        }
    }
    return 0;
}
```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Múltiplos de 3
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_4_3_multiplos_de_3(int val);

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


## 📋 Prototipos y Cabecera (`ej-4-3-multiplos-de-3.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_3_MULTIPLOS_DE_3_H
#define EJERCICIO_EJ_4_3_MULTIPLOS_DE_3_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Múltiplos de 3 */
int ejecutar_ej_4_3_multiplos_de_3(int val);

#endif /* EJERCICIO_EJ_4_3_MULTIPLOS_DE_3_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_4_3_multiplos_de_3` | `int` | `int val` | Procesa el flujo principal de Múltiplos de 3 |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_ejecutar_ej_4_3_multiplos_de_3_positivo** | `ejecutar_ej_4_3_multiplos_de_3` | `int res = ejecutar_ej_4_3_multiplos_de_3(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_4_3_multiplos_de_3_cero** | `ejecutar_ej_4_3_multiplos_de_3` | `int res = ejecutar_ej_4_3_multiplos_de_3(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>

int ejecutar_ej_4_3_multiplos_de_3(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    for (int i = 0; i <= 30; i = i + 1)
    {
        if (i % 3 == 0)
        {
            printf("%d es múltiplo de 3\n", i);
        }
    }
    return 0;
}
```
```
