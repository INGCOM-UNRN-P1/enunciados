#### Descripción
Transformar un número entero largo en una cadena de texto, insertando
separadores de miles (puntos o comas) para mejorar la legibilidad.



:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Convertir el número a una cadena simple primero (usando `sprintf` o un
        algoritmo manual).
    2.  Calcular cuántos separadores se necesitan.
    3.  Crear una nueva cadena con el tamaño suficiente para albergar los
        dígitos y los separadores.
    4.  Copiar los dígitos de la cadena original a la nueva, insertando los
        separadores en las posiciones correctas. Es más fácil hacerlo de derecha
        a izquierda.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION formatear_numero(numero)
VARIABLES:
    cadena_simple, cadena_formateada (cadenas)
    longitud, num_separadores, j (enteros)
INICIO
    cadena_simple = convertir_a_cadena(numero)
    longitud = LONGITUD(cadena_simple)
    // ... calcular num_separadores ...
    // ... reservar memoria para cadena_formateada ...

    j = 0
    PARA i DESDE 0 HASTA longitud-1 HACER
        // Lógica para insertar separador cada 3 dígitos desde la derecha
        // ...
        AÑADIR cadena_simple[i] a cadena_formateada
    FIN PARA

    RETORNAR cadena_formateada
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Número a cadena con formato
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__a_cadena_con_format(int val);

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
4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
- **Proceso:**
- Convertir el número a una cadena simple primero (usando `sprintf` o un algoritmo manual).
- Calcular cuántos separadores se necesitan.
- Crear una nueva cadena con el tamaño suficiente para albergar los dígitos y los separadores.
- Copiar los dígitos de la cadena original a la nueva, insertando los separadores en las posiciones correctas. Es más fácil hacerlo de derecha a izquierda.
:::
