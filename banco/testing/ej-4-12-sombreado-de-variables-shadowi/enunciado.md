:::{exercise}
:label: ej-test-shadowing
Leé el siguiente fragmento e indicá qué imprime en consola y por qué:

```{code-block} c
:linenos:
#include <stdio.h>

int factor = 10; // Global

int multiplicar(int valor)
{
    int factor = 2; // Local con mismo nombre que la global
    return valor * factor;
}

int main(void)
{
    int resultado = multiplicar(5);
    printf("Resultado: %d, Factor: %d\n", resultado, factor);
    return 0;
}

```

-   **[*plus ultra*]:** Explicar qué advertencia emite el compilador al compilar
    con `-Wshadow`.
-   **[*plus ultra*]:** Eliminar la variable global para evitar confusiones de
    alcance (*scope*).

:::

:::{solution} ej-test-shadowing
:class: dropdown
Imprime: `Resultado: 10, Factor: 10`.

La variable local `factor = 2` dentro de `multiplicar` oculta ("ensombrece") a
la variable global `factor = 10` durante el alcance de la función. Al salir de
la función, la global permanece inalterada con valor `10`. La bandera `-Wshadow`
alerta explícitamente sobre estas declaraciones ambiguas.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación multiplicar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int multiplicar(int valor);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
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
