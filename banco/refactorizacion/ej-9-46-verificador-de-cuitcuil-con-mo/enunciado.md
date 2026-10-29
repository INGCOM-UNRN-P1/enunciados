:::{exercise}
:label: ej-ref-cuit-modulo11
Refactorizá el siguiente cálculo del dígito verificador de un CUIT argentino de
10 dígitos (factores: `5, 4, 3, 2, 7, 6, 5, 4, 3, 2`):

``` c
int dv(int d[10]){int f[10]={5,4,3,2,7,6,5,4,3,2},s=0;for(int i=0;i<10;i++)s+=d[i]*f[i];int r=11-(s%11);if(r==11)return 0;if(r==10)return 9;return r;}
```

-   **[*plus ultra*]:** Aplicar estilo Allman y nombres descriptivos.
-   **[*plus ultra*]:** Validar con `assert()` para CUITs conocidos.

:::

:::{solution} ej-ref-cuit-modulo11
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stddef.h>

#define CANTIDAD_DIGITOS_BASE_CUIT 10

int calcular_digito_verificador_cuit(const int primeros_10_digitos[10])
{
    if (primeros_10_digitos == NULL)
    {
        return -1;
    }
    static const int factores_ponderacion[10] = {5, 4, 3, 2, 7, 6, 5, 4, 3, 2};

    int suma_ponderada = 0;
    for (int i = 0; i < CANTIDAD_DIGITOS_BASE_CUIT; i++)
    {
        if (primeros_10_digitos[i] < 0 || primeros_10_digitos[i] > 9)
        {
            return -1;
        }
        suma_ponderada += (primeros_10_digitos[i] * factores_ponderacion[i]);
    }

    int resto = suma_ponderada % 11;
    int digito_calculado = 11 - resto;

    if (digito_calculado == 11)
    {
        return 0;
    }
    if (digito_calculado == 10)
    {
        return 9;
    }
    return digito_calculado;
}

void test_cuit_verificador(void)
{
    int digitos_test[10] = {2, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    int dv = calcular_digito_verificador_cuit(digitos_test);
    assert(dv >= 0 && dv <= 9);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_digito_verificador_cuit
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int calcular_digito_verificador_cuit(const int primeros_10_digitos[10]);

/*
 * Operación test_cuit_verificador
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_cuit_verificador(void);

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
