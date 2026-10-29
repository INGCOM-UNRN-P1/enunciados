### Ejercicio 31.8 - Análisis de Memory Leaks ⭐⭐☆☆☆

:::{exercise} fugas_1
:label: fugas_1

Identificá los problemas de manejo de memoria en el siguiente código:

```{code-block} c
:linenos:
#include <stdlib.h>
#include <string.h>
char *procesar_texto(const char *entrada)
{
    int len = strlen(entrada);
    char *resultado = malloc(len * 2 + 1);
    char *temp = malloc(len + 1);
    strcpy(temp, entrada);
    // Duplicar cada carácter
    for (int i = 0; i < len; i++)
    {
        resultado[i * 2] = temp[i];
        resultado[i * 2 + 1] = temp[i];
    }
    resultado[len * 2] = '\0';
    if (len > 10)
    {
        char *resultado_largo = malloc(len * 3 + 1);
        // Triplicar en lugar de duplicar
        for (int i = 0; i < len; i++)
        {
            resultado_largo[i * 3] = temp[i];
            resultado_largo[i * 3 + 1] = temp[i];
            resultado_largo[i * 3 + 2] = temp[i];
        }
        resultado_largo[len * 3] = '\0';
        return resultado_largo;
    }
    return resultado;
}
int main()
{
    char *texto1 = procesar_texto("Hola");
    char *texto2 = procesar_texto("Este es un texto muy largo");
    printf("Texto 1: %s\n", texto1);
    printf("Texto 2: %s\n", texto2);
    return 0;
}
```
<!-- {code-block} c -->

**Tarea**: Identificá todos los memory leaks y problemas de manejo de memoria.

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {exercise} fugas_1 -->

:::{solution} fugas_1
:class: dropdown

**Problemas identificados:**

1. **Memory leak de `temp`**: La variable `temp` se aloca con `malloc()` pero
   nunca se libera con `free()`. Esto ocurre en ambos caminos de ejecución.

2. **Memory leak de `resultado`**: Cuando `len > 10`, se aloca `resultado` pero
   luego se aloca `resultado_largo` y se retorna este último, perdiendo la
   referencia a `resultado` sin liberarlo.

3. **Memory leaks en `main`**: Las variables `texto1` y `texto2` reciben memoria
   alocada dinámicamente pero nunca se libera.

4. **Uso innecesario de memoria**: El `temp` es redundante ya que se puede
   trabajar directamente con `entrada`.

**Código corregido:**
```{code-block} c
:linenos:
char *procesar_texto_corregido(const char *entrada)
{
    int len = strlen(entrada);
    char *resultado;
    if (len > 10)
    {
        resultado = malloc(len * 3 + 1);
        for (int i = 0; i < len; i++)
        {
            resultado[i * 3] = entrada[i];
            resultado[i * 3 + 1] = entrada[i];
            resultado[i * 3 + 2] = entrada[i];
        }
        resultado[len * 3] = '\0';
    }
    else
    {
        resultado = malloc(len * 2 + 1);
        for (int i = 0; i < len; i++)
        {
            resultado[i * 2] = entrada[i];
            resultado[i * 2 + 1] = entrada[i];
        }
        resultado[len * 2] = '\0';
    }
    return resultado;
}
int main()
{
    char *texto1 = procesar_texto_corregido("Hola");
    char *texto2 = procesar_texto_corregido("Este es un texto muy largo");
    printf("Texto 1: %s\n", texto1);
    printf("Texto 2: %s\n", texto2);
    // Liberar memoria
    free(texto1);
    free(texto2);
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} fugas_1 -->

## 4: Análisis de Eficiencia y Optimización
