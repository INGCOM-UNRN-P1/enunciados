:::{exercise}
:label: ej-ref-lazo-espagueti
Refactorizá la siguiente función que utiliza lazos infinitos `while(1)`,
variables `flag` crípticas y `break` desordenados para verificar si un número es
primo:

```{code-block} c
:linenos:
int check(int n)
{
    int flag = 1;
    int i = 2;
    if (n <= 1) return 0;
    while (1)
    {
        if (i * i > n) break;
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }
    return flag;
}

```

-   **[*plus ultra*]:** Eliminar `while(1)` y `break` reemplazándolos por un
    lazo estructurado con condición clara.
-   **[*plus ultra*]:** Optimizar evaluando solo números impares después del 2.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación check
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int check(int n);

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
