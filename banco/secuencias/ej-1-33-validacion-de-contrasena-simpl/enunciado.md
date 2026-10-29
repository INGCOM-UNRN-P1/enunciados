### Ejercicio 1.33 - Validación de Contraseña Simple ⭐☆☆☆☆


Crear un programa que solicite una contraseña al usuario y no le permita
continuar hasta que ingrese la contraseña correcta. Este ejercicio practica el
uso de lazos `do-while` y la comparación de cadenas.

:::{hint} Lógica y Consideraciones
-   **Contraseña Secreta:** Definir una contraseña correcta como una cadena
-   **Entrada:** Dentro de un lazo, solicitar al usuario que ingrese la
-   **Proceso:** Usar un lazo `do-while` es ideal aquí, ya que la solicitud debe
-   **Comparación de Cadenas:** En C, las cadenas no se pueden comparar con

-   **[*plus ultra*]:** Limitar la cantidad de intentos fallidos antes de bloquear temporalmente el acceso.
-   **[*plus ultra*]:** Ocultar los caracteres ingresados si la terminal lo permite.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO validar_contrasena
CONSTANTES:
    CLAVE_SECRETA = "password123"
VARIABLES:
    intento (cadena)

INICIO
    HACER
        ESCRIBIR "Ingrese la contraseña:"
        LEER intento
    MIENTRAS intento != CLAVE_SECRETA

    ESCRIBIR "Acceso concedido."
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
