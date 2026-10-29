### Ejercicio 18.3 - Estructura de división ⭐⭐⭐☆☆

La división entera en C (`/` y `%`) produce dos resultados. El objetivo es
unificar estas operaciones en una única función que retorne una `struct` con el
cociente y el resto, basándose en el algoritmo de la división.

$$dividendo = divisor \times cociente + resto, \quad \text{donde } 0 \le resto < |divisor|$$


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
typedef struct
{
    int cociente;
    int resto;
} division_t;
division_t division_lenta(int dividendo, int divisor);
```
<!-- c -->

---

## Medición de Tiempo

Desarrollar una estructura `tiempo_t` para representar un instante o duración en
horas, minutos y segundos, junto con funciones para manipularla.

``` c
typedef struct
{
    int horas;
    int minutos;
    int segundos;
} tiempo_t;
```
<!-- c -->
