#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-31-gestion-de-estado.h"

void pausar_juego(juego_t*j){if(j&&j->estado==JUEGO_JUGANDO)j->estado=JUEGO_PAUSADO;}
void reanudar_juego(juego_t*j){if(j&&j->estado==JUEGO_PAUSADO)j->estado=JUEGO_JUGANDO;}
void perder_vida(juego_t*j){if(!j||j->estado!=JUEGO_JUGANDO)return;if(j->vidas)j->vidas--;if(!j->vidas)j->estado=JUEGO_GAME_OVER;}
void ganar_nivel(juego_t*j){if(!j||j->estado!=JUEGO_JUGANDO)return;if(j->nivel<UINT_MAX)j->nivel++;if(j->puntuacion<=UINT_MAX-100)j->puntuacion+=100;}
