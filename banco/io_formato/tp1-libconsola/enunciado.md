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

### Flujo interactivo y búfer de línea

En sistemas operativos tipo POSIX y bajo la biblioteca estándar de C, el flujo
`stdin` conectado a una terminal opera por defecto con **almacenamiento en búfer
de línea** (_line-buffered_). Esto significa que el sistema operativo no
transfiere ningún carácter al programa hasta que el usuario pulsa la tecla
**Enter** (`\n`).

### Qué pasa cuando usamos `scanf`

Cuando llamás `scanf("%d", &variable)` o `scanf("%f", &variable)`:

1. `scanf` consume los caracteres numéricos iniciales compatibles.
2. Al toparse con el salto de línea `'\n'` (o con cualquier letra o símbolo no
   admisible), detiene la conversión.
3. El carácter `'\n'` (y cualquier texto posterior no procesado) **permanece en
   el búfer `stdin`**.

### El problema del salto de línea residual

Si no limpiás el flujo:

- **Lecturas sucesivas de caracteres**: Una llamada inmediata a
  `scanf("%c", &c)` o `getchar()` leerá directamente el `'\n'` residual sin
  esperar a que el usuario escriba nada.
- **Entradas inválidas y bucles infinitos**: Si `scanf("%d", ...)` encuentra
  letras (ej. `"hola"`), no consume nada y retorna `0` (fallo de conversión). En
  la siguiente iteración, esas mismas letras siguen en el búfer, provocando un
  ciclo infinito de lecturas fallidas.

### Solución canónica: `limpiar_buffer_entrada`

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

### Prohibición absoluta de `fflush(stdin)`

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
/**
 * @brief Limpia el bufer de entrada estandar descartando caracteres hasta
 *        el salto de linea o EOF.
 */
void limpiar_buffer_entrada(void);

/**
 * @brief Lee un numero entero desde la entrada estandar mostrando un mensaje.
 *
 * @param mensaje Mensaje o prompt a mostrar al usuario.
 * @return int El numero entero ingresado por el usuario.
 */
int leer_entero(const char *mensaje);

/**
 * @brief Lee un numero entero dentro de un rango inclusivo [min, max].
 *
 * @param mensaje Mensaje o prompt a mostrar al usuario.
 * @param min Limite inferior admisible.
 * @param max Limite superior admisible.
 * @return int El numero entero dentro del rango ingresado.
 */
int leer_entero_entre(const char *mensaje, int min, int max);

/**
 * @brief Lee un numero de coma flotante desde la entrada estandar.
 *
 * @param mensaje Mensaje o prompt a mostrar al usuario.
 * @return float El numero flotante ingresado por el usuario.
 */
float leer_flotante(const char *mensaje);

/**
 * @brief Lee un numero flotante dentro de un rango inclusivo [min, max].
 *
 * @param mensaje Mensaje o prompt a mostrar al usuario.
 * @param min Limite inferior admisible.
 * @param max Limite superior admisible.
 * @return float El numero flotante dentro del rango ingresado.
 */
float leer_flotante_entre(const char *mensaje, float min, float max);

/**
 * @brief Lee un unico caracter desde la entrada estandar mostrando un mensaje.
 *
 * @param mensaje Mensaje o prompt a mostrar al usuario.
 * @return char El caracter ingresado por el usuario.
 */
char leer_caracter(const char *mensaje);

/**
 * @brief Lee un valor logico (booleano) desde la entrada estandar.
 *
 * @param mensaje Mensaje o prompt a mostrar al usuario.
 * @return bool Valor de verdad obtenido (true o false).
 */
bool leer_logico(const char *mensaje);

/**
 * @brief Determina si un valor entero se encuentra dentro de [min, max].
 *
 * @param valor Valor entero a verificar.
 * @param min Limite inferior del rango.
 * @param max Limite superior del rango.
 * @return bool true si min <= valor <= max, false en caso contrario.
 */
bool esta_en_rango_entero(int valor, int min, int max);

/**
 * @brief Determina si un valor flotante se encuentra dentro de [min, max].
 *
 * @param valor Valor flotante a verificar.
 * @param min Limite inferior del rango.
 * @param max Limite superior del rango.
 * @return bool true si min <= valor <= max, false en caso contrario.
 */
bool esta_en_rango_flotante(float valor, float min, float max);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
