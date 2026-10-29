:::{exercise}
:label: ej-ref-fortaleza-password
Refactorizá la siguiente función que evalúa si una contraseña en arreglo tiene
al menos 8 caracteres, al menos una mayúscula y al menos un dígito:

``` c
int pass(char p[],int n){int u=0,d=0;if(n<8)return 0;for(int i=0;i<n;i++){if(p[i]>='A'&&p[i]<='Z')u=1;if(p[i]>='0'&&p[i]<='9')d=1;}return(u&&d)?1:0;}
```

-   **[*plus ultra*]:** Usar `isupper()` e `isdigit()` de `<ctype.h>`.
-   **[*plus ultra*]:** Retornar un `bool` y estructurar con contratos.

:::

:::{solution} ej-ref-fortaleza-password
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>

#define LONGITUD_MINIMA_CLAVE 8

bool validar_fortaleza_clave(const char clave[], int longitud)
{
    if (clave == NULL || longitud < LONGITUD_MINIMA_CLAVE)
    {
        return false;
    }

    bool tiene_mayuscula = false;
    bool tiene_digito = false;

    for (int i = 0; i < longitud; i++)
    {
        if (isupper((unsigned char)clave[i]))
        {
            tiene_mayuscula = true;
        }
        if (isdigit((unsigned char)clave[i]))
        {
            tiene_digito = true;
        }
    }

    return tiene_mayuscula && tiene_digito;
}

void test_fortaleza_clave(void)
{
    char c1[] = {'P', 'a', 's', 's', 'w', 'o', 'r', 'd', '1'};
    assert(validar_fortaleza_clave(c1, 9) == true);

    char c2[] = {'p', 'a', 's', 's', '1'};
    assert(validar_fortaleza_clave(c2, 5) == false);

    char c3[] = {'p', 'a', 's', 's', 'w', 'o', 'r', 'd', 's'};
    assert(validar_fortaleza_clave(c3, 9) == false);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación validar_fortaleza_clave
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool validar_fortaleza_clave(const char clave[], int longitud);

/*
 * Operación test_fortaleza_clave
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_fortaleza_clave(void);

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
