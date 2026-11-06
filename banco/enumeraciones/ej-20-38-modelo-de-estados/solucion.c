#include "ej-20-38-modelo-de-estados.h"
bool proceso_valido(const proceso_t *p) { return p&&p->pid>0&&p->prioridad>=0&&p->estado>=PROCESO_NUEVO&&p->estado<=PROCESO_TERMINADO&&(p->estado!=PROCESO_BLOQUEADO||(p->razon>=BLOQ_IO&&p->razon<=BLOQ_MENSAJE)); }
const char *estado_proceso_a_string(enum estado_proceso s) { static const char *v[]={"nuevo","listo","ejecutando","bloqueado","terminado"};return s>=PROCESO_NUEVO&&s<=PROCESO_TERMINADO?v[s]:"desconocido"; }
