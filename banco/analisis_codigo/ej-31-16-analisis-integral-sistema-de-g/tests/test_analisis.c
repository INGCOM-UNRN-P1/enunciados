#include <assert.h>
#define main analisis_original_main
#include "../solucion.c"
#undef main
int main(void) { lista_t *l=lista_crear(); assert(l); assert(lista_insertar_final(l,2)&&lista_insertar_final(l,4)&&lista_insertar_final(l,6)); assert(l->tamanio==3); lista_aplicar(l,duplicar_dato,NULL); int limite=5; lista_t *f=lista_filtrar(l,es_mayor_que,&limite); assert(f&&f->tamanio==2); int v=0; assert(lista_eliminar_primero(l,&v)&&v==4&&l->tamanio==2); lista_destruir(l); lista_destruir(f);
 lista_t *uno=lista_crear(); assert(uno&&lista_insertar_final(uno,9)); assert(lista_eliminar_primero(uno,&v)&&v==9); assert(uno->primero==NULL&&uno->ultimo==NULL&&uno->tamanio==0); lista_destruir(uno); return 0; }
