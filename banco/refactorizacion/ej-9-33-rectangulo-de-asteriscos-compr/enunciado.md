:::{exercise}
:label: ej-ref-rectangulo-asteriscos
Analizá el siguiente código que imprime un rectángulo en consola mediante lazos
anidados en una sola línea y refactorizalo:

``` c
void r(int w,int h){for(int i=0;i<h;i++){for(int j=0;j<w;j++)printf("*");printf("\n");}}
```

-   **[*plus ultra*]:** Validar que ancho y alto sean mayores a cero.
-   **[*plus ultra*]:** Modularizar la impresión de una fila de caracteres en
    una función auxiliar `void imprimir_fila(char c, int longitud)`.

:::

:::{solution} ej-ref-rectangulo-asteriscos
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <stdio.h>

void imprimir_fila_caracter(char caracter, int longitud)
{
    for (int columna = 0; columna < longitud; columna++)
    {
        putchar(caracter);
    }
    putchar('\n');
}

void imprimir_rectangulo(int ancho, int alto)
{
    if (ancho <= 0 || alto <= 0)
    {
        return;
    }
    for (int fila = 0; fila < alto; fila++)
    {
        imprimir_fila_caracter('*', ancho);
    }
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación imprimir_fila_caracter
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void imprimir_fila_caracter(char caracter, int longitud);

/*
 * Operación imprimir_rectangulo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void imprimir_rectangulo(int ancho, int alto);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
