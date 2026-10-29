:::{exercise}
:label: ej-funcion-mayor
:enumerator: funciones-2
Programá una función que reciba dos números enteros y retorne el mayor de ellos:

- `int mayor(int a, int b);`

Probala desde `main()` con distintos pares de números.

-   **[*plus ultra*]:** Implementar una función que calcule el mayor de tres números reutilizando la función mayor de dos.
-   **[*plus ultra*]:** Escribir aserciones con assert() para verificar el comportamiento con números iguales.

:::

:::{solution} ej-funcion-mayor
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int mayor(int a, int b)
{
    int resultado = a;
    if (b > a)
    {
        resultado = b;
    }
    return resultado;
}
int main(void)
{
    int x = 10;
    int y = 7;
    printf("El mayor es: %d\n", mayor(x, y));
    return 0;
}
```

:::
(ejercicio_5_3)=

### 📋 Contrato de las Funciones

```c
/*
 * Retorna el mayor de a y b
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int mayor(int a, int b);

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
