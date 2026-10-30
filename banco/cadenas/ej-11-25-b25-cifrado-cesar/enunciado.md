#### Descripción
Implementar el Cifrado César, un tipo de cifrado por sustitución en el que cada
letra en el texto original es reemplazada por una letra un número fijo de
posiciones más adelante en el alfabeto, de forma circular.



:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer la cadena de entrada.
    2.  Para cada carácter, si es una letra, aplicar el desplazamiento.
    3.  El desplazamiento es circular. Si al desplazar 'y' 3 posiciones se pasa
        de 'z', se debe volver al principio del alfabeto. Esto se logra con el
        operador módulo (`%`).
    4.  Ejemplo para una letra minúscula `c`: `'a' + (c - 'a' + desplazamiento)
        % 26`.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION cifrado_cesar(cadena, desplazamiento)
VARIABLES:
    resultado (cadena)
INICIO
    PARA cada caracter c en cadena HACER
        SI es_letra_minuscula(c) ENTONCES
            nuevo_car = 'a' + (c - 'a' + desplazamiento) MOD 26
            AÑADIR nuevo_car a resultado
        SINO SI es_letra_mayuscula(c) ENTONCES
            nuevo_car = 'A' + (c - 'A' + desplazamiento) MOD 26
            AÑADIR nuevo_car a resultado
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
 * Procesa el flujo principal de Cifrado César
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_25_b25_cifrado_cesar(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
- **Proceso:**
- Recorrer la cadena de entrada.
- Para cada carácter, si es una letra, aplicar el desplazamiento.
- El desplazamiento es circular. Si al desplazar 'y' 3 posiciones se pasa de 'z', se debe volver al principio del alfabeto. Esto se logra con el operador módulo (`%`).
- Ejemplo para una letra minúscula `c`: `'a' + (c - 'a' + desplazamiento) % 26`.
:::
