### Ejercicio 15.1 - b.1 - Exploración del Layout de Memoria ⭐⭐☆☆☆

Escribir un programa que imprima las direcciones de memoria de:
- Una variable local (stack)
- Un parámetro de función (stack)
- Una variable global (.data)
- Una variable estática (.bss)
- Una constante de cadena (.rodata)
- Memoria asignada con `malloc` (heap)

**Objetivo:** Visualizar las diferentes regiones de memoria y confirmar el
layout típico: stack (altas direcciones) → heap (bajas direcciones) → data/bss →
text.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
