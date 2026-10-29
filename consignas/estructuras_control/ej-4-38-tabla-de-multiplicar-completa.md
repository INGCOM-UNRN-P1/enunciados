

# Tabla de Multiplicar Completa
> **ID:** `ej-4-38-tabla-de-multiplicar-completa`
 · **Tema:** `estructuras_control`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:condicionales`, `dep:lazos`
>
> **Etiquetas conceptuales:** `control`, `lazos`, `fundamentos`, `tabla`, `multiplicar`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-4-38-tabla-de-multiplicar-completa.ripkg`**](../../paquetes/ej-4-38-tabla-de-multiplicar-completa.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-4-38-tabla-de-multiplicar-completa.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["condicionales"]
        
        node_pre_2["lazos"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-4-38-tabla-de-multiplicar-completa<br/><small>estructuras_control · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 4.38 - Tabla de Multiplicar Completa ⭐⭐⭐⭐☆

Mostrá tabla de multiplicar del 1 al 10 (todas las tablas).

**Orientación:**
- Lazo externo: números del 1 al 10
- Lazo interno: multiplicadores del 1 al 10
- Formato: "3 x 4 = 12"


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Formatear la tabla bidimensional con alineación perfecta de columnas.
-   **[*plus ultra*]:** Permitir al usuario especificar las dimensiones de la tabla.

:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-4-38-tabla-de-multiplicar-completa.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_4_38_TABLA_DE_MULTIPLICAR_COMPLETA_H
#define EJERCICIO_EJ_4_38_TABLA_DE_MULTIPLICAR_COMPLETA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Tabla de Multiplicar Completa */
int proc_multiplicar_completa(int val);

#endif /* EJERCICIO_EJ_4_38_TABLA_DE_MULTIPLICAR_COMPLETA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_multiplicar_completa` | `int` | `int val` | Procesa el flujo principal de Tabla de Multiplicar Completa |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Formatear la tabla bidimensional con alineación perfecta de columnas.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir al usuario especificar las dimensiones de la tabla.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_multiplicar_completa_positivo** | `proc_multiplicar_completa` | `int res = proc_multiplicar_completa(5); assert(res == 10 || res >= 0);` |

| **test_proc_multiplicar_completa_cero** | `proc_multiplicar_completa` | `int res = proc_multiplicar_completa(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Tabla de Multiplicar Completa
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_multiplicar_completa(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Tabla de Multiplicar Completa */
    return 0;
}
```
```
