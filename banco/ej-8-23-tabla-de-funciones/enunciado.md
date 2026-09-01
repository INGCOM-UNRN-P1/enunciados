### Ejercicio 8.23 - Tabla de Funciones ⭐⭐☆☆☆

Crear un arreglo de punteros a funciones para una calculadora:

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef double (*operacion_t)(double, double);
double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);
operacion_t operaciones[] = {sumar, restar, multiplicar, dividir};
```
<!-- {code-block} c -->

Implementar un menú que permita seleccionar y ejecutar operaciones usando este
arreglo.

---

## Punteros Nulos y Validación
