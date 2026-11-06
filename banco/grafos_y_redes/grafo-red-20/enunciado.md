# Árbol de Expansión Mínima MST por Algoritmo de Kruskal

Kruskal recibe una lista de aristas no dirigidas con pesos no negativos. Ordena la lista de entrada in-place y devuelve el peso del MST; las aristas seleccionadas se copian en `seleccionadas`, con su cantidad en `cantidad_seleccionada`. Devuelve `-1` ante desconexión, peso negativo, índices inválidos o capacidad insuficiente. Para un solo vértice, devuelve cero.

Consultá `grafo-red-20.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
