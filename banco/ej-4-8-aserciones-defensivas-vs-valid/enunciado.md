### Ejercicio 4.8 - Aserciones defensivas vs Validación de Usuario ⭐☆☆☆☆

:::{exercise}
:label: ej-test-defensiva-vs-usuario
Explicá con claridad la diferencia conceptual entre:
1. Validar datos ingresados por el usuario por teclado con `scanf` y
   condicionales `if`.
2. Validar precondiciones internas del programador con `assert()`.

-   **[*plus ultra*]:** Dar un ejemplo de cuándo usar `if (...) return
    CODIGO_ERROR;` y cuándo usar `assert(divisor != 0);`.
-   **[*plus ultra*]:** Explicar por qué un programa de producción nunca debe
    abortar con `assert` si el usuario escribe una letra en lugar de un número.

:::
<!-- {exercise} -->

:::{solution} ej-test-defensiva-vs-usuario
:class: dropdown
1. **Validación de Usuario (`if` / manejo de errores):** Es obligatoria para
   entradas externas incontrolables (teclado, archivos, red). El programa debe
   manejar el error con gracia, avisar al usuario y recuperarse.
2. **Aserciones (`assert`):** Son herramientas de depuración para detectar bugs
   de lógica del programador (violaciones de contrato que "nunca deberían
   ocurrir" si el código estuviera bien escrito).

:::
<!-- {solution} ej-test-defensiva-vs-usuario -->

---
