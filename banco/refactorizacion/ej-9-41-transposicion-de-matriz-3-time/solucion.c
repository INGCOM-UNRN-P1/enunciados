#include <assert.h>
#include <stddef.h>

#define MAT_FILAS 3
#define MAT_COLUMNAS 3

void transponer_matriz_3x3(const int origen[9], int destino[9])
{
    if (origen == NULL || destino == NULL)
    {
        return;
    }
    for (int fila = 0; fila < MAT_FILAS; fila++)
    {
        for (int col = 0; col < MAT_COLUMNAS; col++)
        {
            int idx_origen = (fila * MAT_COLUMNAS) + col;
            int idx_destino = (col * MAT_FILAS) + fila;
            destino[idx_destino] = origen[idx_origen];
        }
    }
}

void test_transposicion_3x3(void)
{
    int orig[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int dest[9] = {0};
    transponer_matriz_3x3(orig, dest);

    assert(dest[0] == 1 && dest[1] == 4 && dest[2] == 7);
    assert(dest[3] == 2 && dest[4] == 5 && dest[5] == 8);
    assert(dest[6] == 3 && dest[7] == 6 && dest[8] == 9);
}

int main(void)
{
    return 0;
}