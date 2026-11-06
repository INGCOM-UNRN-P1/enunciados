#ifndef NUM_LINALG_25_H
#define NUM_LINALG_25_H
#include <stddef.h>

/* Subdiagonal[0] and superdiagonal[n-1] are ignored. */
int resolver_thomas(const double *subdiagonal, const double *diagonal,
                    const double *superdiagonal, const double *b, size_t n,
                    double *x);
#endif
