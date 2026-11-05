#ifndef EJ_20_1_DIA_SIGUIENTE_H
#define EJ_20_1_DIA_SIGUIENTE_H

#include <stdbool.h>

enum dia_semana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

enum dia_semana dia_siguiente(enum dia_semana dia_actual);

#endif
