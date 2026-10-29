

# Gestión de Recursos con goto
> **ID:** `ej-15-24-b24-gestion-de-recursos-con-go`
 · **Tema:** `memoria`
 · **Bloom:** B5 (Evaluar / Crear)
 · **Carga:** ~45 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `layout`, `memoria`, `gestion`, `recursos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-24-b24-gestion-de-recursos-con-go.ripkg`**](../../paquetes/ej-15-24-b24-gestion-de-recursos-con-go.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-24-b24-gestion-de-recursos-con-go.ripkg
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
    
    

    current_node["🎯 ej-15-24-b24-gestion-de-recursos-con-go<br/><small>memoria · B5</small>"]

    
```


## 📖 Consigna

### Ejercicio 15.24 - b.24 - Gestión de Recursos con goto ⭐⭐☆☆☆

Demostrar el uso apropiado de `goto` para cleanup en caso de errores:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
int procesar_archivo(const char *ruta)
{
    FILE *archivo = NULL;
    char *buffer = NULL;
    int resultado = -1;
    archivo = fopen(ruta, "r");
    if (archivo == NULL)
    {
        goto cleanup;
    }
    buffer = malloc(1024);
    if (buffer == NULL)
    {
        goto cleanup;
    }
    // ... procesamiento ...
    resultado = 0; // éxito
cleanup:
    if (buffer != NULL)
    {
        free(buffer);
    }
    if (archivo != NULL)
    {
        fclose(archivo);
    }
    return resultado;
}
```
<!-- {code-block} c -->
## Ejercicios Integradores de Memoria Dinámica

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-15-24-b24-gestion-de-recursos-con-go.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_24_B24_GESTION_DE_RECURSOS_CON_GO_H
#define EJERCICIO_EJ_15_24_B24_GESTION_DE_RECURSOS_CON_GO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación procesar_archivo */
int procesar_archivo(const char *ruta);

#endif /* EJERCICIO_EJ_15_24_B24_GESTION_DE_RECURSOS_CON_GO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `procesar_archivo` | `int` | `const char *ruta` | Operación procesar_archivo |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
```

```{tab-item} Pista 2
[Plus Ultra] Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
```

```{tab-item} Pista 3
[Plus Ultra] Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
```

```{tab-item} Pista 4
[Plus Ultra] Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_procesar_archivo_1** | `procesar_archivo` | `/* Verificación unitaria de procesar_archivo */ int res = procesar_archivo("test"); (void)res; assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

int procesar_archivo(const char *ruta)
{
    FILE *archivo = NULL;
    char *buffer = NULL;
    int resultado = -1;
    archivo = fopen(ruta, "r");
    if (archivo == NULL)
    {
        goto cleanup;
    }
    buffer = malloc(1024);
    if (buffer == NULL)
    {
        goto cleanup;
    }
    // ... procesamiento ...
    resultado = 0; // éxito
cleanup:
    if (buffer != NULL)
    {
        free(buffer);
    }
    if (archivo != NULL)
    {
        fclose(archivo);
    }
    return resultado;
}

int main(void)
{
    return 0;
}
```
```
