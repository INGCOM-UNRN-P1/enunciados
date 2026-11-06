#ifndef EJERCICIO_EJ_20_37_H
#define EJERCICIO_EJ_20_37_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum tipo_evento { EVENTO_CLICK, EVENTO_DOBLE_CLICK, EVENTO_PRESIONAR_TECLA, EVENTO_SOLTAR_TECLA, EVENTO_MOVER_MOUSE, EVENTO_SCROLL };
enum boton_mouse { BOTON_IZQUIERDO=1, BOTON_DERECHO=2, BOTON_MEDIO=4 };
typedef struct { enum tipo_evento tipo; int x, y; unsigned int botones; unsigned int tecla; } evento_t;

typedef void (*manejador_evento_t)(const evento_t *evento, void *contexto);
typedef struct { manejador_evento_t manejador; void *contexto; unsigned int procesados; unsigned int ignorados; } procesador_eventos_t;
void inicializar_procesador_eventos(procesador_eventos_t *procesador, manejador_evento_t manejador, void *contexto);
bool procesar_evento(procesador_eventos_t *procesador, const evento_t *evento);

#endif
