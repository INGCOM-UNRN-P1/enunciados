#### Descripción
Desarrollar una función que verifique si una cadena de texto representa un
número de punto flotante válido. La validación debe seguir un conjunto de reglas
específicas.



:::{tip} Lógica y Consideraciones

-   **Reglas de Validación:**
    1.  Puede tener un signo opcional (`+` o `-`) únicamente al principio.
    2.  Debe contener al menos un dígito.
    3.  Puede contener como máximo un punto decimal (`.`).
    4.  Todos los demás caracteres deben ser dígitos (`0`-`9`).
-   **Proceso:**
    1.  Recorrer la cadena carácter por carácter.
    2.  Usar banderas (variables booleanas) para llevar un registro de si ya se
        encontró un punto decimal.
    3.  Manejar el signo solo en la primera posición.
    4.  Verificar que cada carácter sea un dígito o un punto (en la posición
        correcta).

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_numero_valido(cadena)
VARIABLES:
    tiene_punto (booleano)
    tiene_digito (booleano)
    i (entero)
INICIO
    tiene_punto = FALSO, tiene_digito = FALSO
    i = 0

    // Comprobar signo opcional
    SI cadena[0] == '+' O cadena[0] == '-' ENTONCES
        i = 1
    FIN SI

    // Recorrer el resto de la cadena
    MIENTRAS cadena[i] != FIN_DE_CADENA HACER
        SI es_digito(cadena[i]) ENTONCES
            tiene_digito = VERDADERO
        SINO SI cadena[i] == '.' ENTONCES
            SI tiene_punto ENTONCES RETORNAR FALSO // Más de un punto
            tiene_punto = VERDADERO
        SINO
            RETORNAR FALSO // Carácter no válido
        FIN SI
        i = i + 1
    FIN MIENTRAS

    RETORNAR tiene_digito // Debe tener al menos un dígito
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de ¿Es un número válido?
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__es_un_numero_valido(int val);

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
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
- **Reglas de Validación:**
- Puede tener un signo opcional (`+` o `-`) únicamente al principio.
- Debe contener al menos un dígito.
- Puede contener como máximo un punto decimal (`.`).
- Todos los demás caracteres deben ser dígitos (`0`-`9`).
- **Proceso:**
- Recorrer la cadena carácter por carácter.
- Usar banderas (variables booleanas) para llevar un registro de si ya se encontró un punto decimal.
- Manejar el signo solo en la primera posición.
- Verificar que cada carácter sea un dígito o un punto (en la posición correcta).
:::
