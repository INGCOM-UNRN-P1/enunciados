#include "ej-21-38-deteccion-de-bordes-laplaciano.h"
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
void detectar_bordes_laplaciano(int **imagen,int filas,int cols,int **resultado) {
 if(!imagen || !resultado || filas<=0 || cols<=0) return;
 for(int i=0;i<filas;i++) if(!imagen[i] || !resultado[i]) return;
 if((size_t)filas>SIZE_MAX/(size_t)cols || (size_t)filas*(size_t)cols>SIZE_MAX/sizeof(int)) return;
 int *out=malloc((size_t)filas*(size_t)cols*sizeof(*out)); if(!out) return;
 for(int i=0;i<filas;i++) for(int j=0;j<cols;j++){long long v=(long long)imagen[i?i-1:i][j]+imagen[i+1<filas?i+1:i][j]+imagen[i][j?j-1:j]+imagen[i][j+1<cols?j+1:j]-4LL*imagen[i][j]; if(v>INT_MAX)v=INT_MAX; if(v<INT_MIN)v=INT_MIN; out[(size_t)i*(size_t)cols+(size_t)j]=(int)v;}
 for(int i=0;i<filas;i++) for(int j=0;j<cols;j++) resultado[i][j]=out[(size_t)i*(size_t)cols+(size_t)j];
 free(out);
}
