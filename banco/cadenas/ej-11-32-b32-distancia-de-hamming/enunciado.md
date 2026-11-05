#### Distancia de Hamming

Implementá `distancia_hamming`, que cuenta cuántas posiciones difieren entre dos cadenas de la misma longitud. La comparación distingue mayúsculas y minúsculas y cuenta cada byte como un carácter.

```c
int distancia_hamming(const char *cadena1, const char *cadena2);
```

La función devuelve `-1` si algún puntero es `NULL`, si las cadenas tienen longitudes distintas o si la distancia no cabe en un `int`. Dos cadenas vacías tienen distancia cero. Para entradas válidas, compará los caracteres correspondientes hasta el terminador nulo y devolvé el número de diferencias.

Ejemplos:

- `distancia_hamming("karolin", "kathrin")` devuelve `3`.
- `distancia_hamming("1011101", "1001001")` devuelve `2`.
- `distancia_hamming("abc", "ab")` devuelve `-1`.
