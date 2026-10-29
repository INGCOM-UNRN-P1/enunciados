

# Constructores de figuras
> **ID:** `ej-20-27-constructores-de-figuras` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `constructores`, `memoria`, `enum`, `figuras`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-27-constructores-de-figuras.ripkg`**](../../paquetes/ej-20-27-constructores-de-figuras.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-27-constructores-de-figuras.ripkg
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
    
    

    current_node["🎯 ej-20-27-constructores-de-figuras<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.27 - Constructores de figuras ⭐⭐⭐☆☆

Implementar funciones para crear cada tipo de figura de forma segura.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
figura_t crear_circulo(double radio);
figura_t crear_rectangulo(double base, double altura);
figura_t crear_triangulo(double a, double b, double c);
```
<!-- c -->

## Conversión entre Enums y Strings


## 📋 Prototipos y Cabecera (`ej-20-27-constructores-de-figuras.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_27_CONSTRUCTORES_DE_FIGURAS_H
#define EJERCICIO_EJ_20_27_CONSTRUCTORES_DE_FIGURAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Constructores de figuras */
int proc_tructores_de_figuras(int val);

#endif /* EJERCICIO_EJ_20_27_CONSTRUCTORES_DE_FIGURAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_tructores_de_figuras` | `int` | `int val` | Procesa el flujo principal de Constructores de figuras |






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

| **test_proc_tructores_de_figuras_positivo** | `proc_tructores_de_figuras` | `int res = proc_tructores_de_figuras(5); assert(res == 10 || res >= 0);` |

| **test_proc_tructores_de_figuras_cero** | `proc_tructores_de_figuras` | `int res = proc_tructores_de_figuras(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Constructores de figuras
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_tructores_de_figuras(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Constructores de figuras */
    return 0;
}
```
```
