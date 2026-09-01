### Ejercicio 4.43 - Flags de Compilación Obligatorios ⭐☆☆☆☆

:::{exercise}
:label: ej-test-flags-compilacion
Explicá qué detecta cada uno de los siguientes flags de `gcc` y por qué son
obligatorios en las buenas prácticas de ingeniería ([Regla
0x5002h](../../reglas/5_buenas_practicas.md#0x5002h)):
- `-Wall`
- `-Wextra`
- `-Werror`
- `-Wpedantic`

-   **[*plus ultra*]:** Configurar una línea de compilación modelo en un archivo
    Makefile.

:::
<!-- {exercise} -->

:::{solution} ej-test-flags-compilacion
:class: dropdown
- `-Wall`: Habilita todas las advertencias comunes sobre construcciones dudosas
  (variables no usadas, conversiones implícitas riesgosas).
- `-Wextra`: Habilita advertencias adicionales más rigurosas (comparaciones con
  signo/sin signo, parámetros no utilizados).
- `-Werror`: Trata todas las advertencias como errores de compilación,
  impidiendo generar el binario si existen problemas.
- `-Wpedantic`: Exige estricto apego al estándar ISO de C, rechazando
  extensiones propietarias del compilador.

:::
<!-- {solution} ej-test-flags-compilacion -->

---
