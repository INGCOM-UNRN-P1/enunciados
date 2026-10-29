#### Descripción
Convertir un número entero decimal a su representación en una cadena de texto
binaria.



:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Usar divisiones sucesivas por 2. El resto de cada división (`n % 2`) es
        el siguiente dígito binario.
    2.  Guardar estos dígitos en un arreglo o cadena.
    3.  Como los dígitos se generan en orden inverso, la cadena resultante debe
        ser invertida al final.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION decimal_a_binario(n)
VARIABLES:
    cadena_inversa, cadena_final (cadenas)
INICIO
    SI n == 0 RETORNAR "0"

    MIENTRAS n > 0 HACER
        resto = n MOD 2
        AÑADIR caracter(resto) a cadena_inversa
        n = n / 2
    FIN MIENTRAS

    cadena_final = invertir_cadena(cadena_inversa)
    RETORNAR cadena_final
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Decimal a binario
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_15_decimal_a_binario(int val);

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
- **Proceso:**
- Usar divisiones sucesivas por 2. El resto de cada división (`n % 2`) es el siguiente dígito binario.
- Guardar estos dígitos en un arreglo o cadena.
- Como los dígitos se generan en orden inverso, la cadena resultante debe ser invertida al final.
:::
