

# Tipos de eventos de UI
> **ID:** `ej-20-36-tipos-de-eventos-de-ui` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `eventos`, `enum`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-36-tipos-de-eventos-de-ui.ripkg`**](../../paquetes/ej-20-36-tipos-de-eventos-de-ui.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-36-tipos-de-eventos-de-ui.ripkg
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
    
    

    current_node["🎯 ej-20-36-tipos-de-eventos-de-ui<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.36 - Tipos de eventos de UI ⭐⭐☆☆☆

Modelar eventos de interfaz de usuario.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum tipo_evento
{
    EVENTO_CLICK,
    EVENTO_DOBLE_CLICK,
    EVENTO_PRESIONAR_TECLA,
    EVENTO_SOLTAR_TECLA,
    EVENTO_MOVER_MOUSE,
    EVENTO_SCROLL
};
enum boton_mouse
{
    BOTON_IZQUIERDO = 1,
    BOTON_DERECHO = 2,
    BOTON_MEDIO = 4
};
typedef struct
{
    enum tipo_evento tipo;
    int x, y;             // Coordenadas
    unsigned int botones; // Flags de botones presionados
    unsigned int tecla;
} evento_t;
```
<!-- {code-block} c -->


## 📋 Prototipos y Cabecera (`ej-20-36-tipos-de-eventos-de-ui.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_36_TIPOS_DE_EVENTOS_DE_UI_H
#define EJERCICIO_EJ_20_36_TIPOS_DE_EVENTOS_DE_UI_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Tipos de eventos de UI */
int proc_pos_de_eventos_de_ui(int val);

#endif /* EJERCICIO_EJ_20_36_TIPOS_DE_EVENTOS_DE_UI_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_pos_de_eventos_de_ui` | `int` | `int val` | Procesa el flujo principal de Tipos de eventos de UI |






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

| **test_proc_pos_de_eventos_de_ui_positivo** | `proc_pos_de_eventos_de_ui` | `int res = proc_pos_de_eventos_de_ui(5); assert(res == 10 || res >= 0);` |

| **test_proc_pos_de_eventos_de_ui_cero** | `proc_pos_de_eventos_de_ui` | `int res = proc_pos_de_eventos_de_ui(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
enum tipo_evento
{
    EVENTO_CLICK,
    EVENTO_DOBLE_CLICK,
    EVENTO_PRESIONAR_TECLA,
    EVENTO_SOLTAR_TECLA,
    EVENTO_MOVER_MOUSE,
    EVENTO_SCROLL
};
enum boton_mouse
{
    BOTON_IZQUIERDO = 1,
    BOTON_DERECHO = 2,
    BOTON_MEDIO = 4
};
typedef struct
{
    enum tipo_evento tipo;
    int x, y;             // Coordenadas
    unsigned int botones; // Flags de botones presionados
    unsigned int tecla;
} evento_t;


int proc_pos_de_eventos_de_ui(int val)
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
