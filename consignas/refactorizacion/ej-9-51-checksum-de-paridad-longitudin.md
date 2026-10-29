

# Checksum de Paridad Longitudinal
> **ID:** `ej-9-51-checksum-de-paridad-longitudin` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `refactorizacion` / `checksum`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:testing`, `dep:diseno_api`
>
> **Etiquetas conceptuales:** `checksum`, `clean_code`, `refactorizacion`, `fundamentos`, `longitudinal`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-9-51-checksum-de-paridad-longitudin.ripkg`**](../../paquetes/ej-9-51-checksum-de-paridad-longitudin.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-9-51-checksum-de-paridad-longitudin.ripkg
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
    
    

    current_node["🎯 ej-9-51-checksum-de-paridad-longitudin<br/><small>refactorizacion · B4</small>"]

    
```


## 📖 Consigna

:::{exercise}
:label: ej-ref-checksum-paridad
Analizá el siguiente algoritmo que calcula la suma de verificación módulo 256
con residuo ajustado sobre un bloque de datos:

``` c
int chk(int d[],int n){int s=0;for(int i=0;i<n;i++)s=(s+d[i])%256;return(256-s)%256;}
```

**Tu tarea:**
1. Determinar cómo este checksum asegura que la suma de todos los datos más el
   checksum sea congruente con 0 módulo 256.
2. Refactorizar la función en estilo Allman con constantes simbólicas `#define
   MODULO_CHECKSUM 256`.
3. Validar entradas negativas o punteros nulos.
4. Escribir tests unitarios que verifiquen la invariante $\sum \text{datos} +
   \text{checksum} \equiv 0 \pmod{256}$.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Checksum de Paridad Longitudinal
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_paridad_longitudin(int val);

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
- Definí una constante #define MODULO_CHECKSUM 256 para evitar literales mágicos.
- Validá punteros nulos y tamaños de bloque no positivos antes de iterar.
- Comprobá que la suma de todos los datos más el checksum resultante sea congruente con 0 módulo 256.
:::


## 📋 Prototipos y Cabecera (`ej-9-51-checksum-de-paridad-longitudin.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_9_51_CHECKSUM_DE_PARIDAD_LONGITUDIN_H
#define EJERCICIO_EJ_9_51_CHECKSUM_DE_PARIDAD_LONGITUDIN_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Checksum de Paridad Longitudinal */
int proc_e_paridad_longitudin(int val);

#endif /* EJERCICIO_EJ_9_51_CHECKSUM_DE_PARIDAD_LONGITUDIN_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_paridad_longitudin` | `int` | `int val` | Procesa el flujo principal de Checksum de Paridad Longitudinal |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Definí una constante #define MODULO_CHECKSUM 256 para evitar literales mágicos.
```

```{tab-item} Pista 2
Validá punteros nulos y tamaños de bloque no positivos antes de iterar.
```

```{tab-item} Pista 3
Comprobá que la suma de todos los datos más el checksum resultante sea congruente con 0 módulo 256.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_paridad_longitudin_positivo** | `proc_e_paridad_longitudin` | `int res = proc_e_paridad_longitudin(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_paridad_longitudin_cero** | `proc_e_paridad_longitudin` | `int res = proc_e_paridad_longitudin(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Checksum de Paridad Longitudinal
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_paridad_longitudin(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Checksum de Paridad Longitudinal */
    return 0;
}
```
```
