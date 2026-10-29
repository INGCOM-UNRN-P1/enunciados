:::{exercise}
:label: ej-ref-cilindro-magico
Refactorizá la siguiente función que calcula el volumen de un cilindro
eliminando la constante mágica y aplicando contratos:

``` c
double v(double r,double h){return 3.14159265*r*r*h;}
```

-   **[*plus ultra*]:** Definir `#define CONSTANTE_PI 3.141592653589793`.
-   **[*plus ultra*]:** Validar que radio y altura sean mayores a cero.

:::

:::{solution} ej-ref-cilindro-magico
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>

#define CONSTANTE_PI 3.14159265358979323846

double calcular_volumen_cilindro(double radio, double altura)
{
    if (radio <= 0.0 || altura <= 0.0)
    {
        return -1.0;
    }
    return CONSTANTE_PI * radio * radio * altura;
}

void test_volumen_cilindro(void)
{
    double vol = calcular_volumen_cilindro(1.0, 10.0);
    assert(fabs(vol - (CONSTANTE_PI * 10.0)) < 1e-6);
    assert(calcular_volumen_cilindro(-1.0, 5.0) == -1.0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_volumen_cilindro
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double calcular_volumen_cilindro(double radio, double altura);

/*
 * Operación test_volumen_cilindro
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_volumen_cilindro(void);

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
