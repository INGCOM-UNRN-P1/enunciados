### Ejercicio 1.40 - Menú de Conversiones ⭐⭐☆☆☆


Crear un programa robusto que presente al usuario un menú con varias opciones de
conversión de unidades (ej. Celsius a Fahrenheit, Metros a Pies, Kilogramos a
Libras). El programa debe repetir el menú hasta que el usuario elija la opción
de salir.

:::{hint} Lógica y Consideraciones
-   **Proceso:** Similar al ejercicio del cajero automático. Usar un lazo
-   **Modularidad:** Es una buena práctica crear una función separada para cada

-   **[*plus ultra*]:** Implementar un lazo interactivo para que el usuario pueda realizar múltiples conversiones consecutivas.
-   **[*plus ultra*]:** Validar rigurosamente las opciones del menú con un caso default.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO menu_conversiones
VARIABLES:
    opcion (entero)

INICIO
    HACER
        ESCRIBIR "1. Celsius a Fahrenheit"
        ESCRIBIR "2. Metros a Pies"
        ESCRIBIR "3. Salir"
        LEER opcion

        SEGUN opcion HACER
            CASO 1: llamar funcion_convertir_c_a_f()
            CASO 2: llamar funcion_convertir_m_a_pies()
        FIN SEGUN
    MIENTRAS opcion != 3
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
