#include "ej-21-41-matriz-de-toeplitz.h"
bool es_toeplitz(int **matriz, int filas, int cols) {
 if (filas<0 || cols<0) return false;
 if (filas==0 || cols==0) return true;
 if (!matriz) return false;
 for (int i=0;i<filas;i++) if (!matriz[i]) return false;
 for (int i=1;i<filas;i++) for (int j=1;j<cols;j++) if (matriz[i][j]!=matriz[i-1][j-1]) return false;
 return true;
}
