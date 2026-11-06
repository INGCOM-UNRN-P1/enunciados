# Matriz de Accesibilidad y Clausura Transitiva de Warshall

Warshall recibe una matriz booleana de adyacencia dirigida `n*n`, la actualiza in-place con la clausura transitiva reflexiva y devuelve `0`. La diagonal se establece en verdadero incluso para vértices aislados. Devuelve `-1` ante dimensión inválida, más de 512 vértices o puntero nulo.

Consultá `grafo-red-29.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
