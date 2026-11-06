#include "ej-14-35-pila-stack-dinamica.h"
#include <stdlib.h>
#include <stdint.h>
#define CAPACIDAD_INICIAL 4u
bool pila_inicializar(pila_t*p){if(!p)return false;p->datos=malloc(CAPACIDAD_INICIAL*sizeof *p->datos);if(!p->datos){p->tamanio=p->capacidad=0;return false;}p->tamanio=0;p->capacidad=CAPACIDAD_INICIAL;return true;}
bool pila_push(pila_t*p,int v){if(!p||!p->datos||!p->capacidad)return false;if(p->tamanio==p->capacidad){if(p->capacidad>SIZE_MAX/2/sizeof *p->datos)return false;size_t c=p->capacidad*2;int*t=realloc(p->datos,c*sizeof *t);if(!t)return false;p->datos=t;p->capacidad=c;}p->datos[p->tamanio++]=v;return true;}
bool pila_pop(pila_t*p,int*v){if(!p||!v||!p->datos||!p->tamanio)return false;*v=p->datos[--p->tamanio];if(p->capacidad>CAPACIDAD_INICIAL&&p->tamanio<=p->capacidad/4){size_t c=p->capacidad/2;if(c<CAPACIDAD_INICIAL)c=CAPACIDAD_INICIAL;int*t=realloc(p->datos,c*sizeof *t);if(t){p->datos=t;p->capacidad=c;}}return true;}
bool pila_peek(const pila_t*p,int*v){if(!p||!v||!p->datos||!p->tamanio)return false;*v=p->datos[p->tamanio-1];return true;}
void pila_destruir(pila_t*p){if(p){free(p->datos);p->datos=NULL;p->tamanio=p->capacidad=0;}}
