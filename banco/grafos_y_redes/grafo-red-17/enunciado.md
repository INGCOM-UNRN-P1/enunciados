# Algoritmo de Bellman-Ford para Detección de Ciclos Negativos

Bellman-Ford recibe un grafo dirigido como lista de aristas `(desde,hasta,peso)`, cantidad, origen y arreglo `dist` de `n` posiciones. Inicializa las distancias, relaja hasta `n-1` veces y detecta ciclos negativos alcanzables desde el origen. Devuelve `0` sin ciclo, `1` si lo detecta y `-1` ante dimensiones, punteros o índices inválidos. `LLONG_MAX/4` marca los vértices inalcanzables.

Consultá `grafo-red-17.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
