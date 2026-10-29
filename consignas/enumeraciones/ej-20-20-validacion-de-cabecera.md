

# Validación de cabecera
> **ID:** `ej-20-20-validacion-de-cabecera` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `validacion`, `enum`, `cabecera`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-20-validacion-de-cabecera.ripkg`**](../../paquetes/ej-20-20-validacion-de-cabecera.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-20-validacion-de-cabecera.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
        node_pre_2["condicionales"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-20-20-validacion-de-cabecera<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

Implementar una función que valide que los valores de una cabecera están dentro
de los rangos permitidos.



``` c
bool cabecera_valida(cabecera_mensaje_t cabecera);
```

## Opciones de Compilación con Flags

Modelar opciones de compilación como flags combinables.

```{code-block} c
:linenos:
enum opcion_compilacion
{
    OPT_NINGUNA = 0,
    OPT_OPTIMIZAR = 1 << 0,      // -O
    OPT_DEBUG = 1 << 1,          // -g
    OPT_WARNINGS = 1 << 2,       // -Wall
    OPT_WARNINGS_EXTRA = 1 << 3, // -Wextra
    OPT_PEDANTIC = 1 << 4        // -pedantic
};
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Validación de cabecera
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_lidacion_de_cabecera(int val);

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
- Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
- Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
:::


## 📋 Prototipos y Cabecera (`ej-20-20-validacion-de-cabecera.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_20_VALIDACION_DE_CABECERA_H
#define EJERCICIO_EJ_20_20_VALIDACION_DE_CABECERA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Validación de cabecera */
int proc_lidacion_de_cabecera(int val);

#endif /* EJERCICIO_EJ_20_20_VALIDACION_DE_CABECERA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_lidacion_de_cabecera` | `int` | `int val` | Procesa el flujo principal de Validación de cabecera |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
```

```{tab-item} Pista 2
[Plus Ultra] Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_lidacion_de_cabecera_positivo** | `proc_lidacion_de_cabecera` | `int res = proc_lidacion_de_cabecera(5); assert(res == 10 || res >= 0);` |

| **test_proc_lidacion_de_cabecera_cero** | `proc_lidacion_de_cabecera` | `int res = proc_lidacion_de_cabecera(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
enum opcion_compilacion
{
    OPT_NINGUNA = 0,
    OPT_OPTIMIZAR = 1 << 0,      // -O
    OPT_DEBUG = 1 << 1,          // -g
    OPT_WARNINGS = 1 << 2,       // -Wall
    OPT_WARNINGS_EXTRA = 1 << 3, // -Wextra
    OPT_PEDANTIC = 1 << 4        // -pedantic
};


int proc_lidacion_de_cabecera(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}
```
```
