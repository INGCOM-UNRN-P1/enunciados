### Ejercicio 4.14 - Clasificación de funciones: Puras vs Impuras ⭐⭐☆☆☆

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
<!-- {code-block} c -->

-   **[*plus ultra*]:** Explicar por qué las funciones puras son triviales de
    testear en comparación con las funciones impuras.
-   **[*plus ultra*]:** Reformular `sumar_con_log` para cumplir con la [Regla
    0x2002h](../../reglas/2_funciones.md#0x2002h).

:::
<!-- {exercise} -->

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
<!-- {solution} ej-test-puras-vs-impuras -->

---
