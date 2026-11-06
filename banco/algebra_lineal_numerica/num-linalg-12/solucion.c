#include "num-linalg-12.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
int gram_schmidt_qr(double **A,int m,int n,double **Q,double **R){if(!A||!Q||!R||m<=0||n<=0||m<n)return 0;for(int i=0;i<m;i++)if(!A[i]||!Q[i])return 0;for(int i=0;i<n;i++)if(!R[i])return 0;for(int i=0;i<n;i++)for(int j=0;j<n;j++)R[i][j]=0;for(int j=0;j<n;j++){for(int r=0;r<m;r++){if(!isfinite(A[r][j]))return 0;Q[r][j]=A[r][j];}for(int k=0;k<j;k++){double dot=0;for(int r=0;r<m;r++)dot+=Q[r][k]*A[r][j];R[k][j]=dot;for(int r=0;r<m;r++)Q[r][j]-=dot*Q[r][k];}double norm=0;for(int r=0;r<m;r++)norm=hypot(norm,Q[r][j]);if(norm==0||!isfinite(norm))return 0;R[j][j]=norm;for(int r=0;r<m;r++)Q[r][j]/=norm;}return 1;}
