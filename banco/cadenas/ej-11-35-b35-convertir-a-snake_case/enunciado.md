#### Descripción
Implementar una función que convierta una cadena en `camelCase` o `PascalCase` a
`snake_case`. Esto implica insertar un guion bajo antes de cada letra mayúscula
y convertir toda la cadena a minúsculas.



:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer la cadena de entrada.
    2.  Si se encuentra una letra mayúscula (y no es el primer carácter), añadir
        un `_` a la cadena de resultado antes de añadir la letra.
    3.  Convertir cada carácter a minúscula antes de añadirlo a la cadena de
        resultado.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION a_snake_case(cadena)
VARIABLES:
    resultado (cadena)
INICIO
    PARA cada caracter c en cadena HACER
        SI es_mayuscula(c) Y resultado NO está vacío ENTONCES
            AÑADIR '_' a resultado
        FIN SI
        AÑADIR convertir_a_minuscula(c) a resultado
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Convertir a `snake_case`
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_nvertir_a_snake_case(int val);

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
- Si se encuentra una letra mayúscula (y no es el primer carácter), añadir un `_` a la cadena de resultado antes de añadir la letra.
- Convertir cada carácter a minúscula antes de añadirlo a la cadena de resultado.
:::
