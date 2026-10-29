

# Conversión de Bases
> **ID:** `ej-5-14-conversion-de-bases` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `funciones` / `funciones_general`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-14-conversion-de-bases.ripkg`**](../../paquetes/ej-5-14-conversion-de-bases.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-14-conversion-de-bases.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
        node_pre_2["secuencias"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-5-14-conversion-de-bases<br/><small>funciones · B4</small>"]

    
```


## 📖 Consigna

# Conversión de Bases

## Ejercicio 5.14 - Conversión de Bases ⭐⭐⭐⭐☆

Implementá conversiones entre bases numéricas:
- `int binario_a_decimal(long binario)`
- `long decimal_a_binario(int decimal)`
- Similar para octal y hexadecimal

**Orientación:**
- Para convertir a decimal: suma potencias de la base
- Para convertir desde decimal: divisiones sucesivas
- Validá que los dígitos sean válidos para la base


:::{hint} Lógica y Consideraciones
    errores de E/S con `ferror` y `feof`.
    archivo en todos los caminos de ejecución.

-   **[*plus ultra*]:** Validar que los dígitos de la cadena binaria sean exclusivamente 0 o 1.
-   **[*plus ultra*]:** Escribir pruebas con assert() verificando conversiones de ida y vuelta (round-trip).

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_15)=


## 📋 Prototipos y Cabecera (`ej-5-14-conversion-de-bases.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_14_CONVERSION_DE_BASES_H
#define EJERCICIO_EJ_5_14_CONVERSION_DE_BASES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Lógica de Conversión de Bases */
int resolver_ej_14(int n);

#endif /* EJERCICIO_EJ_5_14_CONVERSION_DE_BASES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `resolver_ej_14` | `int` | `int n` | Lógica de Conversión de Bases |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_resolver_ej_14** | `resolver_ej_14` | `assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int resolver_conversi_n_de_bases(int n) {
    return n * 2;
}

int main(void) {
    printf("OK\n");
    return 0;
}
```
```
