### Ejercicio 4.48 - Test de Regresión ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-regresion
Explicá el concepto de **Test de Regresión** (*Regression Test*):
1. ¿Cuál es el procedimiento correcto a seguir cuando un usuario o tester
   descubre un bug en producción?
2. ¿Por qué se debe escribir primero la prueba automatizada que reproduzca el
   fallo antes de modificar el código?

-   **[*plus ultra*]:** Describir cómo un test de regresión previene que futuros
    cambios reintroduzcan el mismo error.

:::
<!-- {exercise} -->

:::{solution} ej-test-regresion
:class: dropdown
1. **Procedimiento:**
   - Reproducir el bug reportado.
   - Escribir una prueba unitaria específica que falle debido a ese bug.
   - Modificar el código fuente hasta que la prueba pase.
   - Incorporar la nueva prueba a la suite continua del proyecto.
2. Escribir la prueba primero confirma científicamente la existencia del bug y
   asegura que la corrección realmente solucione la causa raíz sin depender de
   verificaciones manuales.

:::
<!-- {solution} ej-test-regresion -->

---
