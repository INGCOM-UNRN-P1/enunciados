#include "geom-comp-27.h"
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

static double cruz(punto2d_t a, punto2d_t b, punto2d_t c)
{
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

static int comparar_puntos(const void *izq, const void *der)
{
    const punto2d_t *a = izq;
    const punto2d_t *b = der;
    if (a->x < b->x) return -1;
    if (a->x > b->x) return 1;
    if (a->y < b->y) return -1;
    if (a->y > b->y) return 1;
    return 0;
}

static bool mismo_punto(punto2d_t a, punto2d_t b)
{
    return a.x == b.x && a.y == b.y;
}

static size_t casco_convexo(punto2d_t *puntos, size_t n, punto2d_t *casco)
{
    qsort(puntos, n, sizeof(*puntos), comparar_puntos);
    size_t unicos = 0;
    for (size_t i = 0; i < n; ++i) {
        if (unicos == 0 || !mismo_punto(puntos[i], puntos[unicos - 1]))
            puntos[unicos++] = puntos[i];
    }
    if (unicos == 1) {
        casco[0] = puntos[0];
        return 1;
    }

    size_t k = 0;
    for (size_t i = 0; i < unicos; ++i) {
        while (k >= 2 && cruz(casco[k - 2], casco[k - 1], puntos[i]) <= 0.0)
            --k;
        casco[k++] = puntos[i];
    }
    size_t limite_inferior = k;
    for (size_t z = unicos - 1; z > 0; --z) {
        size_t i = z - 1;
        while (k > limite_inferior &&
               cruz(casco[k - 2], casco[k - 1], puntos[i]) <= 0.0)
            --k;
        casco[k++] = puntos[i];
    }
    if (k > 1) --k; /* El primer punto se repite al cerrar el recorrido. */
    return k;
}

static void proyectar(const punto2d_t *p, size_t n, punto2d_t u, punto2d_t v,
                      double *min_u, double *max_u, double *min_v, double *max_v)
{
    *min_u = INFINITY;
    *max_u = -INFINITY;
    *min_v = INFINITY;
    *max_v = -INFINITY;
    for (size_t i = 0; i < n; ++i) {
        double x = p[i].x * u.x + p[i].y * u.y;
        double y = p[i].x * v.x + p[i].y * v.y;
        if (x < *min_u) *min_u = x;
        if (x > *max_u) *max_u = x;
        if (y < *min_v) *min_v = y;
        if (y > *max_v) *max_v = y;
    }
}

bool caja_obb_minima(const punto2d_t *puntos, size_t n, obb2d_t *salida)
{
    if (puntos == NULL || salida == NULL || n == 0 ||
        n > SIZE_MAX / sizeof(*puntos) ||
        n > SIZE_MAX / (2 * sizeof(*puntos)))
        return false;
    for (size_t i = 0; i < n; ++i)
        if (!isfinite(puntos[i].x) || !isfinite(puntos[i].y)) return false;

    punto2d_t *ordenados = malloc(n * sizeof(*ordenados));
    punto2d_t *casco = malloc((2 * n) * sizeof(*casco));
    if (ordenados == NULL || casco == NULL) {
        free(ordenados);
        free(casco);
        return false;
    }
    memcpy(ordenados, puntos, n * sizeof(*ordenados));
    size_t cantidad = casco_convexo(ordenados, n, casco);
    obb2d_t mejor = {
        .centro = casco[0],
        .eje_x = {1.0, 0.0},
        .eje_y = {0.0, 1.0},
        .semiancho = 0.0,
        .semialto = 0.0,
        .area = 0.0
    };

    if (cantidad == 2) {
        double dx = casco[1].x - casco[0].x;
        double dy = casco[1].y - casco[0].y;
        double largo = hypot(dx, dy);
        mejor.eje_x = (punto2d_t){dx / largo, dy / largo};
        mejor.eje_y = (punto2d_t){-mejor.eje_x.y, mejor.eje_x.x};
        mejor.centro = (punto2d_t){(casco[0].x + casco[1].x) / 2.0,
                                   (casco[0].y + casco[1].y) / 2.0};
        mejor.semiancho = largo / 2.0;
    } else if (cantidad >= 3) {
        mejor.area = INFINITY;
        for (size_t i = 0; i < cantidad; ++i) {
            punto2d_t a = casco[i];
            punto2d_t b = casco[(i + 1) % cantidad];
            double dx = b.x - a.x;
            double dy = b.y - a.y;
            double largo = hypot(dx, dy);
            if (largo == 0.0) continue;
            punto2d_t u = {dx / largo, dy / largo};
            punto2d_t v = {-u.y, u.x};
            double min_u, max_u, min_v, max_v;
            proyectar(casco, cantidad, u, v, &min_u, &max_u, &min_v, &max_v);
            double semiancho = (max_u - min_u) / 2.0;
            double semialto = (max_v - min_v) / 2.0;
            double area = 4.0 * semiancho * semialto;
            if (area < mejor.area) {
                mejor.eje_x = u;
                mejor.eje_y = v;
                mejor.semiancho = semiancho;
                mejor.semialto = semialto;
                mejor.area = area;
                mejor.centro = (punto2d_t){
                    u.x * ((min_u + max_u) / 2.0) + v.x * ((min_v + max_v) / 2.0),
                    u.y * ((min_u + max_u) / 2.0) + v.y * ((min_v + max_v) / 2.0)
                };
            }
        }
        if (!isfinite(mejor.area)) {
            free(ordenados);
            free(casco);
            return false;
        }
    }

    *salida = mejor;
    free(ordenados);
    free(casco);
    return true;
}
