#ifndef EJERCICIO_EJ_20_34_H
#define EJERCICIO_EJ_20_34_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum permiso_unix { OWNER_READ=0400, OWNER_WRITE=0200, OWNER_EXECUTE=0100, GROUP_READ=0040, GROUP_WRITE=0020, GROUP_EXECUTE=0010, OTHER_READ=0004, OTHER_WRITE=0002, OTHER_EXECUTE=0001 };
bool tiene_permiso_unix(unsigned int permisos, enum permiso_unix permiso);
unsigned int agregar_permiso_unix(unsigned int permisos, enum permiso_unix nuevo);
void mostrar_permisos_unix(unsigned int permisos);

#endif
