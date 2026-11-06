# Envolvente convexa mediante Jarvis gift wrapping

Implementá el algoritmo de Jarvis para hallar la envolvente convexa de puntos cartesianos 2D. El recorrido debe ser antihorario, sin repetir el vértice inicial. Si varios puntos son colineales en el borde, conservá únicamente el más lejano en cada dirección.

```c
typedef struct { double x, y; } punto2d_t;
size_t envolvente_convexa_jarvis(const punto2d_t *puntos, size_t n,
                                 punto2d_t *salida, size_t capacidad);
```

Retorná la cantidad de vértices. Retorná 0 para punteros nulos, menos de tres puntos, entrada degenerada o capacidad insuficiente. Ante capacidad insuficiente, no modifiques `salida`. Para puntos repetidos, tratá las copias como un único punto. La complejidad esperada es O(nh), donde h es el número de vértices de la envolvente; la elección del siguiente punto debe basarse en orientación y distancia para desempatar colineales.

Los tests deben discriminar el gift wrapping por su comportamiento de extremos colineales, orientación del recorrido y capacidad insuficiente.
