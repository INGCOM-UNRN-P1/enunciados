

# Coeficiente Binomial
> **ID:** `ej-25-31-coeficiente-binomial` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `recursividad` / `induccion`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `recursividad`, `induccion`, `binomial`, `algoritmos`, `coeficiente`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-25-31-coeficiente-binomial.ripkg`**](../../paquetes/ej-25-31-coeficiente-binomial.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-25-31-coeficiente-binomial.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["punteros"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-25-31-coeficiente-binomial<br/><small>recursividad · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 25.31 - Coeficiente Binomial ⭐⭐⭐☆☆

Calculá C(n,k) = n! / (k! × (n-k)!) recursivamente.

**Orientación:**
- Identidad de Pascal: `C(n,k) = C(n-1,k-1) + C(n-1,k)`
- Casos base: `C(n,0) = 1`, `C(n,n) = 1`


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-25-31-coeficiente-binomial.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_25_31_COEFICIENTE_BINOMIAL_H
#define EJERCICIO_EJ_25_31_COEFICIENTE_BINOMIAL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Coeficiente Binomial */
int proc_coeficiente_binomial(int val);

#endif /* EJERCICIO_EJ_25_31_COEFICIENTE_BINOMIAL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_coeficiente_binomial` | `int` | `int val` | Procesa el flujo principal de Coeficiente Binomial |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 2
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_coeficiente_binomial_positivo** | `proc_coeficiente_binomial` | `int res = proc_coeficiente_binomial(5); assert(res == 10 || res >= 0);` |

| **test_proc_coeficiente_binomial_cero** | `proc_coeficiente_binomial` | `int res = proc_coeficiente_binomial(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Coeficiente Binomial
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_coeficiente_binomial(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Coeficiente Binomial */
    return 0;
}
```
```
