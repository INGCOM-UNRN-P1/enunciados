#include "ej-11-31-b31-acronimo.h"

#include <ctype.h>

int generar_acronimo(const char *frase, char *salida, size_t capacidad)
{
    size_t usados = 0;
    int inicio_palabra = 1;

    if (frase == NULL || salida == NULL || capacidad == 0) {
        return -1;
    }

    for (const unsigned char *p = (const unsigned char *)frase; *p != '\0'; p++) {
        if (isspace(*p)) {
            inicio_palabra = 1;
        } else {
            if (inicio_palabra && isalpha(*p)) {
                if (usados + 1 >= capacidad) {
                    salida[0] = '\0';
                    return -1;
                }
                salida[usados++] = (char)toupper(*p);
            }
            inicio_palabra = 0;
        }
    }

    salida[usados] = '\0';
    return 0;
}
