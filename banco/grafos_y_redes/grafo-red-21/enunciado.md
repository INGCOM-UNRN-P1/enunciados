# Detección de Puentes y Puntos de Articulación en Grafos

Usá una matriz booleana simétrica de un grafo simple no dirigido. La función implementa DFS de Tarjan, pone en `articulaciones[n]` los indicadores de puntos de articulación y en `puentes[n*n]` una matriz simétrica con las aristas puente. Devuelve la cantidad de puentes o `-1` ante dimensiones inválidas. Los arreglos de salida deben tener las capacidades indicadas.

Consultá `grafo-red-21.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
