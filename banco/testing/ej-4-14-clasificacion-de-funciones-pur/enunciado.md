:::{exercise}
:label: ej-test-puras-vs-impuras
Clasificá cada una de las siguientes funciones en **Pura** o **Impura**,
justificando en cada caso:

```{code-block} c
:linenos:
int g_contador = 0;

// Función 1
int duplicar(int x) {
    return x * 2;
}

// Función 2
int obtener_siguiente(void) {
    return ++g_contador;
}

// Función 3
int sumar_con_log(int a, int b) {
    printf("Sumando %d y %d\n", a, b);
    return a + b;
}

// Función 4
bool es_positivo(int n) {
    return n > 0;
}

```

-   **[*plus ultra*]:** Explicar por qué las funciones puras son triviales de
    testear en comparación con las funciones impuras.
-   **[*plus ultra*]:** Reformular `sumar_con_log` para cumplir con la [Regla
    0x2002h](../../reglas/2_funciones.md#0x2002h).

:::

:::{solution} ej-test-puras-vs-impuras
:class: dropdown
1. **`duplicar` (Pura):** Para el mismo valor de entrada siempre devuelve el
   mismo resultado y no produce ningún efecto secundario.
2. **`obtener_siguiente` (Impura):** Modifica y depende de la variable global
   `g_contador`. Llamadas sucesivas devuelven valores distintos.
3. **`sumar_con_log` (Impura):** Produce un efecto secundario en la consola
   mediante `printf`.
4. **`es_positivo` (Pura):** Cálculo determinístico basado únicamente en su
   parámetro.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación duplicar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int duplicar(int x);

/*
 * Operación obtener_siguiente
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int obtener_siguiente(void);

/*
 * Operación sumar_con_log
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int sumar_con_log(int a, int b);

/*
 * Operación es_positivo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_positivo(int n);

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
