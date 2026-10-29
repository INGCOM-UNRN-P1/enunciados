

# Configurar dispositivo
> **ID:** `ej-20-11-configurar-dispositivo`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `enum`, `dispositivo`, `configurar`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-11-configurar-dispositivo.ripkg`**](../../paquetes/ej-20-11-configurar-dispositivo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-11-configurar-dispositivo.ripkg
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
    
    

    current_node["🎯 ej-20-11-configurar-dispositivo<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.11 - Configurar dispositivo ⭐⭐☆☆☆

Implementar funciones para configurar cada tipo de dispositivo de forma segura.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
dispositivo_t crear_sensor(double temp_min, double temp_max);
dispositivo_t crear_motor(unsigned int rpm, bool horario);
dispositivo_t crear_led(unsigned char intensidad,
                        enum color_predefinido color);
```
<!-- c -->


## 📋 Prototipos y Cabecera (`ej-20-11-configurar-dispositivo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_11_CONFIGURAR_DISPOSITIVO_H
#define EJERCICIO_EJ_20_11_CONFIGURAR_DISPOSITIVO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Configurar dispositivo */
int proc_nfigurar_dispositivo(int val);

#endif /* EJERCICIO_EJ_20_11_CONFIGURAR_DISPOSITIVO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_nfigurar_dispositivo` | `int` | `int val` | Procesa el flujo principal de Configurar dispositivo |






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

| **test_proc_nfigurar_dispositivo_positivo** | `proc_nfigurar_dispositivo` | `int res = proc_nfigurar_dispositivo(5); assert(res == 10 || res >= 0);` |

| **test_proc_nfigurar_dispositivo_cero** | `proc_nfigurar_dispositivo` | `int res = proc_nfigurar_dispositivo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Configurar dispositivo
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_nfigurar_dispositivo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Configurar dispositivo */
    return 0;
}
```
```
