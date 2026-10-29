

# Librería de Física: Cinemática
> **ID:** `ej-7-21-libreria-de-fisica-cinematica`
 · **Tema:** `librerias`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `fundamentos`, `headers`, `libreria`, `cinematica`, `fisica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-21-libreria-de-fisica-cinematica.ripkg`**](../../paquetes/ej-7-21-libreria-de-fisica-cinematica.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-21-libreria-de-fisica-cinematica.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-7-21-libreria-de-fisica-cinematica<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 7.21 - Librería de Física: Cinemática ⭐⭐☆☆☆

Diseñá `fisica_cinematica.h` y `fisica_cinematica.c`:
- `double fis_posicion_mru(double x0, double v, double t)`
- `double fis_posicion_mruv(double x0, double v0, double a, double t)`
- `double fis_velocidad_mruv(double v0, double a, double t)`
- `double fis_tiempo_caida_libre(double altura, double g)`

:::{hint} Lógica y Consideraciones
- Definí una constante adecuada para la aceleración de la gravedad $g = 9.81$.
:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-7-21-libreria-de-fisica-cinematica.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_21_LIBRERIA_DE_FISICA_CINEMATICA_H
#define EJERCICIO_EJ_7_21_LIBRERIA_DE_FISICA_CINEMATICA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Física: Cinemática */
int proc_de_fisica_cinematica(int val);

#endif /* EJERCICIO_EJ_7_21_LIBRERIA_DE_FISICA_CINEMATICA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_de_fisica_cinematica` | `int` | `int val` | Procesa el flujo principal de Librería de Física: Cinemática |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Definí una constante adecuada para la aceleración de la gravedad $g = 9.81$.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_de_fisica_cinematica_positivo** | `proc_de_fisica_cinematica` | `int res = proc_de_fisica_cinematica(5); assert(res == 10 || res >= 0);` |

| **test_proc_de_fisica_cinematica_cero** | `proc_de_fisica_cinematica` | `int res = proc_de_fisica_cinematica(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Física: Cinemática
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_de_fisica_cinematica(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Física: Cinemática */
    return 0;
}
```
```
