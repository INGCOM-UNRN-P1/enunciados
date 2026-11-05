#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-30-inicializar-juego.h"

juego_t inicializar_juego(enum dificultad d){static const unsigned vidas[]={5,3,2,1};if(d<DIFICULTAD_FACIL||d>DIFICULTAD_EXPERTO)d=DIFICULTAD_NORMAL;juego_t j={JUEGO_MENU,d,0,1,vidas[d]};return j;}
