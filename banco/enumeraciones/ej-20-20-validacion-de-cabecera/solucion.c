#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-20-validacion-de-cabecera.h"

bool cabecera_valida(cabecera_mensaje_t c){return c.tipo<=MSG_RESET&&c.prioridad<=3&&c.secuencia<=15;}
