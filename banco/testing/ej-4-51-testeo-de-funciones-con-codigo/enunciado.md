:::{exercise}
:label: ej-test-codigos-error
Diseñá una función pura para calcular la velocidad promedio $v = d / t$:
`int calcular_velocidad(double distancia, double tiempo, double *velocidad)`

Códigos de retorno:
- `0`: Éxito.
- `1`: Distancia inválida (`distancia < 0`).
- `2`: Tiempo inválido (`tiempo <= 0`).
- `3`: Puntero `velocidad` nulo (`NULL`).

Escribí pruebas unitarias para cada uno de los 4 códigos posibles.

-   **[*plus ultra*]:** Asegurar que ante código de error, `*velocidad` no sea
    modificada.

:::

:::{solution} ej-test-codigos-error
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stddef.h>

int calcular_velocidad(double distancia, double tiempo, double *velocidad)
{
    if (velocidad == NULL)
    {
        return 3;
    }
    if (distancia < 0.0)
    {
        return 1;
    }
    if (tiempo <= 0.0)
    {
        return 2;
    }
    *velocidad = distancia / tiempo;
    return 0;
}

void test_velocidad_exito(void)
{
    double v = 0.0;
    int codigo = calcular_velocidad(100.0, 2.0, &v);
    assert(codigo == 0);
    assert(v == 50.0);
}

void test_velocidad_distancia_invalida(void)
{
    double v = -99.0;
    int codigo = calcular_velocidad(-10.0, 2.0, &v);
    assert(codigo == 1);
    assert(v == -99.0);
}

void test_velocidad_tiempo_invalido(void)
{
    double v = -99.0;
    int codigo = calcular_velocidad(100.0, 0.0, &v);
    assert(codigo == 2);
    assert(v == -99.0);
}

void test_velocidad_puntero_nulo(void)
{
    int codigo = calcular_velocidad(100.0, 2.0, NULL);
    assert(codigo == 3);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_velocidad
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int calcular_velocidad(double distancia, double tiempo, double *velocidad);

/*
 * Operación test_velocidad_exito
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_velocidad_exito(void);

/*
 * Operación test_velocidad_distancia_invalida
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_velocidad_distancia_invalida(void);

/*
 * Operación test_velocidad_tiempo_invalido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_velocidad_tiempo_invalido(void);

/*
 * Operación test_velocidad_puntero_nulo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_velocidad_puntero_nulo(void);

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
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
