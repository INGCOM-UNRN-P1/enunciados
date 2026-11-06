#include "geom-comp-10.h"
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

static int cmp_polar(punto2d_t pivot, punto2d_t a, punto2d_t b) {
    double z = (a.x-pivot.x)*(b.y-pivot.y) - (a.y-pivot.y)*(b.x-pivot.x);
    if (z > 0) return -1;
    if (z < 0) return 1;
    double da = hypot(a.x-pivot.x, a.y-pivot.y);
    double db = hypot(b.x-pivot.x, b.y-pivot.y);
    return (da > db) - (da < db);
}
static double cross3(punto2d_t a,punto2d_t b,punto2d_t c){return (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);}
size_t envolvente_convexa_graham(const punto2d_t *p, size_t n,
                                  punto2d_t *out, size_t cap) {
    if (!p || !out || n < 3 || n > SIZE_MAX / sizeof(*p)) return 0;
    punto2d_t *a = malloc(n * sizeof(*a));
    punto2d_t *hull = malloc(n * sizeof(*hull));
    if (!a || !hull) { free(a); free(hull); return 0; }
    memcpy(a, p, n * sizeof(*a));
    size_t k = 0;
    for (size_t i = 1; i < n; i++)
        if (a[i].y < a[k].y || (a[i].y == a[k].y && a[i].x < a[k].x)) k = i;
    punto2d_t pivot = a[k]; a[k] = a[0]; a[0] = pivot;
    for (size_t i = 2; i < n; i++) {
        punto2d_t x = a[i]; size_t j = i;
        while (j > 1 && cmp_polar(pivot, x, a[j - 1]) < 0) { a[j] = a[j - 1]; j--; }
        a[j] = x;
    }
    size_t m = 0;
    for (size_t i = 0; i < n; i++) {
        while (m >= 2 && cross3(hull[m - 2], hull[m - 1], a[i]) <= 0) m--;
        hull[m++] = a[i];
    }
    free(a);
    if (m < 3 || m > cap) { free(hull); return 0; }
    memcpy(out, hull, m * sizeof(*out));
    free(hull);
    return m;
}
