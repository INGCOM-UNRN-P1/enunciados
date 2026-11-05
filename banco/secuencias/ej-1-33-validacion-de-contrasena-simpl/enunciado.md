Crear un programa que solicite una contraseña al usuario y no le permita
continuar hasta que ingrese la contraseña correcta. Este ejercicio practica el
uso de lazos `do-while` y la comparación de cadenas.


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

:::

:::{hint} Consideraciones Didácticas
- **Contraseña Secreta:** Definir una contraseña correcta como una cadena
- **Entrada:** Dentro de un lazo, solicitar al usuario que ingrese la
- **Proceso:** Usar un lazo `do-while` es ideal aquí, ya que la solicitud debe
- **Comparación de Cadenas:** En C, las cadenas no se pueden comparar con
- Limitar la cantidad de intentos fallidos antes de bloquear temporalmente el acceso.
- Ocultar los caracteres ingresados si la terminal lo permite.
:::

### Formato de entrada y salida

La contraseña correcta es `password123`, como en el pseudocódigo. Leé intentos, uno por línea, y no continúes hasta recibir la contraseña correcta. Por cada intento incorrecto imprimí `Contraseña incorrecta.`; al acertar, imprimí `Acceso concedido.` y terminá.
