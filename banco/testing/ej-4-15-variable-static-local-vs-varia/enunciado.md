:::{exercise}
:label: ej-test-static-local
Analizá el siguiente código. ¿Qué valores retorna en las sucesivas llamadas?
¿Por qué una variable `static` local también genera problemas para el testing
unitario independiente?

```{code-block} c
:linenos:
int contador_llamadas(void)
{
    static int veces = 0;
    veces++;
    return veces;
}

```

-   **[*plus ultra*]:** Explicar la diferencia de alcance (*scope*) y tiempo de
    vida (*lifetime*) entre una variable global y una variable local `static`.
-   **[*plus ultra*]:** Escribir una versión reseteable o pasar el contador por
    parámetro.

:::

:::{solution} ej-test-static-local
:class: dropdown
La primera llamada retorna `1`, la segunda `2`, la tercera `3`, etc.

Aunque su alcance está restringido a la función, su tiempo de vida es durante
toda la ejecución del programa. Esto retiene estado mutable entre pruebas,
imposibilitando correr tests unitarios aislados y repetibles sin reiniciar el
binario.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación contador_llamadas
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int contador_llamadas(void);

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
