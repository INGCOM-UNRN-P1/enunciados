### Ejercicio 4.44 - Funciones Auxiliares Privadas `static` ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-funciones-static
Explicá por qué las funciones auxiliares de un módulo `.c` que no forman parte
de la interfaz pública deben declararse obligatoriamente con el calificador
`static`.

-   **[*plus ultra*]:** Explicar el concepto de visibilidad de enlace (*internal
    linkage*).
-   **[*plus ultra*]:** Explicar cómo esto previene colisiones de nombres con
    funciones auxiliares de otros archivos `.c`.

:::
<!-- {exercise} -->

:::{solution} ej-test-funciones-static
:class: dropdown
El calificador `static` en una función a nivel de archivo restringe su
visibilidad exclusivamente a la unidad de traducción actual (*internal
linkage*). Esto encapsula los detalles de implementación internos y previene
errores de símbolos duplicados en tiempo de enlace (*linker collision*).

:::
<!-- {solution} ej-test-funciones-static -->

---

## 5. Suites de Pruebas Integradoras y Diagnóstico
