# Floyd-Warshall: caminos mínimos entre todos los pares

Implementá Floyd-Warshall sobre una matriz cuadrada `n*n` de `long long`, almacenada por filas. El centinela `LLONG_MAX/4` representa que no existe camino; los valores finitos deben ser menores que ese centinela. El algoritmo actualiza la matriz in-place y no modifica entradas inalcanzables.

`floyd_warshall` devuelve `0` si completa, `1` si detecta un ciclo negativo, `-1` si `n` está fuera de `1..512` el puntero es nulo o alguna entrada supera el centinela, y `-2` si una suma de dos distancias finitas excede el rango de `long long`, o si un camino descubierto no puede representarse por alcanzar o superar el centinela. Antes de sumar, comprobá el límite superior o inferior; en caso de overflow retorná `-2` sin ejecutar esa suma. Un ciclo negativo se informa tan pronto como aparece una diagonal negativa. La matriz puede quedar parcialmente actualizada cuando retorna `-2` o `1`.

Los casos YAML cubren caminos indirectos, nodos inalcanzables, el centinela, ciclo negativo y overflow numérico. API en `grafo-red-18.h`.
