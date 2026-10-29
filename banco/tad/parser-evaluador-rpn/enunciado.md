Implementar un evaluador de expresiones aritméticas escritas en Notación Polaca Inversa (RPN / Postfija) utilizando un TAD Pila.

El programa debe leer líneas con expresiones RPN donde los tokens están separados por espacios.
Operadores binarios soportados: `+`, `-`, `*`, `/`.

Para cada línea leída:
- Si la expresión es válida y queda un único elemento final en la pila, imprime `RES: <valor>`.
- Si hay división por cero, imprime `ERROR: DIV_ZERO`.
- Si la sintaxis es inválida (faltan operandos o sobran valores al final), imprime `ERROR: SINTAXIS`.
- El comando `EXIT` termina el programa.

### 📋 Contrato de las Funciones

```c
/*
 * Operación rpn_init
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void rpn_init(PilaRPN *p);

/*
 * Operación rpn_push
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int rpn_push(PilaRPN *p, long v);

/*
 * Operación rpn_pop
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int rpn_pop(PilaRPN *p, long *out);

/*
 * Operación evaluar_linea
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void evaluar_linea(char *linea);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Operación típica
```text
ADD 10, ADD 20
Estructura con 2 elementos
```
:::
:::{tab-item} Colección vacía
```text
Consulta sobre estructura recién inicializada
Retorno seguro / estado vacío
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Tokenizá la entrada por espacios.
- Si el token es un operador (+, -, *, /), desapilá dos operandos, calculá op(b, a) y apilá el resultado.
- Si es un número, convertilo con strtol() o atoi() y apilalo en la pila de evaluación.
:::
