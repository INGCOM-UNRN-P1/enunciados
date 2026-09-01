### Ejercicio 4.2 - Patrón AAA (Arrange - Act - Assert) ⭐☆☆☆☆

:::{exercise}
:label: ej-test-patron-aaa
Identificá y comentá las tres etapas del patrón AAA en la siguiente función de
prueba unitaria:

```{code-block} c
:linenos:
void test_calcular_promedio_tres_notas(void)
{
    int nota1 = 8;
    int nota2 = 6;
    int nota3 = 10;
    double esperado = 8.0;

    double resultado = calcular_promedio(nota1, nota2, nota3);

    assert(resultado == esperado);
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Separar explícitamente cada bloque con comentarios `//
    1. Arrange`, `// 2. Act`, `// 3. Assert`.
-   **[*plus ultra*]:** Escribir una segunda función de prueba
    `test_calcular_promedio_con_decimales` para notas 7, 8, 8.

:::
<!-- {exercise} -->

:::{solution} ej-test-patron-aaa
:class: dropdown
```{code-block} c
:linenos:
void test_calcular_promedio_tres_notas(void)
{
    // 1. Arrange (Preparar): Definición de datos de entrada y resultado esperado
    int nota1 = 8;
    int nota2 = 6;
    int nota3 = 10;
    double esperado = 8.0;

    // 2. Act (Actuar): Invocación de la función bajo prueba
    double resultado = calcular_promedio(nota1, nota2, nota3);

    // 3. Assert (Verificar): Comprobación de que el resultado coincide con lo esperado
    assert(resultado == esperado);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-patron-aaa -->

---
