#ifndef EJ_20_2_ES_DIA_LABORAL_H
#define EJ_20_2_ES_DIA_LABORAL_H

#include <stdbool.h>

enum dia_semana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

bool es_dia_laboral(enum dia_semana dia);

#endif
