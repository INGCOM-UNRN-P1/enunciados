### Ejercicio 31.1 - Análisis de promedio ⭐⭐☆☆☆

:::{exercise} rol_promedio
:label: rol_promedio

Dado el siguiente código, identificá el "rol" principal de cada una de las
variables listadas.

```{code-block} c
:linenos:
#include <stdbool.h>
// Encuentra el promedio de los números positivos en un arreglo.
double promedio_positivos(const int arreglo[], size_t n, bool *exito)
{
    double suma = 0.0; // Variable 1
    int contador = 0;  // Variable 2
    *exito = false;    // Variable 3 (a través del puntero)
    for (size_t i = 0; i < n; i++)
    { // Variable 4
        if (arreglo[i] > 0)
        {
            suma = suma + arreglo[i];
            contador++;
        }
    }
    if (contador > 0)
    {
        *exito = true;
        return suma / contador; // Variable 5 (implícita)
    }
    return 0.0;
}
```
<!-- {code-block} c -->

**Tarea**: Para cada una de las siguientes variables, describí su rol principal:

1.  `suma`
2.  `contador`
3.  `exito` (el valor al que apunta)
4.  `i`
5.  El valor de retorno de la función.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {exercise} rol_promedio -->

:::{solution} rol_promedio
:class: dropdown

1.  **`suma`**: **Acumulador**. Su propósito es acumular la suma de los valores
    positivos encontrados.
2.  **`contador`**: **Contador**. Su rol es contar cuántos números positivos se
    han encontrado.
3.  **`exito`**: **Bandera (Flag)**. Se utiliza para señalizar al código que
    llama a la función si la operación fue exitosa (es decir, si se encontró al
    menos un número positivo).
4.  **`i`**: **Variable de Control de lazo (Iterador)**. Su único propósito es
    controlar las iteraciones del lazo `for`.
5.  **Valor de retorno**: **Variable de Salida**. Contiene el resultado
    principal del cálculo de la función. 
    
:::
<!-- {solution} rol_promedio -->
