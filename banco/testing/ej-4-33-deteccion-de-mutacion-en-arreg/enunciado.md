### Ejercicio 4.33 - Detección de mutación en arreglos de solo lectura ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-const-arrays
Analizá el siguiente código. ¿Por qué agregar el calificador `const` en la firma
de `buscar_elemento` previene bugs accidentales de modificación en las pruebas?

``` c
// Incorrecto:
int buscar_elemento(int arr[], int n, int objetivo);

// Correcto (seguro):
int buscar_elemento(const int arr[], int n, int objetivo);
```
<!-- c -->

-   **[*plus ultra*]:** Explicar qué error genera el compilador si una función
    intenta modificar un elemento de un arreglo declarado `const`.
-   **[*plus ultra*]:** Escribir un test que valide que el arreglo original no
    sufrió modificaciones tras la búsqueda.

:::
<!-- {exercise} -->

:::{solution} ej-test-const-arrays
:class: dropdown
El calificador `const` garantiza contractualmente que la función es de **solo
lectura**. Si por error un programador escribe `arr[i] = 0;` en lugar de `if
(arr[i] == 0)`, el compilador rechaza la compilación con un error inmediato
(`assignment of read-only location`), evitando corromper los datos del llamador.

:::
<!-- {solution} ej-test-const-arrays -->

---
