#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-24-ejecutor-de-menu.h"

const char *ejecutar_opcion(enum opcion_menu o){switch(o){case MENU_NUEVO:return "nuevo";case MENU_ABRIR:return "abrir";case MENU_GUARDAR:return "guardar";case MENU_CERRAR:return "cerrar";case MENU_SALIR:return "salir";default:return "invalido";}}
