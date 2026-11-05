#ifndef EJ_FLAGS_H
#define EJ_FLAGS_H
#include <stdbool.h>
#include <stddef.h>
void flag_activar(bool banderas[], size_t n, size_t indice);
void flag_desactivar(bool banderas[], size_t n, size_t indice);
bool flag_consultar(const bool banderas[], size_t n, size_t indice);
void flag_reiniciar_todas(bool banderas[], size_t n, bool valor_defecto);
size_t flag_contar_activas(const bool banderas[], size_t n);
#endif
