#ifndef EJERCICIO_EJ_20_31_H
#define EJERCICIO_EJ_20_31_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum estado_juego { JUEGO_MENU, JUEGO_JUGANDO, JUEGO_PAUSADO, JUEGO_GAME_OVER, JUEGO_VICTORIA };
enum dificultad { DIFICULTAD_FACIL, DIFICULTAD_NORMAL, DIFICULTAD_DIFICIL, DIFICULTAD_EXPERTO };
typedef struct { enum estado_juego estado; enum dificultad dificultad; unsigned int puntuacion,nivel,vidas; } juego_t;
void pausar_juego(juego_t *juego); void reanudar_juego(juego_t *juego); void perder_vida(juego_t *juego); void ganar_nivel(juego_t *juego);

#endif
