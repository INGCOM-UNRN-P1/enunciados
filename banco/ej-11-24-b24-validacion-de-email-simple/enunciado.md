### Ejercicio 11.24 - b.24 - Validación de email (Simple) ⭐☆☆☆☆

#### Descripción
Crear una función que verifique si una cadena tiene un formato de correo
electrónico básico. No busca ser exhaustiva (lo cual es muy complejo), sino
validar una estructura mínima.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Reglas Mínimas:**
    1.  Debe contener exactamente un carácter `@`.
    2.  El `@` no puede ser el primer ni el último carácter.
    3.  Debe contener al menos un `.` después del `@`.
    4.  El `.` no puede estar inmediatamente después del `@`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_email_simple_valido(email)
VARIABLES:
    pos_arroba, pos_ultimo_punto (enteros)
INICIO
    pos_arroba = encontrar_caracter(email, '@')
    SI pos_arroba == NO_ENCONTRADO O pos_arroba == 0 ENTONCES
        RETORNAR FALSO
    FIN SI

    // Verificar que no haya más de un @
    // ...

    pos_ultimo_punto = encontrar_ultima_posicion(email, '.')
    SI pos_ultimo_punto == NO_ENCONTRADO O pos_ultimo_punto < pos_arroba + 2 ENTONCES
        RETORNAR FALSO
    FIN SI

    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
