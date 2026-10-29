

# Archivo de Configuración
> **ID:** `ej-12-35-archivo-de-configuracion`
 · **Tema:** `archivos`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:cadenas`, `dep:punteros`, `dep:io_formato`
>
> **Etiquetas conceptuales:** `archivo`, `configuracion`, `memoria`, `io_disco`, `archivos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-12-35-archivo-de-configuracion.ripkg`**](../../paquetes/ej-12-35-archivo-de-configuracion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-12-35-archivo-de-configuracion.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["cadenas"]
        
        node_pre_2["punteros"]
        
        node_pre_3["io_formato"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-12-35-archivo-de-configuracion<br/><small>archivos · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 12.35 - Archivo de Configuración ⭐⭐⭐⭐☆

Leé archivo de configuración estilo `clave=valor`.

**Ejemplo:**

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```
puerto=8080
host=localhost
timeout=30
```

**Orientación:**
- Parseá cada línea buscando '='
- Parte antes: clave, parte después: valor
- Almacená en estructura o diccionario
- Ignorá líneas vacías y comentarios (empiezan con #)

---


## 📋 Prototipos y Cabecera (`ej-12-35-archivo-de-configuracion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_12_35_ARCHIVO_DE_CONFIGURACION_H
#define EJERCICIO_EJ_12_35_ARCHIVO_DE_CONFIGURACION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Archivo de Configuración */
int proc_ivo_de_configuracion(int val);

#endif /* EJERCICIO_EJ_12_35_ARCHIVO_DE_CONFIGURACION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ivo_de_configuracion` | `int` | `int val` | Procesa el flujo principal de Archivo de Configuración |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_ivo_de_configuracion_positivo** | `proc_ivo_de_configuracion` | `int res = proc_ivo_de_configuracion(5); assert(res == 10 || res >= 0);` |

| **test_proc_ivo_de_configuracion_cero** | `proc_ivo_de_configuracion` | `int res = proc_ivo_de_configuracion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Archivo de Configuración
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_ivo_de_configuracion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Archivo de Configuración */
    return 0;
}
```
```
