#### Descripción
Implementar una función que convierta una cadena en `snake_case` a `camelCase`.
Esto implica eliminar los guiones bajos y poner en mayúscula la letra que les
seguía.



:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer la cadena de entrada.
    2.  Usar una bandera `capitalizar_siguiente`.
    3.  Si el carácter actual es `_`, poner `capitalizar_siguiente` a
        `verdadero` y no añadir nada al resultado.
    4.  Si no es `_`, y `capitalizar_siguiente` es `verdadero`, convertir el
        carácter a mayúscula, añadirlo al resultado y poner la bandera a
        `falso`. Si no, simplemente añadirlo.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION a_camel_case(cadena)
VARIABLES:
    resultado (cadena)
    capitalizar (booleano)
INICIO
    capitalizar = FALSO
    PARA cada caracter c en cadena HACER
        SI c == '_' ENTONCES
            capitalizar = VERDADERO
        SINO SI capitalizar ENTONCES
            AÑADIR convertir_a_mayuscula(c) a resultado
            capitalizar = FALSO
        SINO
            AÑADIR c a resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Convertir a `camelCase`
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_onvertir_a_camelcase(int val);

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
- Recorrer la cadena de entrada.
- Usar una bandera `capitalizar_siguiente`.
- Si el carácter actual es `_`, poner `capitalizar_siguiente` a `verdadero` y no añadir nada al resultado.
- Si no es `_`, y `capitalizar_siguiente` es `verdadero`, convertir el carácter a mayúscula, añadirlo al resultado y poner la bandera a `falso`. Si no, simplemente añadirlo.
:::
