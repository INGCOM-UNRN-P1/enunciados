#ifndef EJERCICIO_EJ_20_36_H
#define EJERCICIO_EJ_20_36_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum tipo_evento { EVENTO_CLICK, EVENTO_DOBLE_CLICK, EVENTO_PRESIONAR_TECLA, EVENTO_SOLTAR_TECLA, EVENTO_MOVER_MOUSE, EVENTO_SCROLL };
enum boton_mouse { BOTON_IZQUIERDO=1, BOTON_DERECHO=2, BOTON_MEDIO=4 };
typedef struct { enum tipo_evento tipo; int x, y; unsigned int botones; unsigned int tecla; } evento_t;
bool evento_valido(const evento_t *evento);
bool boton_presionado(const evento_t *evento, enum boton_mouse boton);

#endif
