#include <assert.h>
#define main analisis_original_main
#include "../solucion.c"
#undef main
int main(void) { int x=10,y=10,z=20; procesar_datos(&x,&x,5); assert(x==10); procesar_datos(&y,&z,5); assert(y==5&&z==10); return 0; }
