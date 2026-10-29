:::{exercise}
:label: ej-test-una-asercion
El siguiente bloque de pruebas viola la [Regla
0x2006h](../../reglas/2_funciones.md#0x2006h) (una aserción o caso por función
de prueba). Refactorizalo en funciones independientes con nombres descriptivos:

```{code-block} c
:linenos:
void test_todas_las_operaciones(void)
{
    assert(sumar(2, 3) == 5);
    assert(sumar(-1, 1) == 0);
    assert(restar(10, 4) == 6);
    assert(restar(3, 8) == -5);
    assert(multiplicar(3, 4) == 12);
}

```

-   **[*plus ultra*]:** Crear una función `correr_todas_las_pruebas()` que
    invoque a cada función individual de test.
-   **[*plus ultra*]:** Explicar por qué acumular muchos `assert` en una sola
    función dificulta saber qué otros casos fallan cuando el primero aborta.

:::

:::{solution} ej-test-una-asercion
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

void test_sumar_positivos(void)
{
    assert(sumar(2, 3) == 5);
}

void test_sumar_opuestos(void)
{
    assert(sumar(-1, 1) == 0);
}

void test_restar_positivo_mayor(void)
{
    assert(restar(10, 4) == 6);
}

void test_restar_resultado_negativo(void)
{
    assert(restar(3, 8) == -5);
}

void test_multiplicar_positivos(void)
{
    assert(multiplicar(3, 4) == 12);
}

void correr_todas_las_pruebas(void)
{
    test_sumar_positivos();
    test_sumar_opuestos();
    test_restar_positivo_mayor();
    test_restar_resultado_negativo();
    test_multiplicar_positivos();
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Refactorización de pruebas acumuladas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_acion_de_pruebas_acu(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
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
