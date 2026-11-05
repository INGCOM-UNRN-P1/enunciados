#include "ej-14-33-arreglo-dinamico-de-structs.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
void productos_iniciar(productos_t*p){if(p){p->datos=NULL;p->cantidad=p->capacidad=0;}}
bool productos_agregar(productos_t*p,int id,const char*n){if(!p||!n||productos_buscar(p,id))return false;char*s=malloc(strlen(n)+1);if(!s)return false;strcpy(s,n);if(p->cantidad==p->capacidad){size_t c=p->capacidad?p->capacidad*2:4;if(c<p->capacidad||c>SIZE_MAX/sizeof *p->datos){free(s);return false;}void*q=realloc(p->datos,c*sizeof *p->datos);if(!q){free(s);return false;}p->datos=q;p->capacidad=c;}p->datos[p->cantidad++]=(producto_t){id,s};return true;}
const producto_t*productos_buscar(const productos_t*p,int id){if(!p)return NULL;for(size_t i=0;i<p->cantidad;i++)if(p->datos[i].id==id)return &p->datos[i];return NULL;}
void productos_liberar(productos_t*p){if(p){for(size_t i=0;i<p->cantidad;i++)free(p->datos[i].nombre);free(p->datos);productos_iniciar(p);}}
