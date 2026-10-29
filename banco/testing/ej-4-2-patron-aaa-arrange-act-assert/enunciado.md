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

-   **[*plus ultra*]:** Separar explícitamente cada bloque con comentarios `//
    1. Arrange`, `// 2. Act`, `// 3. Assert`.
-   **[*plus ultra*]:** Escribir una segunda función de prueba
    `test_calcular_promedio_con_decimales` para notas 7, 8, 8.

:::

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

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Patrón AAA (Arrange - Act - Assert)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_a_arrange_act_assert(int val);

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
