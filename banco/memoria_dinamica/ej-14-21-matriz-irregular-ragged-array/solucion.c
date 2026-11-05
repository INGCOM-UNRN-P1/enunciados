#include "ej-14-21-matriz-irregular-ragged-array.h"
#include <stdlib.h>
#include <stdint.h>
bool matriz_irregular_crear(matriz_irregular_t*m,const size_t*c,size_t n){if(!m||(!c&&n))return false;m->filas=0;m->columnas=NULL;m->datos=NULL;if(!n)return true;if(n>SIZE_MAX/sizeof *c)return false;size_t*cs=malloc(n*sizeof *cs);int**rs=calloc(n,sizeof *rs);if(!cs||!rs){free(cs);free(rs);return false;}for(size_t i=0;i<n;i++){cs[i]=c[i];if(c[i]){if(c[i]>SIZE_MAX/sizeof **rs)goto error;rs[i]=malloc(c[i]*sizeof **rs);if(!rs[i])goto error;}}m->filas=n;m->columnas=cs;m->datos=rs;return true;error:for(size_t i=0;i<n;i++)free(rs[i]);free(rs);free(cs);return false;}
void matriz_irregular_liberar(matriz_irregular_t*m){if(m){for(size_t i=0;i<m->filas;i++)free(m->datos[i]);free(m->datos);free(m->columnas);m->filas=0;m->datos=NULL;m->columnas=NULL;}}
