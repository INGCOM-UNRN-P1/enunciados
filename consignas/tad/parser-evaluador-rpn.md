

# Evaluador de Expresiones en Notación Polaca Inversa (RPN)
> **ID:** `parser-evaluador-rpn` · **Unidad:** 4 (Tipos Abstractos y Algorítmica)
 · **Tema:** `tad` / `pilas_y_colas`
 · **Bloom:** B1 (Recordar) · **Dificultad:** Inicial
 · **Carga:** ~10 min · **Tipo:** Concepto
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:estructuras`, `dep:punteros`, `dep:memoria_dinamica`
>
> **Etiquetas conceptuales:** `tad`, `pila`, `rpn`, `parsing`, `aritmetica`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `parser-evaluador-rpn.ripkg`**](../../paquetes/parser-evaluador-rpn.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run parser-evaluador-rpn.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["estructuras"]
        
        node_pre_2["punteros"]
        
        node_pre_3["memoria_dinamica"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 parser-evaluador-rpn<br/><small>tad · B1</small>"]

    
```


## 📖 Consigna

Implementar un evaluador de expresiones aritméticas escritas en Notación Polaca Inversa (RPN / Postfija) utilizando un TAD Pila.

El programa debe leer líneas con expresiones RPN donde los tokens están separados por espacios.
Operadores binarios soportados: `+`, `-`, `*`, `/`.

Para cada línea leída:
- Si la expresión es válida y queda un único elemento final en la pila, imprime `RES: <valor>`.
- Si hay división por cero, imprime `ERROR: DIV_ZERO`.
- Si la sintaxis es inválida (faltan operandos o sobran valores al final), imprime `ERROR: SINTAXIS`.
- El comando `EXIT` termina el programa.

### 📋 Contrato de las Funciones

```c
/*
 * Operación rpn_init
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void rpn_init(PilaRPN *p);

/*
 * Operación rpn_push
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int rpn_push(PilaRPN *p, long v);

/*
 * Operación rpn_pop
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int rpn_pop(PilaRPN *p, long *out);

/*
 * Operación evaluar_linea
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void evaluar_linea(char *linea);

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
- Tokenizá la entrada por espacios.
- Si el token es un operador (+, -, *, /), desapilá dos operandos, calculá op(b, a) y apilá el resultado.
- Si es un número, convertilo con strtol() o atoi() y apilalo en la pila de evaluación.
:::


## 📋 Prototipos y Cabecera (`parser-evaluador-rpn.h`)

```{code-block} c
#ifndef EJERCICIO_PARSER_EVALUADOR_RPN_H
#define EJERCICIO_PARSER_EVALUADOR_RPN_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación rpn_init */
void rpn_init(PilaRPN *p);
/* Operación rpn_push */
int rpn_push(PilaRPN *p, long v);
/* Operación rpn_pop */
int rpn_pop(PilaRPN *p, long *out);
/* Operación evaluar_linea */
void evaluar_linea(char *linea);

#endif /* EJERCICIO_PARSER_EVALUADOR_RPN_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `rpn_init` | `void` | `PilaRPN *p` | Operación rpn_init |

| `rpn_push` | `int` | `PilaRPN *p, long v` | Operación rpn_push |

| `rpn_pop` | `int` | `PilaRPN *p, long *out` | Operación rpn_pop |

| `evaluar_linea` | `void` | `char *linea` | Operación evaluar_linea |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Tokenizá la entrada por espacios.
```

```{tab-item} Pista 2
Si el token es un operador (+, -, *, /), desapilá dos operandos, calculá op(b, a) y apilá el resultado.
```

```{tab-item} Pista 3
Si es un número, convertilo con strtol() o atoi() y apilalo en la pila de evaluación.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_rpn_init_1** | `rpn_init` | `/* Verificación unitaria de rpn_init */ assert(true);` |

| **test_rpn_push_2** | `rpn_push` | `/* Verificación unitaria de rpn_push */ assert(true);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Evaluador de Expresiones en Notacion Polaca Inversa (RPN)
 * Catedra Programacion I - UNRN
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PILA 256

typedef struct
{
    long datos[MAX_PILA];
    int tope;
} PilaRPN;

void rpn_init(PilaRPN *p)
{
    p->tope = 0;
}

int rpn_push(PilaRPN *p, long v)
{
    if (p->tope >= MAX_PILA)
    {
        return 0;
    }
    p->datos[p->tope++] = v;
    return 1;
}

int rpn_pop(PilaRPN *p, long *out)
{
    if (p->tope <= 0)
    {
        return 0;
    }
    *out = p->datos[--p->tope];
    return 1;
}

void evaluar_linea(char *linea)
{
    PilaRPN p;
    rpn_init(&p);

    char *token = strtok(linea, " \t\r\n");
    int error_div_zero = 0;
    int error_sintaxis = 0;

    while (token != NULL)
    {
        if (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 ||
            strcmp(token, "*") == 0 || strcmp(token, "/") == 0)
        {
            long a = 0;
            long b = 0;
            if (!rpn_pop(&p, &a) || !rpn_pop(&p, &b))
            {
                error_sintaxis = 1;
                break;
            }
            if (strcmp(token, "+") == 0)
            {
                rpn_push(&p, b + a);
            }
            else if (strcmp(token, "-") == 0)
            {
                rpn_push(&p, b - a);
            }
            else if (strcmp(token, "*") == 0)
            {
                rpn_push(&p, b * a);
            }
            else if (strcmp(token, "/") == 0)
            {
                if (a == 0)
                {
                    error_div_zero = 1;
                    break;
                }
                rpn_push(&p, b / a);
            }
        }
        else
        {
            char *endptr = NULL;
            long val = strtol(token, &endptr, 10);
            if (endptr == token)
            {
                error_sintaxis = 1;
                break;
            }
            if (!rpn_push(&p, val))
            {
                error_sintaxis = 1;
                break;
            }
        }
        token = strtok(NULL, " \t\r\n");
    }

    if (error_div_zero)
    {
        printf("ERROR: DIV_ZERO\n");
    }
    else if (error_sintaxis || p.tope != 1)
    {
        printf("ERROR: SINTAXIS\n");
    }
    else
    {
        printf("RES: %ld\n", p.datos[0]);
    }
}

int main(void)
{
    char linea[1024] = {0};

    while (fgets(linea, sizeof(linea), stdin) != NULL)
    {
        if (strncmp(linea, "EXIT", 4) == 0 && (linea[4] == '\n' || linea[4] == '\0' || linea[4] == '\r'))
        {
            break;
        }
        if (linea[0] == '\n' || linea[0] == '\r')
        {
            continue;
        }
        evaluar_linea(linea);
    }

    return 0;
}
```
```
