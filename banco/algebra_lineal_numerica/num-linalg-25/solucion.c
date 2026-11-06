#include "num-linalg-25.h"
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

int resolver_thomas(const double *a, const double *b, const double *c,
                    const double *d, size_t n, double *x)
{
    if (!a || !b || !c || !d || !x || n == 0 || n > SIZE_MAX / sizeof(double)) return 0;
    double *cp = calloc(n, sizeof(*cp));
    double *dp = malloc(n * sizeof(*dp));
    double *sol = malloc(n * sizeof(*sol));
    if (!cp || !dp || !sol) { free(cp); free(dp); free(sol); return 0; }
    for (size_t i = 0; i < n; ++i) {
        if (!isfinite(b[i]) || !isfinite(d[i]) || (i && !isfinite(a[i])) || (i + 1 < n && !isfinite(c[i]))) goto fail;
    }
    if (b[0] == 0.0) goto fail;
    if (n > 1) cp[0] = c[0] / b[0];
    dp[0] = d[0] / b[0];
    if (!isfinite(dp[0]) || (n > 1 && !isfinite(cp[0]))) goto fail;
    for (size_t i = 1; i < n; ++i) {
        double den = b[i] - a[i] * cp[i - 1];
        if (den == 0.0 || !isfinite(den)) goto fail;
        if (i + 1 < n) cp[i] = c[i] / den;
        dp[i] = (d[i] - a[i] * dp[i - 1]) / den;
        if (!isfinite(dp[i]) || (i + 1 < n && !isfinite(cp[i]))) goto fail;
    }
    sol[n - 1] = dp[n - 1];
    for (size_t i = n - 1; i-- > 0;) {
        sol[i] = dp[i] - cp[i] * sol[i + 1];
        if (!isfinite(sol[i])) goto fail;
    }
    for (size_t i = 0; i < n; ++i) x[i] = sol[i];
    free(cp); free(dp); free(sol); return 1;
fail:
    free(cp); free(dp); free(sol); return 0;
}
