#include "ej-20-36-tipos-de-eventos-de-ui.h"
bool evento_valido(const evento_t *e) { if(!e||e->tipo<EVENTO_CLICK||e->tipo>EVENTO_SCROLL||(e->botones&~7u)) return false; if(e->tipo==EVENTO_PRESIONAR_TECLA||e->tipo==EVENTO_SOLTAR_TECLA) return e->tecla!=0; return true; }
bool boton_presionado(const evento_t *e, enum boton_mouse b) { return evento_valido(e)&&(b==BOTON_IZQUIERDO||b==BOTON_DERECHO||b==BOTON_MEDIO)&&(e->botones&(unsigned)b)!=0; }
