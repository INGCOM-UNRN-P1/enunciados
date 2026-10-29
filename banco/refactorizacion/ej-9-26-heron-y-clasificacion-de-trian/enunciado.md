:::{exercise}
:label: ej-ref-heron-todo-en-uno
Refactorizá la siguiente función separando la validación geométrica, el cálculo
del área por fórmula de Herón y la clasificación del triángulo en funciones
independientes:

```{code-block} c
:linenos:
#include <math.h>

double tri(double a, double b, double c, int *tipo)
{
    if (a+b<=c||a+c<=b||b+c<=a) { *tipo=0; return 0; }
    if (a==b&&b==c) *tipo=1;
    else if (a==b||b==c||a==c) *tipo=2;
    else *tipo=3;
    double s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

```

-   **[*plus ultra*]:** Usar comparación con tolerancia `fabs(a - b) < 1e-6`
    para punto flotante.
-   **[*plus ultra*]:** Escribir tests unitarios para cada función por separado.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación tri
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
double tri(double a, double b, double c, int *tipo);

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

:::{hint} Consideraciones Didácticas
- Separá la validación de la desigualdad triangular, la clasificación por lados y el cálculo de área.
- Para comparaciones de números reales en punto flotante, utilizá una tolerancia fabs(a - b) < EPSILON.
- Implementá funciones puras que retornen valores descriptivos o códigos de estado claros.
:::
