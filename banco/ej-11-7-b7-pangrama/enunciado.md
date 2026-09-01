### Ejercicio 11.7 - b.7 - Pangrama ⭐⭐☆☆☆

#### Descripción
Verificar si una cadena es un pangrama, es decir, si contiene todas las letras
del alfabeto inglés al menos una vez. La verificación debe ser insensible a
mayúsculas/minúsculas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Estructura de Datos:** Un arreglo booleano de 26 posiciones
    (`letras_vistas`) es perfecto para este fin.
-   **Proceso:**
    1.  Inicializar el arreglo `letras_vistas` en `falso`.
    2.  Recorrer la cadena. Para cada carácter, si es una letra, marcar la
        posición correspondiente en el arreglo como `verdadero`.
    3.  Después de recorrer la cadena, verificar si todas las posiciones del
        arreglo `letras_vistas` son `verdadero`. Si es así, es un pangrama.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_pangrama(cadena)
VARIABLES:
    letras_vistas (arreglo booleano de 26 posiciones)
INICIO
    INICIALIZAR letras_vistas con FALSO

    PARA cada caracter c en cadena HACER
        SI es_alfabetico(c) ENTONCES
            letras_vistas[posicion_alfabeto(c)] = VERDADERO
        FIN SI
    FIN PARA

    PARA i DESDE 0 HASTA 25 HACER
        SI letras_vistas[i] == FALSO RETORNAR FALSO
    FIN PARA

    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Manipulación y Transformación
