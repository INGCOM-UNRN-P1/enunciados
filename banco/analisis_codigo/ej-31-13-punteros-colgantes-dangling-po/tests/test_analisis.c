#include <assert.h>
#include <stdlib.h>
#define main analisis_original_main
#include "../solucion.c"
#undef main
int main(void) { int *s=crear_arreglo_estatico(); assert(s[0]==1&&s[4]==5); int *p=crear_arreglo_dinamico(); assert(p&&p[0]==1&&p[4]==5); free(p); int *q=crear_arreglo_dinamico(); assert(q); procesar_y_liberar(&q); return 0; }
