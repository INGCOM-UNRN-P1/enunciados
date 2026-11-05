#include "ej-21-37-filtro-gaussiano.h"
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
void filtro_gaussiano(double **imagen,int filas,int cols,double sigma) {
 if(!imagen || filas<=0 || cols<=0 || !(sigma>0) || !isfinite(sigma)) return;
 for(int i=0;i<filas;i++) if(!imagen[i]) return;
 if((size_t)filas>SIZE_MAX/(size_t)cols || (size_t)filas*(size_t)cols>SIZE_MAX/sizeof(double)) return;
 double *out=malloc((size_t)filas*(size_t)cols*sizeof(*out)); if(!out) return;
 double kernel[3][3],total=0; for(int y=-1;y<=1;y++) for(int x=-1;x<=1;x++){double d=hypot((double)x,(double)y)/sigma; double w=exp(-0.5*d*d); kernel[y+1][x+1]=w; total+=w;}
 for(int i=0;i<filas;i++) for(int j=0;j<cols;j++){double sum=0; for(int y=-1;y<=1;y++) for(int x=-1;x<=1;x++){int a=i+y,b=j+x; if(a<0)a=0; if(a>=filas)a=filas-1; if(b<0)b=0; if(b>=cols)b=cols-1; sum+=imagen[a][b]*kernel[y+1][x+1];} out[(size_t)i*(size_t)cols+(size_t)j]=sum/total;}
 for(int i=0;i<filas;i++) for(int j=0;j<cols;j++) imagen[i][j]=out[(size_t)i*(size_t)cols+(size_t)j];
 free(out);
}
