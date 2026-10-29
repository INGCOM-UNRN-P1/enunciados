### Ejercicio 32.1 - Crítica de Nombres ⭐⭐☆☆☆

Analizar estos nombres de funciones y proponer mejoras siguiendo las reglas de
estilo:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
// Biblioteca de procesamiento de imágenes
void process(img *i);
int calc(img *i, int x, int y);
void update(img *i, void *d);
int check(img *i);
void fix(img *i);
```
<!-- {code-block} c -->

**Tareas:**
1. Identificar qué está mal con cada nombre
2. Proponer nombres descriptivos con prefijo apropiado
3. Agregar documentación de contrato para cada función

:::{tip} Nombres Descriptivos

Como se menciona en [claridad y expresividad](#1-claridad-y-expresividad), los
nombres deben comunicar claramente la acción que realizan. Usar verbos
específicos en lugar de genéricos como "process" o "update".

:::
<!-- {tip} Nombres Descriptivos -->
