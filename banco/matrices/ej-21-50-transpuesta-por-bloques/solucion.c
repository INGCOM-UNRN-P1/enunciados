#include "ej-21-50-transpuesta-por-bloques.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void transponer_bloques(double **a,int n,int bs)
{
    if(!a||n<=0||bs<=0)return;
    for(int i=0;i<n;i++)if(!a[i])return;
    for (int ii = 0; ii < n;) {
        int ie = bs > n - ii ? n : ii + bs;
        for (int jj = ii; jj < n;) {
            int je = bs > n - jj ? n : jj + bs;
            for (int i = ii; i < ie; ++i)
                for (int j = jj > i ? jj : i + 1; j < je; ++j) {
                    double t = a[i][j]; a[i][j] = a[j][i]; a[j][i] = t;
                }
            jj = je;
        }
        ii = ie;
    }
}
