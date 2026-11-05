#ifndef EJERCICIO_EJ_20_30_H
#define EJERCICIO_EJ_20_30_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum estado_juego { JUEGO_MENU, JUEGO_JUGANDO, JUEGO_PAUSADO, JUEGO_GAME_OVER, JUEGO_VICTORIA };
enum dificultad { DIFICULTAD_FACIL, DIFICULTAD_NORMAL, DIFICULTAD_DIFICIL, DIFICULTAD_EXPERTO };
typedef struct { enum estado_juego estado; enum dificultad dificultad; unsigned int puntuacion,nivel,vidas; } juego_t;
juego_t inicializar_juego(enum dificultad dif);

#endif
