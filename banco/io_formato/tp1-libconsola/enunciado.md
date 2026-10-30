Módulo de entrada/salida interactiva tipada. Su objetivo es encapsular las
llamadas a `scanf` y aislar la lógica de descarte del búfer residual.

Funciones a implementar por el estudiante en `consola.c`:

- `int leer_entero(const char *mensaje)`: Muestra el prompt, lee un número
  entero, verifica el valor de retorno de `scanf`, descarta el residuo de línea
  y reintenta ante entradas no válidas.
- `int leer_entero_entre(const char *mensaje, int min, int max)`: Solicita un
  entero y valida que pertenezca al intervalo cerrado `[min, max]`.
- `float leer_flotante(const char *mensaje)`: Muestra el prompt, lee un número
  de coma flotante (`float`), valida la lectura, limpia el búfer y reintenta si
  falló.
- `float leer_flotante_entre(const char *mensaje, float min, float max)`:
  Solicita un flotante y garantiza que cumpla `min <= valor <= max`.
- `char leer_caracter(const char *mensaje)`: Lee un único carácter válido
  descartando espacios previos y caracteres remanentes en la línea.
- `bool leer_logico(const char *mensaje)`: Solicita confirmación booleana (ej.
  `s/n` o `1/0`) y retorna `true` o `false`.

Funciones auxiliares provistas e implementadas:

- `void limpiar_buffer_entrada(void)`: Vacía caracteres del búfer hasta el salto
  de línea o fin de archivo (`EOF`).
- `bool esta_en_rango_entero(int valor, int min, int max)`: Predicado de
  pertenencia a rango entero cerrado `[min, max]`.
- `bool esta_en_rango_flotante(float valor, float min, float max)`: Predicado de
  pertenencia a rango flotante cerrado `[min, max]`.


En sistemas operativos tipo POSIX y bajo la biblioteca estándar de C, el flujo
`stdin` conectado a una terminal opera por defecto con **almacenamiento en búfer
de línea** (_line-buffered_). Esto significa que el sistema operativo no
transfiere ningún carácter al programa hasta que el usuario pulsa la tecla
**Enter** (`\n`).


Cuando llamás `scanf("%d", &variable)` o `scanf("%f", &variable)`:

1. `scanf` consume los caracteres numéricos iniciales compatibles.
2. Al toparse con el salto de línea `'\n'` (o con cualquier letra o símbolo no
   admisible), detiene la conversión.
3. El carácter `'\n'` (y cualquier texto posterior no procesado) **permanece en
   el búfer `stdin`**.


Si no limpiás el flujo:

- **Lecturas sucesivas de caracteres**: Una llamada inmediata a
  `scanf("%c", &c)` o `getchar()` leerá directamente el `'\n'` residual sin
  esperar a que el usuario escriba nada.
- **Entradas inválidas y bucles infinitos**: Si `scanf("%d", ...)` encuentra
  letras (ej. `"hola"`), no consume nada y retorna `0` (fallo de conversión). En
  la siguiente iteración, esas mismas letras siguen en el búfer, provocando un
  ciclo infinito de lecturas fallidas.


La librería `consola` provee la solución estándar:

```c
void limpiar_buffer_entrada(void)
{
    int caracter;
    while ((caracter = getchar()) != '\n' && caracter != EOF)
    {
    }
}
```

#### Análisis detallado:

1. **Tipo de variable `int caracter`**: `getchar()` retorna un entero (`int`),
   no un `char`. Esto es obligatorio porque debe poder representar cualquier
   carácter válido (`unsigned char` convertido a `int`) y, además, el valor
   especial `EOF` (típicamente `-1`). Si declarás `char c`, en arquitecturas
   donde `char` es `unsigned` la comparación `c != EOF` jamás será verdadera,
   derivando en bucle infinito.
2. **Condición de corte `(caracter != '\n' && caracter != EOF)`**: El bucle
   consume y descarta byte por byte del búfer hasta vaciar el salto de línea
   generado por Enter o hasta alcanzar el fin del flujo (`EOF`).


En muchos foros o materiales desactualizados se sugiere erróneamente usar
`fflush(stdin)`.

> [!CAUTION]
> **`fflush(stdin)` está terminantemente prohibido.**  
> Según la especificación oficial del estándar ISO de C (ISO/IEC 9899,
> §7.21.5.2):
>
> - `fflush` **solo está definido para flujos de salida** (`stdout`, `stderr`) o
>   flujos de actualización donde la última operación no fue de lectura.
> - Invocar `fflush` sobre un flujo de entrada como `stdin` produce
>   **Comportamiento Indefinido** (_Undefined Behavior_).
> - Aunque en algunos compiladores antiguos sobre Windows/MS-DOS descartaba el
>   búfer como extensión propietaria, en Linux, GCC y POSIX el comportamiento es
>   impredecible y no limpia la entrada.

### 📋 Contrato de las Funciones

```c
/*
 * Limpia el bufer de entrada estandar descartando caracteres hasta
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void limpiar_buffer_entrada(void);

/*
 * Lee un numero entero desde la entrada estandar mostrando un mensaje.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int leer_entero(const char *mensaje);

/*
 * Lee un numero entero dentro de un rango inclusivo [min, max].
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int leer_entero_entre(const char *mensaje, int min, int max);

/*
 * Lee un numero de coma flotante desde la entrada estandar.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
float leer_flotante(const char *mensaje);

/*
 * Lee un numero flotante dentro de un rango inclusivo [min, max].
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
float leer_flotante_entre(const char *mensaje, float min, float max);

/*
 * Lee un unico caracter desde la entrada estandar mostrando un mensaje.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
char leer_caracter(const char *mensaje);

/*
 * Lee un valor logico (booleano) desde la entrada estandar.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool leer_logico(const char *mensaje);

/*
 * Determina si un valor entero se encuentra dentro de [min, max].
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
bool esta_en_rango_entero(int valor, int min, int max);

/*
 * Determina si un valor flotante se encuentra dentro de [min, max].
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
bool esta_en_rango_flotante(float valor, float min, float max);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- En limpiar_buffer_entrada(), declará la variable del bucle como int para comparar correctamente contra EOF y \n.
- Verificá siempre el valor de retorno de scanf: si retorna 0 o EOF, limpiá el búfer antes de pedir nuevamente el dato para evitar bucles infinitos.
- Bajo el estándar C, fflush(stdin) produce Comportamiento Indefinido (Undefined Behavior); usá limpiar_buffer_entrada().
:::
