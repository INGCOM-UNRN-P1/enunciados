### Ejercicio 9.44 - Conversor de Caracteres a Entero (`atoi` Casero) ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-atoi-casero
Refactorizá la siguiente función que parsea una secuencia de dígitos ASCII a un
entero:

``` c
int parse(char s[], int n){int r=0,i=0,sg=1;if(s[0]=='-'){sg=-1;i=1;}for(;i<n;i++)r=r*10+(s[i]-'0');return r*sg;}
```
<!-- c -->

-   **[*plus ultra*]:** Validar que todos los caracteres entre `i` y `n` sean
    efectivamente dígitos con `isdigit()`.
-   **[*plus ultra*]:** Retornar un código de estado booleano `bool *exito`.

:::
<!-- {exercise} -->

:::{solution} ej-ref-atoi-casero
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>

int convertir_caracteres_a_entero(const char digitos[], int longitud, bool *exito)
{
    if (digitos == NULL || longitud <= 0 || exito == NULL)
    {
        if (exito != NULL)
        {
            *exito = false;
        }
        return 0;
    }

    *exito = true;
    int signo = 1;
    int indice_inicio = 0;

    if (digitos[0] == '-')
    {
        signo = -1;
        indice_inicio = 1;
        if (longitud == 1)
        {
            *exito = false;
            return 0;
        }
    }

    int acumulador = 0;
    for (int i = indice_inicio; i < longitud; i++)
    {
        if (!isdigit((unsigned char)digitos[i]))
        {
            *exito = false;
            return 0;
        }
        acumulador = (acumulador * 10) + (digitos[i] - '0');
    }

    return acumulador * signo;
}

void test_convertir_a_entero(void)
{
    bool ok = false;
    char num1[] = {'1', '2', '3', '4'};
    assert(convertir_caracteres_a_entero(num1, 4, &ok) == 1234 && ok);

    char num2[] = {'-', '5', '0'};
    assert(convertir_caracteres_a_entero(num2, 3, &ok) == -50 && ok);

    char inv[] = {'1', '2', 'x', '4'};
    convertir_caracteres_a_entero(inv, 4, &ok);
    assert(!ok);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-atoi-casero -->

---
