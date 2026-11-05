#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-18-formateo-de-mensaje-de-log.h"

int formatear_log(enum nivel_log n,const char *m,char *b,size_t z){static const char *l[]={"DEBUG","INFO","WARNING","ERROR"}; if(!b||!z)return -1; b[0]=0; if(!m||n<LOG_DEBUG||n>LOG_ERROR)return -1; int r=snprintf(b,z,"[%s] %s",l[n],m); if(r<0||(size_t)r>=z){b[z-1]=0;return -1;} return r;}
