### Ejercicio 10.8 - Contar repeticiones ⭐⭐☆☆☆


Contar cuántas veces aparece un número específico en un arreglo.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo, su tamaño y el elemento a contar.
-   **Variables:** Un `contador` inicializado en 0.
-   **Proceso:** Recorrer el arreglo con un lazo. En cada iteración, si el
    elemento actual es igual al elemento buscado, incrementar el `contador`.
-   **Salida:** Devolver el valor final del `contador`.

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION contar_repeticiones(arreglo, tamano, buscado)
VARIABLES:
    contador (entero)
INICIO
    contador = 0
    PARA i DESDE 0 HASTA tamano-1 HACER
        SI arreglo[i] == buscado ENTONCES
            contador = contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
