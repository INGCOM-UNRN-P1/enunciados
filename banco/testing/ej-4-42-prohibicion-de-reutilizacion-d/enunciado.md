:::{exercise}
:label: ej-test-reutilizacion-variables
Analizá qué problema de legibilidad y mantenimiento tiene el siguiente código
donde la variable `aux` se usa para tres propósitos completamente distintos:

```{code-block} c
:linenos:
int calcular_estadisticas_ventas(int ventas[], int n)
{
    int aux = 0;
    // Uso 1: acumular suma
    for (int i = 0; i < n; i++)
    {
        aux += ventas[i];
    }
    int promedio = aux / n;

    // Uso 2: buscar maximo
    aux = ventas[0];
    for (int i = 1; i < n; i++)
    {
        if (ventas[i] > aux)
        {
            aux = ventas[i];
        }
    }
    return aux;
}

```

-   **[*plus ultra*]:** Refactorizar declarando variables con nombres de
    propósito único (`suma`, `maximo`).
-   **[*plus ultra*]:** Modularizar en funciones independientes.

:::

:::{solution} ej-test-reutilizacion-variables
:class: dropdown
Reutilizar la misma variable para propósitos disímiles dificulta la lectura,
impide agregar aserciones claras sobre estados intermedios y propaga errores si
un bloque asume que la variable conserva su valor anterior.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_estadisticas_ventas
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int calcular_estadisticas_ventas(int ventas[], int n);

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
