#include "ej-14-22-liberacion-profunda.h"
#include <stdlib.h>
void liberar_historial(char**h,size_t n){if(!h)return;for(size_t i=0;i<n;i++)free(h[i]);free(h);}
