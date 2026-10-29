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

-   **[*plus ultra*]:** Crear `calcular_subtotal`, `calcular_descuento`,
    `calcular_iva` y `verificar_saldo`.
-   **[*plus ultra*]:** Escribir pruebas unitarias con `assert()` para cada
    función pura.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación facturar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void facturar(double p, int cant, int tipo, double saldo);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
