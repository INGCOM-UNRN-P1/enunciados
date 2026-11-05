#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char *construir_mensaje(const char *usuario)
{
    if (usuario == NULL)
        return NULL;
    const char prefijo[] = "Hola, ";
    size_t longitud = strlen(usuario);
    if (longitud > SIZE_MAX - sizeof(prefijo))
        return NULL;
    char *mensaje = malloc(sizeof(prefijo) + longitud);
    if (mensaje == NULL)
        return NULL;
    memcpy(mensaje, prefijo, sizeof(prefijo) - 1);
    memcpy(mensaje + sizeof(prefijo) - 1, usuario, longitud + 1);
    return mensaje;
}
