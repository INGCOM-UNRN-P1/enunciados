#include "ej-21-51-strassen-para-matrices-grandes.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

static double **mat_new(int n){double **m=calloc((size_t)n,sizeof(*m));if(!m)return NULL;for(int i=0;i<n;i++){m[i]=calloc((size_t)n,sizeof(**m));if(!m[i]){for(int r=0;r<i;r++)free(m[r]);free(m);return NULL;}}return m;}
static void mat_free(double **m,int n){if(m){for(int i=0;i<n;i++)free(m[i]);free(m);}}
static int str_rec(double **a,double **b,double **c,int n)
{
    if(n<=32){
        for(int i=0;i<n;i++)for(int k=0;k<n;k++)for(int j=0;j<n;j++){
            c[i][j]+=a[i][k]*b[k][j];
            if(!isfinite(c[i][j]))return 0;
        }
        return 1;
    }
    int h=n/2;
    double **m[7]={0},**x=mat_new(h),**y=mat_new(h),**q[8]={0};
    if(!x||!y)goto fail;
    for(int z=0;z<7;z++){m[z]=mat_new(h);if(!m[z])goto fail;}
    for(int z=0;z<8;z++){q[z]=mat_new(h);if(!q[z])goto fail;}
    for(int i=0;i<h;i++)for(int j=0;j<h;j++){
        q[0][i][j]=a[i][j]; q[1][i][j]=a[i][j+h];
        q[2][i][j]=a[i+h][j]; q[3][i][j]=a[i+h][j+h];
        q[4][i][j]=b[i][j]; q[5][i][j]=b[i][j+h];
        q[6][i][j]=b[i+h][j]; q[7][i][j]=b[i+h][j+h];
    }
#define SETSUM(dst,u,v,sgn) do{for(int ii=0;ii<h;ii++)for(int jj=0;jj<h;jj++){(dst)[ii][jj]=(u)[ii][jj]+(sgn)*(v)[ii][jj];if(!isfinite((dst)[ii][jj]))goto fail;}}while(0)
#define RUN(z,u,v) do{if(!str_rec((u),(v),m[z],h))goto fail;}while(0)
    /* M1=(A11+A22)(B11+B22) */
    SETSUM(x,q[0],q[3],1); SETSUM(y,q[4],q[7],1); RUN(0,x,y);
    /* M2=(A21+A22)B11 */
    SETSUM(x,q[2],q[3],1); RUN(1,x,q[4]);
    /* M3=A11(B12-B22) */
    SETSUM(y,q[5],q[7],-1); RUN(2,q[0],y);
    /* M4=A22(B21-B11) */
    SETSUM(y,q[6],q[4],-1); RUN(3,q[3],y);
    /* M5=(A11+A12)B22 */
    SETSUM(x,q[0],q[1],1); RUN(4,x,q[7]);
    /* M6=(A21-A11)(B11+B12) */
    SETSUM(x,q[2],q[0],-1); SETSUM(y,q[4],q[5],1); RUN(5,x,y);
    /* M7=(A12-A22)(B21+B22) */
    SETSUM(x,q[1],q[3],-1); SETSUM(y,q[6],q[7],1); RUN(6,x,y);
    for(int i=0;i<h;i++)for(int j=0;j<h;j++){
        c[i][j]=m[0][i][j]+m[3][i][j]-m[4][i][j]+m[6][i][j];
        c[i][j+h]=m[2][i][j]+m[4][i][j];
        c[i+h][j]=m[1][i][j]+m[3][i][j];
        c[i+h][j+h]=m[0][i][j]-m[1][i][j]+m[2][i][j]+m[5][i][j];
        if(!isfinite(c[i][j])||!isfinite(c[i][j+h])||!isfinite(c[i+h][j])||!isfinite(c[i+h][j+h]))goto fail;
    }
    for(int z=0;z<8;z++)mat_free(q[z],h);
    for(int z=0;z<7;z++)mat_free(m[z],h);
    mat_free(x,h);mat_free(y,h);
    return 1;
fail:
    for(int z=0;z<8;z++)mat_free(q[z],h);
    for(int z=0;z<7;z++)mat_free(m[z],h);
    mat_free(x,h);mat_free(y,h);
    return 0;
#undef SETSUM
#undef RUN
}
double **strassen(double **A,double **B,int n)
{
    if(!A||!B||n<=0||(size_t)n>SIZE_MAX/(size_t)n/sizeof(double))return NULL;
    for(int i=0;i<n;i++)if(!A[i]||!B[i])return NULL;
    int p=1;while(p<n){if(p>INT_MAX/2)return NULL;p*=2;}
    double **a=mat_new(p),**b=mat_new(p),**c=mat_new(p);if(!a||!b||!c){mat_free(a,p);mat_free(b,p);mat_free(c,p);return NULL;}
    for(int i=0;i<n;i++){memcpy(a[i],A[i],(size_t)n*sizeof(double));memcpy(b[i],B[i],(size_t)n*sizeof(double));}
    int ok=str_rec(a,b,c,p);double **out=NULL;if(ok){out=mat_new(n);if(out)for(int i=0;i<n;i++)memcpy(out[i],c[i],(size_t)n*sizeof(double));}
    mat_free(a,p);mat_free(b,p);mat_free(c,p);return out;
}
