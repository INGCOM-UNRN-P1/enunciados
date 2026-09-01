### Ejercicio 4.17 - Acoplamiento espurio entre módulos ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-acoplamiento-espurio
Explicá por qué compartir variables globales entre diferentes archivos `.c`
(usando `extern`) rompe el principio de modularidad y hace que un fallo en un
módulo rompa silenciosamente a otro.

-   **[*plus ultra*]:** Proponer una solución basada en interfaces limpias de
    funciones en archivos de cabecera `.h`.
-   **[*plus ultra*]:** Citar la [Regla
    0x2004h](../../reglas/2_funciones.md#0x2004h) y sus consecuencias de
    ingeniería.

:::
<!-- {exercise} -->

:::{solution} ej-test-acoplamiento-espurio
:class: dropdown
Cuando dos módulos acceden a una variable global compartida mediante `extern`:
1. No existe un contrato explícito sobre quién tiene derecho a modificarla ni
   cuándo.
2. Es imposible razonar sobre el estado de un módulo sin inspeccionar todo el
   código fuente del otro.
3. Las pruebas unitarias de un módulo requieren simular o sincronizar el estado
   global del otro, eliminando el aislamiento.

:::
<!-- {solution} ej-test-acoplamiento-espurio -->

---
