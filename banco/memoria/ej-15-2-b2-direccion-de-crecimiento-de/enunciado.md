### Ejercicio 15.2 - b.2 - Dirección de Crecimiento del Stack ⭐⭐☆☆☆

Escribir una función recursiva que imprima la dirección de una variable local en
cada llamada. Observar si el stack crece hacia direcciones más altas o más
bajas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
void explorar_stack(int nivel)
{
    int variable_local;
    printf("Nivel %d: direccion = %p\n", nivel, (void *)&variable_local);
    if (nivel < 5)
    {
        explorar_stack(nivel + 1);
    }
}
```
<!-- {code-block} c -->
