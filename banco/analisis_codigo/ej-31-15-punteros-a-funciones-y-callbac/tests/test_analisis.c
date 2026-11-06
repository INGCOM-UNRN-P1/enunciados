#include <assert.h>
#define main analisis_original_main
#include "../solucion.c"
#undef main
int main(void) { const int a[]={-2,-1,0,1,2,4}; assert(contar_si(a,6,es_par)==4); assert(contar_si(a,6,es_positivo)==3); int b[]={-2,-1,0,1,2}; procesar(b,5,es_positivo,cuadrado); assert(b[0]==-2&&b[3]==1&&b[4]==4); aplicar(b,5,duplicar); assert(b[3]==2&&b[4]==8); return 0; }
