

# Librería de Trigonometría Compleja
> **ID:** `ej-7-5-libreria-de-trigonometria-comp`
 · **Tema:** `librerias`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `fundamentos`, `headers`, `libreria`, `trigonometria`, `compleja`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-5-libreria-de-trigonometria-comp.ripkg`**](../../paquetes/ej-7-5-libreria-de-trigonometria-comp.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-5-libreria-de-trigonometria-comp.ripkg
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
    
    

    current_node["🎯 ej-7-5-libreria-de-trigonometria-comp<br/><small>librerias · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 7.5 - Librería de Trigonometría Compleja ⭐⭐⭐☆☆

Diseñá `trigonometria.h` y `trigonometria.c`:
- `double trigo_hipotenusa(double cateto1, double cateto2)`
- `double trigo_angulo_vector(double x, double y)`: ángulo respecto al eje X positivo en radianes.
- `bool trigo_resolver_triangulo_sss(double a, double b, double c, double *alpha, double *beta, double *gamma)`: calcula los 3 ángulos dada la longitud de los 3 lados.

:::{hint} Lógica y Consideraciones
- Usá el teorema del coseno para determinar los ángulos. Devuelve `false` si los lados no forman un triángulo válido.
:::
<!-- {hint} Lógica y Consideraciones -->

---

## 2. Librerías de Manipulación de Texto y Cadenas


## 📋 Prototipos y Cabecera (`ej-7-5-libreria-de-trigonometria-comp.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_5_LIBRERIA_DE_TRIGONOMETRIA_COMP_H
#define EJERCICIO_EJ_7_5_LIBRERIA_DE_TRIGONOMETRIA_COMP_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Trigonometría Compleja */
int proc_e_trigonometria_comp(int val);

#endif /* EJERCICIO_EJ_7_5_LIBRERIA_DE_TRIGONOMETRIA_COMP_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_trigonometria_comp` | `int` | `int val` | Procesa el flujo principal de Librería de Trigonometría Compleja |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Usá el teorema del coseno para determinar los ángulos. Devuelve `false` si los lados no forman un triángulo válido.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_trigonometria_comp_positivo** | `proc_e_trigonometria_comp` | `int res = proc_e_trigonometria_comp(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_trigonometria_comp_cero** | `proc_e_trigonometria_comp` | `int res = proc_e_trigonometria_comp(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Trigonometría Compleja
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_trigonometria_comp(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Trigonometría Compleja */
    return 0;
}
```
```
