#include "ej-20-39-planificador-simple.h"
bool proceso_valido(const proceso_t *p) { return p&&p->pid>0&&p->prioridad>=0&&p->estado>=PROCESO_NUEVO&&p->estado<=PROCESO_TERMINADO&&(p->estado!=PROCESO_BLOQUEADO||(p->razon>=BLOQ_IO&&p->razon<=BLOQ_MENSAJE)); }
bool transicion_estado(proceso_t *p,enum estado_proceso n) { if(!proceso_valido(p))return false; bool ok=(p->estado==PROCESO_NUEVO&&n==PROCESO_LISTO)||(p->estado==PROCESO_LISTO&&n==PROCESO_EJECUTANDO)||(p->estado==PROCESO_EJECUTANDO&&(n==PROCESO_LISTO||n==PROCESO_BLOQUEADO||n==PROCESO_TERMINADO))||(p->estado==PROCESO_BLOQUEADO&&n==PROCESO_LISTO); if(ok)p->estado=n;return ok; }
bool puede_ejecutar(const proceso_t *p) { return proceso_valido(p)&&p->estado==PROCESO_LISTO; }
