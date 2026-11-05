#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-21-generar-linea-de-comandos.h"

int generar_comando_compilacion(unsigned int o,char *b,size_t z){if(!b||!z)return -1;b[0]=0;const unsigned v[]={OPT_OPTIMIZAR,OPT_DEBUG,OPT_WARNINGS,OPT_WARNINGS_EXTRA,OPT_PEDANTIC};const char *s[]={"-O","-g","-Wall","-Wextra","-pedantic"};size_t n=0;for(int i=0;i<5;i++)if(o&v[i]){int r=snprintf(b+n,z-n,"%s%s",n?" ":"",s[i]);if(r<0||(size_t)r>=z-n){b[z-1]=0;return -1;}n+=(size_t)r;}return (int)n;}
