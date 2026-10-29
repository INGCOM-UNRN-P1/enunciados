### Ejercicio 6.1 - Separar un programa ⭐⭐☆☆☆

**Tarea**: Tomá un programa simple que tengas en un solo archivo `.c` (por
ejemplo, una calculadora con funciones `sumar` y `restar`) y dividilo en tres
archivos:

- **`calculadora.h`**: El archivo de cabecera. Debe contener solo los prototipos
  de las funciones `sumar` y `restar` y las guardas de inclusión.
- **`calculadora.c`**: La implementación. Debe incluir `calculadora.h` y
  contener el código de las funciones `sumar` y `restar`.
- **`main.c`**: El programa principal. Debe incluir `calculadora.h` y llamar a
  las funciones para usarlas.
:::{hint} Lógica y Consideraciones
    errores de E/S con `ferror` y `feof`.
    archivo en todos los caminos de ejecución.

-   **[*plus ultra*]:** Agregar una función adicional multiplicar en calculadora.c y declararla en calculadora.h.
-   **[*plus ultra*]:** Compilar el proyecto con -Wall y -Wextra para asegurar cero advertencias.

:::
<!-- {hint} Lógica y Consideraciones -->
