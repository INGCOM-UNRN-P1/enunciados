# Flujo Máximo en Redes por Algoritmo de Ford-Fulkerson

Ford-Fulkerson recibe una matriz residual dirigida `n*n` de capacidades enteras no negativas; la modifica in-place. Usa búsqueda DFS para hallar caminos aumentantes y devuelve el flujo máximo. Devuelve `-1` ante argumentos o capacidades inválidos, o si el flujo/residual inverso excede `INT_MAX`. Antes de mutar el residual valida el aumento y todas las celdas inversas del camino, por lo que un overflow detectado no deja un aumento parcial.

Consultá `grafo-red-25.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
