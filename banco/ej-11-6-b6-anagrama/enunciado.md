### Ejercicio 11.6 - b.6 - Anagrama ⭐⭐☆☆☆

#### Descripción
Escribir una función que determine si una cadena es un anagrama de otra (es
decir, si ambas tienen los mismos caracteres con la misma frecuencia), ignorando
mayúsculas/minúsculas y espacios.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso (Arreglo de Frecuencias):**
    1.  Crear un arreglo de contadores de 26 posiciones (para el alfabeto),
        inicializado en cero.
    2.  Recorrer la primera cadena. Para cada carácter alfabético, incrementar
        el contador correspondiente (ej. para 'c', `contadores[2]++`).
    3.  Recorrer la segunda cadena. Para cada carácter alfabético, decrementar
        el contador correspondiente.
    4.  Finalmente, recorrer el arreglo de contadores. Si todos los contadores
        son cero, las cadenas son anagramas.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION son_anagramas(cadena1, cadena2)
VARIABLES:
    frecuencias (arreglo de 26 enteros)
INICIO
    INICIALIZAR frecuencias con ceros

    PARA cada caracter c en cadena1 HACER
        SI es_alfabetico(c) ENTONCES
            frecuencias[posicion_alfabeto(c)]++
        FIN SI
    FIN PARA

    PARA cada caracter c en cadena2 HACER
        SI es_alfabetico(c) ENTONCES
            frecuencias[posicion_alfabeto(c)]--
        FIN SI
    FIN PARA

    PARA i DESDE 0 HASTA 25 HACER
        SI frecuencias[i] != 0 RETORNAR FALSO
    FIN PARA

    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
