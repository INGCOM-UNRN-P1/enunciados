#include "arbol-bin-27.h"
#include <stdio.h>
#include <stdlib.h>
static bool put(const nodo_arbol_bin_27_t*n,char*b,size_t cap,size_t*p){int z=snprintf(b+*p,cap-*p,n?"%d,":"#,",n?n->valor:0);if(z<0||(size_t)z>=cap-*p)return false;*p+=(size_t)z;return !n||(put(n->izq,b,cap,p)&&put(n->der,b,cap,p));}
bool serializar_27(const nodo_arbol_bin_27_t*n,char*b,size_t cap){if(!b||!cap)return false;size_t p=0;return put(n,b,cap,&p);}
static bool readnode(const char**s,nodo_arbol_bin_27_t**out){if(**s=='#'){*out=NULL;(*s)++;if(**s==',')(*s)++;return true;}char*e;long v=strtol(*s,&e,10);if(e==*s||*e!=',')return false;nodo_arbol_bin_27_t*n=malloc(sizeof*n);if(!n)return false;n->valor=(int)v;n->izq=n->der=NULL;*s=e+1;if(!readnode(s,&n->izq)||!readnode(s,&n->der)){free(n);return false;}*out=n;return true;}
bool deserializar_27(const char*s,nodo_arbol_bin_27_t**r){if(!s||!r)return false;*r=NULL;return readnode(&s,r)&&!*s;}
void liberar_27(nodo_arbol_bin_27_t*n){if(n){liberar_27(n->izq);liberar_27(n->der);free(n);}}
