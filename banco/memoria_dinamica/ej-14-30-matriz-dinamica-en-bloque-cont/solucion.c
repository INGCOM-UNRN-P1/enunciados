#include "ej-14-30-matriz-dinamica-en-bloque-cont.h"
#include <stdlib.h>
#include <stdint.h>
bool matriz_crear_filas(matriz_t*m,size_t r,size_t c){if(!m||!r||!c||r>SIZE_MAX/sizeof(int*)||c>SIZE_MAX/sizeof(int))return false;*m=(matriz_t){0};int**p=calloc(r,sizeof *p);if(!p)return false;for(size_t i=0;i<r;i++){p[i]=calloc(c,sizeof **p);if(!p[i]){for(size_t j=0;j<i;j++)free(p[j]);free(p);return false;}}m->filas=r;m->columnas=c;m->datos=p;return true;}
bool matriz_crear_contigua(matriz_t*m,size_t r,size_t c){if(!m||!r||!c||r>SIZE_MAX/c||r*c>SIZE_MAX/sizeof(int)||r>SIZE_MAX/sizeof(int*))return false;*m=(matriz_t){0};int*b=calloc(r*c,sizeof *b);int**p=malloc(r*sizeof *p);if(!b||!p){free(b);free(p);return false;}for(size_t i=0;i<r;i++)p[i]=b+i*c;m->filas=r;m->columnas=c;m->datos=p;m->bloque=b;return true;}
void matriz_liberar(matriz_t*m){if(m){if(m->bloque)free(m->bloque);else if(m->datos)for(size_t i=0;i<m->filas;i++)free(m->datos[i]);free(m->datos);*m=(matriz_t){0};}}
