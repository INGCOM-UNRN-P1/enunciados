:::{exercise}
:label: ej-test-dead-code
Analizá la siguiente función e identificá qué bloque de código es **código
muerto** (nunca podrá ejecutarse bajo ninguna circunstancia):

```{code-block} c
:linenos:
int calcular_tarifa(int edad)
{
    if (edad < 0)
    {
        return -1;
    }
    if (edad >= 0 && edad <= 12)
    {
        return 50;
    }
    if (edad > 12)
    {
        return 100;
    }
    // ¿Puede ejecutarse esta línea alguna vez?
    return 0;
}

```

-   **[*plus ultra*]:** Simplificar la estructura lógica eliminando
    redundancias.
-   **[*plus ultra*]:** Escribir pruebas unitarias que demuestren que la versión
    simplificada produce los mismos resultados.

:::

:::{solution} ej-test-dead-code
:class: dropdown
La línea `return 0;` al final es **código muerto** porque los tres bloques `if`
anteriores cubren exhaustivamente todos los números enteros posibles ($
ext{edad} < 0$, $0 \le  ext{edad} \le 12$, $    ext{edad} > 12$).

**Versión refactorizada y limpia:**
```{code-block} c
:linenos:
int calcular_tarifa(int edad)
{
    if (edad < 0)
    {
        return -1;
    }
    if (edad <= 12)
    {
        return 50;
    }
    return 100;
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_tarifa
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int calcular_tarifa(int edad);

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

:::{hint} Consideraciones Didácticas
- Buscá bloques de código inalcanzables ubicados después de sentencias return, break o goto incondicionales.
- Identificá ramas condicionales cuyas condiciones sean tautologías o contradicciones constantes.
- Eliminá funciones o variables declaradas que nunca son referenciadas en el programa.
:::
