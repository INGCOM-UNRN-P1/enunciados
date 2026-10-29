

# Fragmentación Externa
> **ID:** `ej-15-14-b14-fragmentacion-externa`
 · **Tema:** `memoria`
 · **Bloom:** B2 (Comprender)
 · **Carga:** ~15 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `externa`, `memoria`, `fragmentacion`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-14-b14-fragmentacion-externa.ripkg`**](../../paquetes/ej-15-14-b14-fragmentacion-externa.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-14-b14-fragmentacion-externa.ripkg
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
    
    

    current_node["🎯 ej-15-14-b14-fragmentacion-externa<br/><small>memoria · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.14 - b.14 - Fragmentación Externa ⭐⭐☆☆☆

Escribir un programa que demuestre fragmentación externa:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
#define N 1000
int main()
{
    void *ptrs[N];
    // Alojar muchos bloques pequeños
    for (int i = 0; i < N; i++)
    {
        ptrs[i] = malloc(64);
    }
    // Liberar bloques alternados
    for (int i = 0; i < N; i += 2)
    {
        free(ptrs[i]);
        ptrs[i] = NULL;
    }
    // Intentar alojar un bloque grande
    void *grande = malloc(64 * (N / 2));
    if (grande == NULL)
    {
        printf("No se pudo alojar bloque grande debido a fragmentación\n");
    }
    else
    {
        printf("Bloque grande asignado exitosamente\n");
        free(grande);
    }
    // Liberar bloques restantes
    for (int i = 1; i < N; i += 2)
    {
        free(ptrs[i]);
    }
    return 0;
}
```
<!-- {code-block} c -->


## 📋 Prototipos y Cabecera (`ej-15-14-b14-fragmentacion-externa.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_14_B14_FRAGMENTACION_EXTERNA_H
#define EJERCICIO_EJ_15_14_B14_FRAGMENTACION_EXTERNA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Fragmentación Externa */
int proc_ragmentacion_externa(int val);

#endif /* EJERCICIO_EJ_15_14_B14_FRAGMENTACION_EXTERNA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_ragmentacion_externa` | `int` | `int val` | Procesa el flujo principal de Fragmentación Externa |






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

| **test_proc_ragmentacion_externa_positivo** | `proc_ragmentacion_externa` | `int res = proc_ragmentacion_externa(5); assert(res == 10 || res >= 0);` |

| **test_proc_ragmentacion_externa_cero** | `proc_ragmentacion_externa` | `int res = proc_ragmentacion_externa(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

#define N 1000

int proc_ragmentacion_externa(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    void *ptrs[N];
    // Alojar muchos bloques pequeños
    for (int i = 0; i < N; i++)
    {
        ptrs[i] = malloc(64);
    }
    // Liberar bloques alternados
    for (int i = 0; i < N; i += 2)
    {
        free(ptrs[i]);
        ptrs[i] = NULL;
    }
    // Intentar alojar un bloque grande
    void *grande = malloc(64 * (N / 2));
    if (grande == NULL)
    {
        printf("No se pudo alojar bloque grande debido a fragmentación\n");
    }
    else
    {
        printf("Bloque grande asignado exitosamente\n");
        free(grande);
    }
    // Liberar bloques restantes
    for (int i = 1; i < N; i += 2)
    {
        free(ptrs[i]);
    }
    return 0;
}
```
```
