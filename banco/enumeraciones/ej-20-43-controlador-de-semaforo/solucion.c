#include "ej-20-43-controlador-de-semaforo.h"
bool semaforo_valido(const semaforo_t *s){return s&&s->estado>=SEMAFORO_ROJO&&s->estado<=SEMAFORO_INTERMITENTE&&s->direccion_activa>=DIR_NORTE_SUR&&s->direccion_activa<=DIR_TODAS&&s->tiempo_restante>=0;}
enum estado_semaforo siguiente_estado(enum estado_semaforo s){switch(s){case SEMAFORO_ROJO:return SEMAFORO_VERDE;case SEMAFORO_VERDE:return SEMAFORO_AMARILLO;case SEMAFORO_AMARILLO:return SEMAFORO_ROJO;case SEMAFORO_INTERMITENTE:return SEMAFORO_INTERMITENTE;default:return SEMAFORO_ROJO;}}
void actualizar_semaforo(semaforo_t *s){if(!semaforo_valido(s)||s->tiempo_restante>0)return;s->estado=siguiente_estado(s->estado);}
bool puede_pasar(const semaforo_t *s,enum direccion_trafico d){return semaforo_valido(s)&&s->estado==SEMAFORO_VERDE&&s->tiempo_restante==0&&s->direccion_activa!=DIR_TODAS&&s->direccion_activa==d&&(d==DIR_NORTE_SUR||d==DIR_ESTE_OESTE); }
