#include "ej-7-28-libreria-de-gestion-de-estados.h"

void flag_activar(bool banderas[], size_t n, size_t indice) { if (indice < n) banderas[indice] = true; }
void flag_desactivar(bool banderas[], size_t n, size_t indice) { if (indice < n) banderas[indice] = false; }
bool flag_consultar(const bool banderas[], size_t n, size_t indice) { return indice < n && banderas[indice]; }
void flag_reiniciar_todas(bool banderas[], size_t n, bool valor_defecto) { for (size_t i = 0; i < n; i++) banderas[i] = valor_defecto; }
size_t flag_contar_activas(const bool banderas[], size_t n) { size_t total = 0; for (size_t i = 0; i < n; i++) if (banderas[i]) total++; return total; }
