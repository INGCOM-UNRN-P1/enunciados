# Árbol de Expansión Mínima MST por Algoritmo de Prim

Prim recibe una matriz simétrica de pesos `n*n`, donde `-1` indica que falta una arista y los demás pesos son no negativos. Devuelve el peso del MST o `-1` si el grafo está desconectado, la capacidad es insuficiente o hay argumentos inválidos. Escribe `n-1` pares de vértices en el arreglo de salida, cuya capacidad se mide en `size_t` y debe ser al menos `2*(n-1)`. Para un solo vértice, devuelve cero.

Consultá `grafo-red-19.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
