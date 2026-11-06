# Búsqueda de Bounding Box Mínima Orientada OBB

Implementá un algoritmo que devuelva la caja orientada de área mínima que contiene un conjunto de puntos 2D. Construí el casco convexo, evaluá las orientaciones de sus aristas y devolvé la caja completa, no solo su área.

Contrato C11:

```c
typedef struct { double x, y; } punto2d_t;
typedef struct {
    punto2d_t centro;
    punto2d_t eje_x; /* unitario */
    punto2d_t eje_y; /* unitario y perpendicular a eje_x */
    double semiancho;
    double semialto;
    double area;
} obb2d_t;

bool caja_obb_minima(const punto2d_t *puntos, size_t n, obb2d_t *salida);
```

La entrada requiere al menos un punto finito. Para una nube de un solo punto distinto, devolvé una caja puntual centrada allí, con ejes canónicos (1,0) y (0,1), extensiones y área cero. Para puntos colineales, devolvé una caja degenerada con semialto cero y eje_x paralelo al segmento extremo; el área es cero. Las copias no alteran el resultado. Ante punteros nulos, n=0, coordenadas no finitas, overflow de tamaños o fallo de reserva, retorná false sin modificar salida.

Los tests comprueban orientación, ortonormalidad, inclusión y área de una caja que contiene un rectángulo rotado, además de las políticas degeneradas y tamaños que desbordan la reserva.
