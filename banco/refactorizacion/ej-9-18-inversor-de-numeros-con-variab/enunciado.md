:::{exercise}
:label: ej-ref-inversor-reutilizado
Descubrí el algoritmo y refactorizalo:

``` c
int inv(int x){int r=0;while(x>0){r=r*10+x%10;x=x/10;}return r;}
```

-   **[*plus ultra*]:** Manejar números negativos conservando su signo.
-   **[*plus ultra*]:** Comprobar palíndromos numéricos reutilizando esta
    función.

:::

:::{solution} ej-ref-inversor-reutilizado
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdlib.h>

int invertir_numero_entero(int numero)
{
    int signo = (numero < 0) ? -1 : 1;
    int n = abs(numero);
    int invertido = 0;

    while (n > 0)
    {
        invertido = (invertido * 10) + (n % 10);
        n /= 10;
    }
    return invertido * signo;
}

void test_invertir_numero(void)
{
    assert(invertir_numero_entero(1234) == 4321);
    assert(invertir_numero_entero(-580) == -85);
    assert(invertir_numero_entero(0) == 0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación invertir_numero_entero
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int invertir_numero_entero(int numero);

/*
 * Operación test_invertir_numero
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_invertir_numero(void);

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
