#include "ej-20-2-es-dia-laboral.h"

bool es_dia_laboral(enum dia_semana dia)
{
    return dia >= LUNES && dia <= VIERNES;
}
