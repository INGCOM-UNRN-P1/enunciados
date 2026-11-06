#include "ej-20-37-procesador-de-eventos.h"
bool evento_valido(const evento_t *e) { if(!e||e->tipo<EVENTO_CLICK||e->tipo>EVENTO_SCROLL||(e->botones&~7u)) return false; if(e->tipo==EVENTO_PRESIONAR_TECLA||e->tipo==EVENTO_SOLTAR_TECLA) return e->tecla!=0; return true; }
void inicializar_procesador_eventos(procesador_eventos_t *p,manejador_evento_t h,void *c) { if(p){p->manejador=h;p->contexto=c;p->procesados=0;p->ignorados=0;} }
bool procesar_evento(procesador_eventos_t *p,const evento_t *e) { if(!p)return false; if(!evento_valido(e)||!p->manejador){p->ignorados++;return false;} p->manejador(e,p->contexto);p->procesados++;return true; }
