/*
 * Convolucion 2D con Kernel 3x3 y Zero Padding
 * Catedra Programacion I - UNRN
 */

#include <stdio.h>
#include <stdlib.h>

int obtener_pixel(const int *mat, int f, int c, int fil, int col)
{
    if (fil < 0 || fil >= f || col < 0 || col >= c)
    {
        return 0;
    }
    return mat[fil * c + col];
}

int main(void)
{
    int filas = 0;
    int cols = 0;

    if (scanf("%d %d", &filas, &cols) != 2 || filas <= 0 || cols <= 0)
    {
        return 1;
    }

    int *mat_in = (int *)malloc(sizeof(int) * (size_t)(filas * cols));
    if (mat_in == NULL)
    {
        return 1;
    }

    int *mat_out = (int *)malloc(sizeof(int) * (size_t)(filas * cols));
    if (mat_out == NULL)
    {
        free(mat_in);
        return 1;
    }

    int kernel[3][3];

    for (int i = 0; i < filas * cols; i++)
    {
        if (scanf("%d", &mat_in[i]) != 1)
        {
            free(mat_in);
            free(mat_out);
            return 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (scanf("%d", &kernel[i][j]) != 1)
            {
                free(mat_in);
                free(mat_out);
                return 1;
            }
        }
    }

    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < cols; c++)
        {
            int suma = 0;
            for (int ki = -1; ki <= 1; ki++)
            {
                for (int kj = -1; kj <= 1; kj++)
                {
                    int val = obtener_pixel(mat_in, filas, cols, f + ki, c + kj);
                    suma += val * kernel[ki + 1][kj + 1];
                }
            }
            mat_out[f * cols + c] = suma;
        }
    }

    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < cols; c++)
        {
            printf("%d%c", mat_out[f * cols + c], (c == cols - 1) ? '\n' : ' ');
        }
    }

    free(mat_in);
    free(mat_out);
    return 0;
}