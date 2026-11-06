# Simulador de Ruteo de Paquetes en Redes de Topología de Malla

Ruteo en malla rectangular: `bloqueada` contiene `filas*columnas` indicadores; un valor distinto de cero es obstáculo. Los índices de origen y destino son lineales por fila. BFS escribe en `ruta` la secuencia de celdas y devuelve `1`, devuelve `0` si no hay camino y `-1` ante índices/obstáculos inválidos o capacidad insuficiente. `longitud` recibe las posiciones escritas; las dimensiones máximas son 128 por lado.

Consultá `grafo-red-30.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.
