### Ejercicio 18.6 - Arreglos con Capacidad ⭐⭐⭐☆☆

Encapsular un arreglo en una estructura para agrupar el contenedor de datos, su
longitud actual y su capacidad máxima. Esto previene errores de desbordamiento
de búfer y simplifica pasar la información del arreglo a funciones.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
#define CAPACIDAD_MAX 100
typedef struct
{
    int datos[CAPACIDAD_MAX];
    size_t longitud; // Elementos actualmente en uso
} arreglo_t;
```
<!-- c -->

Este ejercicio puede ser mejorado con memoria dinámica, para lo cual es
necesario agregar un atributo más con el tamaño en memoria pedido para `datos`.
