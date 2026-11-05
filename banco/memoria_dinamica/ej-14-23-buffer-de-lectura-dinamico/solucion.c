#include "ej-14-23-buffer-de-lectura-dinamico.h"
#include <stdlib.h>
#include <stdint.h>
char*leer_linea_dinamica(FILE*f){if(!f)return NULL;size_t n=0,cap=32;char*b=malloc(cap);if(!b)return NULL;int ch;while((ch=fgetc(f))!=EOF&&ch!='\n'){if(n+1>=cap){if(cap>SIZE_MAX/2){free(b);return NULL;}size_t nc=cap*2;char*p=realloc(b,nc);if(!p){free(b);return NULL;}b=p;cap=nc;}b[n++]=(char)ch;}if(ch==EOF&&ferror(f)){free(b);return NULL;}if(ch==EOF&&!n){free(b);return NULL;}b[n]='\0';return b;}
