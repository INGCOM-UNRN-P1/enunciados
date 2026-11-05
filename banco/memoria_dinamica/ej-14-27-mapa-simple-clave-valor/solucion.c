#include "ej-14-27-mapa-simple-clave-valor.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
void mapa_iniciar(mapa_t*m){if(m){m->entradas=NULL;m->cantidad=m->capacidad=0;}}
static char*dup(const char*s){if(!s)return NULL;size_t n=strlen(s)+1;char*p=malloc(n);if(p)memcpy(p,s,n);return p;}
bool mapa_poner(mapa_t*m,const char*k,const char*v){if(!m||!k||!v)return false;for(size_t i=0;i<m->cantidad;i++)if(strcmp(m->entradas[i].clave,k)==0){char*p=dup(v);if(!p)return false;free(m->entradas[i].valor);m->entradas[i].valor=p;return true;}char*ck=dup(k),*cv=dup(v);if(!ck||!cv){free(ck);free(cv);return false;}if(m->cantidad==m->capacidad){size_t c=m->capacidad?m->capacidad*2:4;if(c<m->capacidad||c>SIZE_MAX/sizeof *m->entradas){free(ck);free(cv);return false;}void*p=realloc(m->entradas,c*sizeof *m->entradas);if(!p){free(ck);free(cv);return false;}m->entradas=p;m->capacidad=c;}m->entradas[m->cantidad++]=(entrada_mapa_t){ck,cv};return true;}
const char*mapa_obtener(const mapa_t*m,const char*k){if(!m||!k)return NULL;for(size_t i=0;i<m->cantidad;i++)if(strcmp(m->entradas[i].clave,k)==0)return m->entradas[i].valor;return NULL;}
void mapa_liberar(mapa_t*m){if(m){for(size_t i=0;i<m->cantidad;i++){free(m->entradas[i].clave);free(m->entradas[i].valor);}free(m->entradas);mapa_iniciar(m);}}
