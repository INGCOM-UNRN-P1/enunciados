# Conectividad de Red y Verificación de Grafo Euleriano

La matriz de adyacencia representa un grafo simple no dirigido. La función comprueba que todos los vértices de grado distinto de cero pertenezcan a una misma componente y que cada grado sea par. Devuelve `1` si existe circuito euleriano, `0` si no y `-1` ante argumentos inválidos. Los vértices aislados no impiden el circuito; el grafo sin aristas se considera euleriano.

Consultá `grafo-red-22.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
