# Búsqueda de Circuito Euleriano por Algoritmo de Hierholzer

Hierholzer recibe una matriz de adyacencia de un grafo simple no dirigido y la consume in-place. Guarda el circuito en `ruta` (vértices, incluyendo repetición del inicial) y la cantidad en `longitud`; `capacidad` mide posiciones de `size_t`. Devuelve `1` si construyó un circuito euleriano, `0` si el grafo no lo tiene y `-1` por argumentos o capacidad insuficiente. Un grafo sin aristas produce la ruta `[0]`.

Consultá `grafo-red-23.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
