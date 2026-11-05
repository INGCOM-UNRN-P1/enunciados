#include "ej-21-40-matriz-de-hilbert.h"
#include <stdlib.h>
#include <stdint.h>
double **matriz_hilbert(int n) {
 if (n <= 0 || (size_t)n > SIZE_MAX / sizeof(double *) || (size_t)n > SIZE_MAX / sizeof(double)) return NULL;
 double **m = calloc((size_t)n, sizeof(*m)); if (!m) return NULL;
 for (int i=0; i<n; ++i) { m[i]=malloc((size_t)n * sizeof(**m)); if (!m[i]) { while (i>0) free(m[--i]); free(m); return NULL; } for (int j=0; j<n; ++j) m[i][j]=1.0/((double)i+(double)j+1.0); }
 return m;
}
