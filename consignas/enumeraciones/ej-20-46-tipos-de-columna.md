

# Tipos de columna
> **ID:** `ej-20-46-tipos-de-columna` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `enumeraciones` / `mapeo_estados`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`, `dep:condicionales`
>
> **Etiquetas conceptuales:** `tipos`, `columna`, `enum`, `memoria`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-20-46-tipos-de-columna.ripkg`**](../../paquetes/ej-20-46-tipos-de-columna.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-20-46-tipos-de-columna.ripkg
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
    
    

    current_node["🎯 ej-20-46-tipos-de-columna<br/><small>enumeraciones · B2</small>"]

    
```


## 📖 Consigna

### Ejercicio 20.46 - Tipos de columna ⭐⭐☆☆☆

Modelar tipos de datos SQL y sus propiedades.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum tipo_sql
{
    SQL_INT,
    SQL_BIGINT,
    SQL_FLOAT,
    SQL_DOUBLE,
    SQL_VARCHAR,
    SQL_TEXT,
    SQL_DATE,
    SQL_DATETIME,
    SQL_BOOLEAN,
    SQL_BLOB
};
enum constraint_sql
{
    CONSTRAINT_NINGUNO = 0,
    CONSTRAINT_NOT_NULL = 1 << 0,
    CONSTRAINT_UNIQUE = 1 << 1,
    CONSTRAINT_PRIMARY_KEY = 1 << 2,
    CONSTRAINT_FOREIGN_KEY = 1 << 3,
    CONSTRAINT_AUTO_INCREMENT = 1 << 4
};
typedef struct
{
    char nombre[64];
    enum tipo_sql tipo;
    unsigned int constraints;
    int longitud; // Para VARCHAR
} columna_t;
```
<!-- {code-block} c -->


## 📋 Prototipos y Cabecera (`ej-20-46-tipos-de-columna.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_20_46_TIPOS_DE_COLUMNA_H
#define EJERCICIO_EJ_20_46_TIPOS_DE_COLUMNA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Tipos de columna */
int proc__46_tipos_de_columna(int val);

#endif /* EJERCICIO_EJ_20_46_TIPOS_DE_COLUMNA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc__46_tipos_de_columna` | `int` | `int val` | Procesa el flujo principal de Tipos de columna |






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

| **test_proc__46_tipos_de_columna_positivo** | `proc__46_tipos_de_columna` | `int res = proc__46_tipos_de_columna(5); assert(res == 10 || res >= 0);` |

| **test_proc__46_tipos_de_columna_cero** | `proc__46_tipos_de_columna` | `int res = proc__46_tipos_de_columna(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
enum tipo_sql
{
    SQL_INT,
    SQL_BIGINT,
    SQL_FLOAT,
    SQL_DOUBLE,
    SQL_VARCHAR,
    SQL_TEXT,
    SQL_DATE,
    SQL_DATETIME,
    SQL_BOOLEAN,
    SQL_BLOB
};
enum constraint_sql
{
    CONSTRAINT_NINGUNO = 0,
    CONSTRAINT_NOT_NULL = 1 << 0,
    CONSTRAINT_UNIQUE = 1 << 1,
    CONSTRAINT_PRIMARY_KEY = 1 << 2,
    CONSTRAINT_FOREIGN_KEY = 1 << 3,
    CONSTRAINT_AUTO_INCREMENT = 1 << 4
};
typedef struct
{
    char nombre[64];
    enum tipo_sql tipo;
    unsigned int constraints;
    int longitud; // Para VARCHAR
} columna_t;


int proc__46_tipos_de_columna(int val)
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
