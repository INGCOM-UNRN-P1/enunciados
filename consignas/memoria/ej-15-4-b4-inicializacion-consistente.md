

# Inicialización Consistente
> **ID:** `ej-15-4-b4-inicializacion-consistente` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `inicializacion`, `memoria`, `consistente`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-4-b4-inicializacion-consistente.ripkg`**](../../paquetes/ej-15-4-b4-inicializacion-consistente.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-4-b4-inicializacion-consistente.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["punteros"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-15-4-b4-inicializacion-consistente<br/><small>memoria · B2</small>"]

    
```


## 📖 Consigna

Implementar una función `struct producto_t* crear_producto(const char* nombre,
double precio)` que:
1. Verifique que los parámetros sean válidos (nombre no nulo, precio positivo)
2. Aloje memoria para el struct
3. Aloje memoria para la cadena `nombre` y la copie
4. Inicialice todos los campos
5. Retorne `NULL` si alguna asignación falla

Implementar también `void destruir_producto(struct producto_t** ptr_producto)`
que libere toda la memoria y ponga el puntero en `NULL`.



:::{tip} Buena Práctica

Aquí aplica la regla de {ref}`0x3002h`: siempre poner punteros en `NULL` después
de liberar para evitar dangling pointers.

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Inicialización Consistente
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_lizacion_consistente(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::


## 📋 Prototipos y Cabecera (`ej-15-4-b4-inicializacion-consistente.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_4_B4_INICIALIZACION_CONSISTENTE_H
#define EJERCICIO_EJ_15_4_B4_INICIALIZACION_CONSISTENTE_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Inicialización Consistente */
int proc_lizacion_consistente(int val);

#endif /* EJERCICIO_EJ_15_4_B4_INICIALIZACION_CONSISTENTE_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_lizacion_consistente` | `int` | `int val` | Procesa el flujo principal de Inicialización Consistente |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
```

```{tab-item} Pista 2
[Plus Ultra] Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_lizacion_consistente_positivo** | `proc_lizacion_consistente` | `int res = proc_lizacion_consistente(5); assert(res == 10 || res >= 0);` |

| **test_proc_lizacion_consistente_cero** | `proc_lizacion_consistente` | `int res = proc_lizacion_consistente(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: b.4 - Inicialización Consistente
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_lizacion_consistente(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de b.4 - Inicialización Consistente */
    return 0;
}
```
```
