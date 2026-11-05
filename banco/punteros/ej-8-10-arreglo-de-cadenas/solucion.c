#include "ej-8-10-arreglo-de-cadenas.h"

#include <string.h>

void ordenar_cadenas(char **cadenas, int n)
{
    for (int limite = n; limite > 1; limite--) {
        for (int i = 1; i < limite; i++) {
            if (strcmp(cadenas[i - 1], cadenas[i]) > 0) {
                char *temporal = cadenas[i - 1];
                cadenas[i - 1] = cadenas[i];
                cadenas[i] = temporal;
            }
        }
    }
}
