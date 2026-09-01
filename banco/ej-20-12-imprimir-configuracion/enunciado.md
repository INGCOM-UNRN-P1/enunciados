### Ejercicio 20.12 - Imprimir configuración ⭐⭐☆☆☆

Implementar una función que imprima la configuración de un dispositivo según su
tipo. Este ejercicio demuestra el uso correcto de uniones etiquetadas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void imprimir_dispositivo(const dispositivo_t *dispositivo);
```
<!-- c -->

## Códigos de Error

Definir una enumeración exhaustiva para códigos de error de un sistema.

```{code-block} c
:linenos:
enum codigo_error
{
    ERROR_NINGUNO = 0,
    ERROR_MEMORIA,
    ERROR_ARCHIVO_NO_ENCONTRADO,
    ERROR_PERMISO_DENEGADO,
    ERROR_ARGUMENTO_INVALIDO,
    ERROR_TIMEOUT,
    ERROR_CONEXION,
    ERROR_DESCONOCIDO
};
```
<!-- {code-block} c -->
