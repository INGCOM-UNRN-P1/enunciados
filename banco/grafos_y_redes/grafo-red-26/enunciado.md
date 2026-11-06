# Flujo Máximo por Algoritmo de Edmonds-Karp con BFS

Edmonds-Karp recibe una matriz residual dirigida `n*n` de capacidades enteras no negativas y la modifica in-place. Usa BFS para hallar caminos aumentantes y devuelve el flujo máximo. Devuelve `-1` ante argumentos o capacidades inválidos, o si el flujo/residual inverso excede `INT_MAX`. Comprueba el flujo y todas las celdas inversas del camino antes de modificar el residual.

Consultá `grafo-red-26.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
