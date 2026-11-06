#ifndef EJERCICIO_EJ_20_35_H
#define EJERCICIO_EJ_20_35_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum tipo_archivo { TIPO_REGULAR, TIPO_DIRECTORIO, TIPO_ENLACE_SIMBOLICO, TIPO_ENLACE_DURO, TIPO_DISPOSITIVO, TIPO_PIPE, TIPO_SOCKET };
typedef struct { char nombre[256]; enum tipo_archivo tipo; size_t tamanio; unsigned int permisos; } archivo_info_t;
const char *tipo_archivo_a_string(enum tipo_archivo tipo);
bool archivo_info_valida(const archivo_info_t *archivo);

#endif
