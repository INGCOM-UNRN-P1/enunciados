#include "ej-20-50-niveles-de-notificacion.h"
const char *nombre_nivel(enum nivel_notificacion n){static const char *v[]={"DEBUG","INFO","ADVERTENCIA","ERROR","CRITICO"};return (unsigned)n<NOTIF_NIVEL_MAX?v[n]:"INVALIDO";}
bool nivel_notificacion_valido(enum nivel_notificacion n){return (unsigned)n<NOTIF_NIVEL_MAX;}
