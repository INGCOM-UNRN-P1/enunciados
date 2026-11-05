#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-19-crear-y-decodificar-cabecera.h"

cabecera_mensaje_t crear_cabecera(enum tipo_mensaje t,unsigned int p,unsigned int s){cabecera_mensaje_t c={0,0,0}; if(t<=MSG_RESET&&p<=3&&s<=15){c.tipo=t;c.prioridad=p;c.secuencia=s;} return c;}
