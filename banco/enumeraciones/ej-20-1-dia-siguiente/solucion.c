#include "ej-20-1-dia-siguiente.h"

enum dia_semana dia_siguiente(enum dia_semana dia_actual)
{
    if (dia_actual < LUNES || dia_actual > DOMINGO) return dia_actual;
    return dia_actual == DOMINGO ? LUNES : (enum dia_semana)(dia_actual + 1);
}
