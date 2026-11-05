#include "ej-8-4-largo-seguro-con-punteros.h"

size_t largo_seguro(const char *str, size_t capacidad)
{
    const char *fin = str;
    while ((size_t)(fin - str) < capacidad && *fin != '\0') {
        fin++;
    }
    return (size_t)(fin - str);
}
