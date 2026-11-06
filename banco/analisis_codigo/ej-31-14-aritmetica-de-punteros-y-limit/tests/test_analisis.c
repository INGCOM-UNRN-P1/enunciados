#include <assert.h>
#include <string.h>
#define main analisis_original_main
#include "../solucion.c"
#undef main
int main(void) { int a[]={1,2,3,4,5}; funcion_a(a,5); assert(a[0]==2&&a[4]==10); funcion_d(a,5); assert(a[0]==10&&a[4]==2); char src[]="Hola",dst[8]; funcion_c(dst,src); assert(strcmp(dst,"Hola")==0); return 0; }
