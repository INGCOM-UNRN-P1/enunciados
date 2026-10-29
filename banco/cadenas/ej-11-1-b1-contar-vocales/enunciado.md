#### Descripción
Escribir una función que cuente el número total de vocales (a, e, i, o, u) en
una cadena de texto. La función no debe distinguir entre mayúsculas y
minúsculas.



:::{tip} Lógica y Consideraciones

-   **Entrada:** Una cadena de caracteres.
-   **Proceso:**
    1.  Inicializar un `contador` en 0.
    2.  Recorrer la cadena carácter por carácter con un lazo hasta encontrar el
        terminador nulo `\0`.
    3.  Para cada carácter, es conveniente convertirlo a minúscula para
        simplificar la comparación (usando `tolower()` de `ctype.h`).
    4.  Verificar si el carácter es una de las cinco vocales (`'a'`, `'e'`,
        `'i'`, `'o'`, `'u'`).
    5.  Si es una vocal, incrementar el `contador`.
-   **Salida:** Devolver el valor final del `contador`.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION contar_vocales(cadena)
VARIABLES:
    contador (entero)
    caracter_actual (caracter)
INICIO
    contador = 0
    PARA cada caracter_actual en cadena HACER
        c = convertir_a_minuscula(caracter_actual)
        SI c == 'a' O c == 'e' O c == 'i' O c == 'o' O c == 'u' ENTONCES
            contador = contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Contar vocales
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__1_b1_contar_vocales(int val);

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
- **Entrada:** Una cadena de caracteres.
- **Proceso:**
- Inicializar un `contador` en 0.
- Recorrer la cadena carácter por carácter con un lazo hasta encontrar el terminador nulo `\0`.
- Para cada carácter, es conveniente convertirlo a minúscula para simplificar la comparación (usando `tolower()` de `ctype.h`).
- Verificar si el carácter es una de las cinco vocales (`'a'`, `'e'`, `'i'`, `'o'`, `'u'`).
- Si es una vocal, incrementar el `contador`.
- **Salida:** Devolver el valor final del `contador`.
:::
