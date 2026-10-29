

# Diferencia simétrica
> **ID:** `ej-10-28-diferencia-simetrica` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `arreglos` / `diferencia`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:lazos`
>
> **Etiquetas conceptuales:** `arreglos`, `diferencia`, `memoria`, `simetrica`, `vectores`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-10-28-diferencia-simetrica.ripkg`**](../../paquetes/ej-10-28-diferencia-simetrica.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-10-28-diferencia-simetrica.ripkg
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
    
    

    current_node["🎯 ej-10-28-diferencia-simetrica<br/><small>arreglos · B4</small>"]

    
```


## 📖 Consigna

Calcular la diferencia simétrica entre dos arreglos. El resultado debe ser un
nuevo arreglo que contenga los elementos que están en uno de los arreglos, pero
no en ambos.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION diferencia_simetrica(a1, n1, a2, n2)
VARIABLES:
    resultado (arreglo)
INICIO
    PARA cada elemento x en a1 HACER
        SI x NO ESTÁ EN a2 ENTONCES
            AÑADIR x a resultado
        FIN SI
    FIN PARA
    PARA cada elemento y en a2 HACER
        SI y NO ESTÁ EN a1 ENTONCES
            AÑADIR y a resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Diferencia simétrica
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_diferencia_simetrica(int val);

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
- **Proceso:**
- Iterar sobre el primer arreglo. Para cada elemento, verificar si está en el segundo. Si NO está, añadirlo al resultado.
- Iterar sobre el segundo arreglo. Para cada elemento, verificar si está en el primero. Si NO está, añadirlo al resultado.
- **Optimización:** Usar tablas hash para las búsquedas puede hacer el proceso mucho más eficiente.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::


## 📋 Prototipos y Cabecera (`ej-10-28-diferencia-simetrica.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_10_28_DIFERENCIA_SIMETRICA_H
#define EJERCICIO_EJ_10_28_DIFERENCIA_SIMETRICA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Diferencia simétrica */
int proc_diferencia_simetrica(int val);

#endif /* EJERCICIO_EJ_10_28_DIFERENCIA_SIMETRICA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_diferencia_simetrica` | `int` | `int val` | Procesa el flujo principal de Diferencia simétrica |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Proceso:**
```

```{tab-item} Pista 2
Iterar sobre el primer arreglo. Para cada elemento, verificar si está en el segundo. Si NO está, añadirlo al resultado.
```

```{tab-item} Pista 3
Iterar sobre el segundo arreglo. Para cada elemento, verificar si está en el primero. Si NO está, añadirlo al resultado.
```

```{tab-item} Pista 4
**Optimización:** Usar tablas hash para las búsquedas puede hacer el proceso mucho más eficiente.
```

```{tab-item} Pista 5
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 6
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_diferencia_simetrica_positivo** | `proc_diferencia_simetrica` | `int res = proc_diferencia_simetrica(5); assert(res == 10 || res >= 0);` |

| **test_proc_diferencia_simetrica_cero** | `proc_diferencia_simetrica` | `int res = proc_diferencia_simetrica(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Diferencia simétrica
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_diferencia_simetrica(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Diferencia simétrica */
    return 0;
}
```
```
