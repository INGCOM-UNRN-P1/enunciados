#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-29-funciones-de-conversion-generi.h"

const char *enum_a_string(int v,const enum_string_t *t,size_t n){if(!t)return NULL;for(size_t i=0;i<n;i++)if(t[i].nombre&&t[i].valor==v)return t[i].nombre;return NULL;}
int string_a_enum(const char *s,const enum_string_t *t,size_t n,int d){if(!s||!t)return d;for(size_t i=0;i<n;i++)if(t[i].nombre&&strcmp(s,t[i].nombre)==0)return t[i].valor;return d;}
