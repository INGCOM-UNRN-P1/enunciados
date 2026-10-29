

# Menú interactivo completo
> **ID:** `ej-20-25-menu-interactivo-completo`
 · **Tema:** `enumeraciones`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `memoria`, `enum`, `interactivo`, `completo`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-25-menu-interactivo-completo.ripkg`**](../../paquetes/ej-20-25-menu-interactivo-completo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-25-menu-interactivo-completo.ripkg
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
    
    

    current_node["🎯 ej-20-25-menu-interactivo-completo<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.25 - Menú interactivo completo ⭐⭐☆☆☆

Implementar un lazo principal que muestre el menú, lea la opción del usuario y
ejecute la acción hasta que el usuario seleccione `MENU_SALIR`.

## Tipos de Figuras Geométricas con Unión

Combinar enumeraciones, estructuras y uniones para representar diferentes
figuras geométricas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum tipo_figura
{
    FIGURA_CIRCULO,
    FIGURA_RECTANGULO,
    FIGURA_TRIANGULO
};
typedef struct
{
    double radio;
} circulo_t;
typedef struct
{
    double base;
    double altura;
} rectangulo_t;
typedef struct
{
    double lado_a;
    double lado_b;
    double lado_c;
} triangulo_t;
typedef struct
{
    enum tipo_figura tipo;
    union
    {
        circulo_t circulo;
        rectangulo_t rectangulo;
        triangulo_t triangulo;
    } datos;
} figura_t;
```
<!-- {code-block} c -->


## 📋 Prototipos y Cabecera (`ej-20-25-menu-interactivo-completo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_25_MENU_INTERACTIVO_COMPLETO_H
#define EJERCICIO_EJ_20_25_MENU_INTERACTIVO_COMPLETO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Menú interactivo completo */
int proc_interactivo_completo(int val);

#endif /* EJERCICIO_EJ_20_25_MENU_INTERACTIVO_COMPLETO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_interactivo_completo` | `int` | `int val` | Procesa el flujo principal de Menú interactivo completo |






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

| **test_proc_interactivo_completo_positivo** | `proc_interactivo_completo` | `int res = proc_interactivo_completo(5); assert(res == 10 || res >= 0);` |

| **test_proc_interactivo_completo_cero** | `proc_interactivo_completo` | `int res = proc_interactivo_completo(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
enum tipo_figura
{
    FIGURA_CIRCULO,
    FIGURA_RECTANGULO,
    FIGURA_TRIANGULO
};
typedef struct
{
    double radio;
} circulo_t;
typedef struct
{
    double base;
    double altura;
} rectangulo_t;
typedef struct
{
    double lado_a;
    double lado_b;
    double lado_c;
} triangulo_t;
typedef struct
{
    enum tipo_figura tipo;
    union
    {
        circulo_t circulo;
        rectangulo_t rectangulo;
        triangulo_t triangulo;
    } datos;
} figura_t;


int proc_interactivo_completo(int val)
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
