#include "ej-14-18-clonacion-profunda-de-struct.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
ficha_t *ficha_clonar(const ficha_t *o) { if (!o || (o->cantidad_notas && !o->notas)) return NULL; ficha_t *c=calloc(1,sizeof *c); if(!c)return NULL; if(o->nombre){size_t n=strlen(o->nombre)+1;c->nombre=malloc(n);if(!c->nombre)goto error;memcpy(c->nombre,o->nombre,n);} if(o->cantidad_notas){if(o->cantidad_notas>SIZE_MAX/sizeof *c->notas)goto error;c->notas=malloc(o->cantidad_notas*sizeof *c->notas);if(!c->notas)goto error;memcpy(c->notas,o->notas,o->cantidad_notas*sizeof *c->notas);}c->cantidad_notas=o->cantidad_notas;return c;error:ficha_liberar(c);return NULL;}
void ficha_liberar(ficha_t *f){if(f){free(f->nombre);free(f->notas);free(f);}}
