

# Wrapper de malloc para Debugging
> **ID:** `ej-15-21-b21-wrapper-de-malloc-para-deb` · **Unidad:** 3 (Memoria Dinámica y Persistencia)
 · **Tema:** `memoria` / `pilas_y_colas`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:punteros`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `stack`, `debugging`, `layout`, `wrapper`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-15-21-b21-wrapper-de-malloc-para-deb.ripkg`**](../../paquetes/ej-15-21-b21-wrapper-de-malloc-para-deb.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-15-21-b21-wrapper-de-malloc-para-deb.ripkg
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
    
    

    current_node["🎯 ej-15-21-b21-wrapper-de-malloc-para-deb<br/><small>memoria · B2</small>"]

    
```


## 📖 Consigna

Implementar wrappers de las funciones de memoria que agreguen logging:



```{code-block} c
:linenos:
void *debug_malloc(size_t size, const char *archivo, int linea)
{
    void *ptr = malloc(size);
    printf("[MALLOC] %zu bytes en %p (%s:%d)\n", size, ptr, archivo, linea);
    return ptr;
}
void debug_free(void *ptr, const char *archivo, int linea)
{
    printf("[FREE] %p (%s:%d)\n", ptr, archivo, linea);
    free(ptr);
}
#define malloc(size) debug_malloc(size, __FILE__, __LINE__)
#define free(ptr) debug_free(ptr, __FILE__, __LINE__)
```

## Casos Especiales

### 📋 Contrato de las Funciones

```c
/*
 * Operación debug_free
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void debug_free(void *ptr, const char *archivo, int linea);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Operación típica
```text
ADD 10, ADD 20
Estructura con 2 elementos
```
:::
:::{tab-item} Colección vacía
```text
Consulta sobre estructura recién inicializada
Retorno seguro / estado vacío
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
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


## 📋 Prototipos y Cabecera (`ej-15-21-b21-wrapper-de-malloc-para-deb.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_15_21_B21_WRAPPER_DE_MALLOC_PARA_DEB_H
#define EJERCICIO_EJ_15_21_B21_WRAPPER_DE_MALLOC_PARA_DEB_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación debug_free */
void debug_free(void *ptr, const char *archivo, int linea);

#endif /* EJERCICIO_EJ_15_21_B21_WRAPPER_DE_MALLOC_PARA_DEB_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `debug_free` | `void` | `void *ptr, const char *archivo, int linea` | Operación debug_free |






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

| **test_debug_free_1** | `debug_free` | `assert(true); /* test simplificado de validación */` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <stdlib.h>

void *debug_malloc(size_t size, const char *archivo, int linea)
{
    void *ptr = malloc(size);
    printf("[MALLOC] %zu bytes en %p (%s:%d)\n", size, ptr, archivo, linea);
    return ptr;
}
void debug_free(void *ptr, const char *archivo, int linea)
{
    printf("[FREE] %p (%s:%d)\n", ptr, archivo, linea);
    free(ptr);
}
#define malloc(size) debug_malloc(size, __FILE__, __LINE__)
#define free(ptr) debug_free(ptr, __FILE__, __LINE__)

int main(void)
{
    return 0;
}
```
```
