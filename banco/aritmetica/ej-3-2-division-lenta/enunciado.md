#### Descripción
Implementar la función `int division_lenta(int dividendo, int divisor);` que calcula el cociente entero de la división de dos enteros mediante restas sucesivas. Este método emula cómo se realiza una división entera sin utilizar el operador `/`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION division_lenta(dividendo, divisor)
VARIABLES:
    cociente (entero)
INICIO
    cociente = 0
    MIENTRAS dividendo >= divisor HACER
        dividendo = dividendo - divisor
        cociente = cociente + 1
    FIN MIENTRAS
    RETORNAR cociente
FIN FUNCION
```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Calcula cociente de division mediante restas sucesivas
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int division_lenta(int dividendo, int divisor);

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

:::{hint} Consideraciones Didácticas
- **Entrada:** Dos enteros positivos, `dividendo` y `divisor`.
- **Proceso:** Se resta el `divisor` del `dividendo` de forma repetida hasta que el `dividendo` sea menor que el `divisor`. Se necesita un contador (`cociente`) que se incrementa en cada resta exitosa.
- El lazo (preferiblemente `while`) se ejecuta mientras `dividendo >= divisor`.
- **Salida:** El valor final del contador es el cociente, y el valor final del `dividendo` (lo que sobra) es el resto. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Validar que el divisor sea estrictamente mayor que cero retornando un código de error si es cero.
- Calcular simultáneamente el cociente y el resto sin usar los operadores / ni %.
:::
