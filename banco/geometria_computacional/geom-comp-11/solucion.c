#include "geom-comp-11.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

static double cruz(punto2d_t a, punto2d_t b, punto2d_t c)
{
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

static double distancia2(punto2d_t a, punto2d_t b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return dx * dx + dy * dy;
}

size_t envolvente_convexa_jarvis(const punto2d_t *puntos, size_t n,
                                 punto2d_t *salida, size_t capacidad)
{
    if (puntos == NULL || salida == NULL || n < 3 || n > SIZE_MAX / sizeof(*puntos))
        return 0;
    punto2d_t *casco = malloc(n * sizeof(*casco));
    if (casco == NULL) return 0;
    size_t inicio = 0;
    for (size_t i = 1; i < n; ++i)
        if (puntos[i].x < puntos[inicio].x ||
            (puntos[i].x == puntos[inicio].x && puntos[i].y < puntos[inicio].y))
            inicio = i;

    size_t cantidad = 0, actual = inicio;
    do {
        if (cantidad == n) { free(casco); return 0; }
        casco[cantidad++] = puntos[actual];
        size_t siguiente = actual == 0 ? 1 : 0;
        for (size_t i = 0; i < n; ++i) {
            if (i == actual) continue;
            double orientacion = cruz(puntos[actual], puntos[siguiente], puntos[i]);
            if (orientacion < 0.0 ||
                (orientacion == 0.0 && distancia2(puntos[actual], puntos[i]) >
                                       distancia2(puntos[actual], puntos[siguiente])))
                siguiente = i;
        }
        actual = siguiente;
    } while (actual != inicio);

    if (cantidad < 3 || capacidad < cantidad) { free(casco); return 0; }
    memcpy(salida, casco, cantidad * sizeof(*salida));
    free(casco);
    return cantidad;
}
