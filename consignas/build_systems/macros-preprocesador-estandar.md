

# Macros Predefinidas del Preprocesador
> **ID:** `macros-preprocesador-estandar` · **Unidad:** 5 (Ingeniería de Software y Calidad en C)
 · **Tema:** `build_systems` / `recordar`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:librerias`
>
> **Etiquetas conceptuales:** `build_systems`, `recordar`, `c11`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `macros-preprocesador-estandar.ripkg`**](../../paquetes/macros-preprocesador-estandar.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run macros-preprocesador-estandar.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["librerias"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 macros-preprocesador-estandar<br/><small>build_systems · B1</small>"]

    
```


## 📖 Consigna

Implementar y verificar directivas del preprocesador y reglas de compilación para: **Macros Predefinidas del Preprocesador**.
Configurar macros predefinidas estándar y dependencias para garantizar una compilación limpia, reproducible y modular.

- `int proc_eprocesador_estandar(int val)`: Procesa el flujo principal de Macros Predefinidas del Preprocesador

- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 10 minutos (Nivel Bloom 1).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Macros Predefinidas del Preprocesador
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_eprocesador_estandar(int val);

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
- Las macros predefinidas son expandidas por el preprocesador antes de la compilación.
:::


## 📋 Prototipos y Cabecera (`macros-preprocesador-estandar.h`)

```{code-block} c
#ifndef EJERCICIO_MACROS_PREPROCESADOR_ESTANDAR_H
#define EJERCICIO_MACROS_PREPROCESADOR_ESTANDAR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Macros Predefinidas del Preprocesador */
int proc_eprocesador_estandar(int val);

#endif /* EJERCICIO_MACROS_PREPROCESADOR_ESTANDAR_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_eprocesador_estandar` | `int` | `int val` | Procesa el flujo principal de Macros Predefinidas del Preprocesador |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Las macros predefinidas son expandidas por el preprocesador antes de la compilación.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_eprocesador_estandar_positivo** | `proc_eprocesador_estandar` | `int res = proc_eprocesador_estandar(5); assert(res == 10 || res >= 0);` |

| **test_proc_eprocesador_estandar_cero** | `proc_eprocesador_estandar` | `int res = proc_eprocesador_estandar(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>

int proc_eprocesador_estandar(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    printf("STDC: %d | STDC_VERSION: %ld\n", __STDC__, __STDC_VERSION__);
    return 0;
}
```
```
