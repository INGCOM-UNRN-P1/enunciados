### Ejercicio 9.25 - La Función Monstruo de Facturación ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-funcion-monstruo
La siguiente función viola el Principio de Responsabilidad Única ([Regla
0x2005h](../../reglas/2_funciones.md#0x2005h)) y mezcla E/S con cálculos.
Descomponela en al menos 3 funciones atómicas puras y un `main` interactivo:

```{code-block} c
:linenos:
#include <stdio.h>

void facturar(double p, int cant, int tipo, double saldo)
{
    double sub = p * cant;
    double desc = 0;
    if (tipo == 1) desc = sub * 0.10;
    else if (tipo == 2) desc = sub * 0.20;
    double iva = (sub - desc) * 0.21;
    double total = (sub - desc) + iva;
    printf("Total: %.2f\n", total);
    if (saldo >= total) {
        printf("Pago exitoso. Saldo restante: %.2f\n", saldo - total);
    } else {
        printf("Saldo insuficiente\n");
    }
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Crear `calcular_subtotal`, `calcular_descuento`,
    `calcular_iva` y `verificar_saldo`.
-   **[*plus ultra*]:** Escribir pruebas unitarias con `assert()` para cada
    función pura.

:::
<!-- {exercise} -->

---
