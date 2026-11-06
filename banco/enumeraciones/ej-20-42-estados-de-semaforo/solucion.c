#include "ej-20-42-estados-de-semaforo.h"
bool semaforo_valido(const semaforo_t *s){return s&&s->estado>=SEMAFORO_ROJO&&s->estado<=SEMAFORO_INTERMITENTE&&s->direccion_activa>=DIR_NORTE_SUR&&s->direccion_activa<=DIR_TODAS&&s->tiempo_restante>=0;}
