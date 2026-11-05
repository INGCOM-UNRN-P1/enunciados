#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-23-parser-de-opcion.h"

enum opcion_menu parsear_opcion(int x){return x>=MENU_NUEVO&&x<=MENU_SALIR?(enum opcion_menu)x:MENU_INVALIDO;}
