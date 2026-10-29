:::{exercise}
:label: ej-ref-suma-digitos
Analizá el siguiente código. ¿Qué hace y cómo falla si recibe un número
negativo?

``` c
int d(int n){int c=0;while(n){c+=n%10;n/=10;}return c;}
```

-   **[*plus ultra*]:** Refactorizar usando `abs()` o convirtiendo el número a
    positivo.
-   **[*plus ultra*]:** Escribir tests con `assert()` para números positivos,
    negativos y el cero.

:::

:::{solution} ej-ref-suma-digitos
:class: dropdown
**Diagnóstico:** Suma los dígitos de un número. Para `-123`, `n % 10` produce
restos negativos en C99+, dando una suma errónea (`-1 + -2 + -3 = -6`).

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdlib.h>

int sumar_digitos(int numero)
{
    int n = abs(numero);
    int suma = 0;
    while (n > 0)
    {
        suma += (n % 10);
        n /= 10;
    }
    return suma;
}

void test_sumar_digitos(void)
{
    assert(sumar_digitos(1234) == 10);
    assert(sumar_digitos(-505) == 10);
    assert(sumar_digitos(0) == 0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación sumar_digitos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int sumar_digitos(int numero);

/*
 * Operación test_sumar_digitos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_sumar_digitos(void);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
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
