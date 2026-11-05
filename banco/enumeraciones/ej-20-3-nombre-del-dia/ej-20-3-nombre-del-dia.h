#ifndef EJ_20_3_NOMBRE_DEL_DIA_H
#define EJ_20_3_NOMBRE_DEL_DIA_H

#include <stdbool.h>

enum dia_semana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

const char * nombre_dia(enum dia_semana dia);

#endif
