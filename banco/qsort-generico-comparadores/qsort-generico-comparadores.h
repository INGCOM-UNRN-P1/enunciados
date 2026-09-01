#ifndef EJERCICIO_QSORT_GENERICO_COMPARADORES_H
#define EJERCICIO_QSORT_GENERICO_COMPARADORES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación cmp_promedio_desc */
int cmp_promedio_desc(const void *a, const void *b);
/* Operación cmp_nombre_asc */
int cmp_nombre_asc(const void *a, const void *b);
/* Operación cmp_id_asc */
int cmp_id_asc(const void *a, const void *b);

#endif /* EJERCICIO_QSORT_GENERICO_COMPARADORES_H */
