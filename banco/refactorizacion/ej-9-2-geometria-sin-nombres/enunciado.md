:::{exercise}
:label: ej-ref-area-triangulo
Descifrá el propósito geométrico del siguiente fragmento y refactorizalo:

``` c
double x(double a,double b){return a*b/2.0;}
```

-   **[*plus ultra*]:** Validar que las dimensiones sean estrictamente positivas
    retornando `-1.0` si son inválidas.
-   **[*plus ultra*]:** Documentar con etiquetas Doxygen (`@param`, `@pre`,
    `@returns`).

:::

:::{solution} ej-ref-area-triangulo
:class: dropdown
**Diagnóstico:** Calcula el área de un triángulo con base `a` y altura `b`. No
valida dimensiones no positivas.

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

double calcular_area_triangulo(double base, double altura)
{
    if (base <= 0.0 || altura <= 0.0)
    {
        return -1.0;
    }
    return (base * altura) / 2.0;
}

void test_area_triangulo(void)
{
    assert(calcular_area_triangulo(10.0, 5.0) == 25.0);
    assert(calcular_area_triangulo(-2.0, 5.0) == -1.0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_area_triangulo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double calcular_area_triangulo(double base, double altura);

/*
 * Operación test_area_triangulo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_area_triangulo(void);

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
