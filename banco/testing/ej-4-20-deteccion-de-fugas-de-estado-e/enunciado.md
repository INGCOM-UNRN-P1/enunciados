:::{exercise}
:label: ej-test-fuga-estado
Dado el siguiente código con una variable global oculta:

```{code-block} c
:linenos:
int ultimo_resultado = 0;

int multiplicar_y_guardar(int a, int b)
{
    ultimo_resultado = a * b;
    return ultimo_resultado;
}

```

Explicá qué problema de diseño introduce `ultimo_resultado` si dos partes del
programa invocan la función en momentos intercalados.

-   **[*plus ultra*]:** Refactorizar eliminando la variable global.
-   **[*plus ultra*]:** Explicar el concepto de función reentrante (*reentrant
    function*).

:::

:::{solution} ej-test-fuga-estado
:class: dropdown
Si una parte del programa llama a `multiplicar_y_guardar(3, 4)`, el resultado
esperado es `12`. Pero si otra parte del programa llama a
`multiplicar_y_guardar(10, 2)` antes de que la primera lea `ultimo_resultado`,
el valor se sobrescribe a `20`, corrompiendo los datos del primer llamador.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación multiplicar_y_guardar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int multiplicar_y_guardar(int a, int b);

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
