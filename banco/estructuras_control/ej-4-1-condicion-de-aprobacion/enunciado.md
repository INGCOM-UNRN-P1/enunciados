:::{exercise}
:label: entrada-2
:enumerator: entrada-2
Pedí al usuario que ingrese su nota final (entera) e imprimí su condición:
- "Promociona" si la nota es mayor o igual a 6.
- "Aprueba" si la nota es mayor o igual a 4 pero menor a 6.
- "Desaprueba" si la nota es menor a 4.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que la calificación esté dentro del rango válido [1, 10].
-   **[*plus ultra*]:** Modularizar la condición en una función booleana independiente.

:::

:::{solution} entrada-2
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    int nota = 0;
    printf("Ingrese la nota: ");
    if (scanf("%d", &nota) != 1)
    {
        printf("Error al leer la nota.\n");
        return 1;
    }
    if (nota >= 6)
    {
        printf("Promociona\n");
    }
    else if (nota >= 4)
    {
        printf("Aprueba\n");
    }
    else
    {
        printf("Desaprueba\n");
    }
    return 0;
}
```

:::

---

## Estructuras de Repetición (Lazos)

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Condición de aprobación
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_dicion_de_aprobacion(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.
