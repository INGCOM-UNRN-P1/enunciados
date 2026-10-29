:::{exercise}
:label: ej-test-inicializacion-vars
Analizá qué comportamiento indefinido (*Undefined Behavior*) ocurre en la
siguiente función y corregilo aplicando la [Regla
0x0003h](../../reglas/0_sintaxis.md#0x0003h):

```{code-block} c
:linenos:
int contar_multiplos(const int arr[], int n, int divisor)
{
    int contador; // ¡Variable no inicializada!
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % divisor == 0)
        {
            contador++;
        }
    }
    return contador;
}

```

-   **[*plus ultra*]:** Explicar por qué las variables locales contienen valores
    basura si no se inicializan explícitamente.
-   **[*plus ultra*]:** Escribir una prueba unitaria para verificar
    `contar_multiplos`.

:::

:::{solution} ej-test-inicializacion-vars
:class: dropdown
Al no inicializarse, `contador` contiene un valor residual indeterminado
proveniente de la memoria de la pila. El incremento `contador++` genera
comportamiento indefinido y resultados erróneos impredecibles.

**Corrección:**
```{code-block} c
:linenos:
int contar_multiplos(const int arr[], int n, int divisor)
{
    if (divisor == 0)
    {
        return -1;
    }
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % divisor == 0)
        {
            contador++;
        }
    }
    return contador;
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación contar_multiplos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int contar_multiplos(const int arr[], int n, int divisor);

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
