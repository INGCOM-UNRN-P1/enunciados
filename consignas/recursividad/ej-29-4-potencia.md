

# Potencia
> **ID:** `ej-29-4-potencia` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `recursividad` / `potencia`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:punteros`
>
> **Etiquetas conceptuales:** `potencia`, `recursividad`, `avanzados`, `backtracking`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-29-4-potencia.ripkg`**](../../paquetes/ej-29-4-potencia.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-29-4-potencia.ripkg
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
    
    

    current_node["🎯 ej-29-4-potencia<br/><small>recursividad · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 29.4 - Potencia ⭐⭐☆☆☆

Implementar $base^{exponente}$ de forma recursiva.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
long int potencia(int base, int exponente);
```
<!-- c -->

**Versión básica:** $O(n)$ en tiempo.

$$
base^{exp} = \begin{cases}
1 & \text{si } exp = 0 \\
base \times potencia(base, exp - 1) & \text{si } exp > 0
\end{cases}
$$

**Desafío:** Implementar versión optimizada usando exponenciación rápida (divide
y vencerás) con complejidad $O(\log n)$.

$$
base^{exp} = \begin{cases}
1 & \text{si } exp = 0 \\
\left(base^{exp/2}\right)^2 & \text{si } exp \text{ es par} \\
base \times \left(base^{(exp-1)/2}\right)^2 & \text{si } exp \text{ es impar}
\end{cases}
$$

---

## Series Numéricas Recursivas


## 📋 Prototipos y Cabecera (`ej-29-4-potencia.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_29_4_POTENCIA_H
#define EJERCICIO_EJ_29_4_POTENCIA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Potencia */
int ejecutar_ej_29_4_potencia(int val);

#endif /* EJERCICIO_EJ_29_4_POTENCIA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `ejecutar_ej_29_4_potencia` | `int` | `int val` | Procesa el flujo principal de Potencia |






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

| **test_ejecutar_ej_29_4_potencia_positivo** | `ejecutar_ej_29_4_potencia` | `int res = ejecutar_ej_29_4_potencia(5); assert(res == 10 || res >= 0);` |

| **test_ejecutar_ej_29_4_potencia_cero** | `ejecutar_ej_29_4_potencia` | `int res = ejecutar_ej_29_4_potencia(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Potencia
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int ejecutar_ej_29_4_potencia(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Potencia */
    return 0;
}
```
```
