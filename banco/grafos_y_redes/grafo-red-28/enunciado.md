# Diámetro y Radio de una Red Compleja

Para un grafo simple no dirigido, la función ejecuta BFS desde cada vértice, escribe cada excentricidad en `excentricidad[n]` y devuelve el diámetro; también asigna el radio mediante `radio`. Devuelve `-1` si el grafo no es conexo, `n` excede 256 o los argumentos son inválidos.

Consultá `grafo-red-28.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
