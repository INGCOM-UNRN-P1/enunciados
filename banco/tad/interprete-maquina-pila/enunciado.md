# Intérprete de Máquina Virtual de Pila

Implementar un intérprete de máquina de pila (*Stack Machine*) para evaluación de secuencias de instrucciones.

Instrucciones soportadas:
- `PUSH <int>`: Empuja un número a la pila.
- `ADD`: Desapila dos valores $A$ y $B$, calcula $B + A$ y apila el resultado.
- `SUB`: Desapila dos valores $A$ y $B$, calcula $B - A$ y apila el resultado.
- `MUL`: Desapila dos valores $A$ y $B$, calcula $B \times A$ y apila el resultado.
- `DIV`: Desapila dos valores $A$ y $B$, calcula $B / A$. Si $A == 0$, emite `ERROR_DIV_ZERO`.
- `DUP`: Duplica el elemento superior de la pila.
- `SWAP`: Intercambia los dos elementos superiores de la pila.
- `POP`: Desapila e imprime el valor superior. Si la pila está vacía, imprime `ERROR_UNDERFLOW`.
- `PEEK`: Muestra el tope sin desapilar.
- `HALT`: Finaliza la ejecución.

### 📋 Contrato de las Funciones

```c
/*
 * Operación inicializar_pila
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void inicializar_pila(PilaVirtual *p);

/*
 * Operación push
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int push(PilaVirtual *p, long v);

/*
 * Operación pop
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int pop(PilaVirtual *p, long *out);

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
- Mantené un array para la pila con un puntero o índice `sp` (stack pointer).
- Verificá siempre que haya suficientes operandos en la pila antes de ejecutar operaciones binarias.
- En la operación `DIV`, controlá que el divisor no sea 0 para prevenir crash de división entera.
:::
