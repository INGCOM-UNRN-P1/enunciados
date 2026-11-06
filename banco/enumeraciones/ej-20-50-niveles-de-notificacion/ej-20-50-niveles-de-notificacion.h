#ifndef EJ20_50_H
#define EJ20_50_H
#include <stdbool.h>
#include <time.h>
#include <stdbool.h>
#include <time.h>
enum nivel_notificacion { NOTIF_DEBUG, NOTIF_INFO, NOTIF_ADVERTENCIA, NOTIF_ERROR, NOTIF_CRITICO, NOTIF_NIVEL_MAX };
enum canal_notificacion { CANAL_NINGUNO=0, CANAL_CONSOLE=1u<<0, CANAL_EMAIL=1u<<1, CANAL_SMS=1u<<2, CANAL_PUSH=1u<<3, CANAL_SYSLOG=1u<<4 };
typedef struct { enum nivel_notificacion nivel; unsigned int canales; char mensaje[256]; time_t timestamp; } notificacion_t;
bool nivel_notificacion_valido(enum nivel_notificacion nivel);
const char *nombre_nivel(enum nivel_notificacion nivel);
#endif
