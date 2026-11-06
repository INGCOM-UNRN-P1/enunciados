#include <assert.h>
#include <stdlib.h>
#include <string.h>
#define main analisis_original_main
#include "../solucion.c"
#undef main
int main(void) {
 sistema_estudiantes_t *s=malloc(sizeof(*s)); assert(s); s->lista=malloc(sizeof(estudiante_t)); assert(s->lista); s->cantidad=0; s->capacidad=1;
 assert(buscar_mejor_estudiante(s)==NULL);
 assert(agregar_estudiante(s,"Ada",20,9.5f));
 assert(s->cantidad==1 && strcmp(s->lista[0].nombre,"Ada")==0);
 assert(agregar_estudiante(s,"Grace",21,9.8f));
 assert(s->cantidad==2 && s->capacidad==2);
 estudiante_t *m=buscar_mejor_estudiante(s); assert(m && strcmp(m->nombre,"Grace")==0);
 liberar_sistema(s); liberar_sistema(NULL); return 0;
}
