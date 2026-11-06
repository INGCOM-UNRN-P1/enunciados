#ifndef EJ20_51_H
#define EJ20_51_H
#include <stdbool.h>
#include <time.h>
#include <stdbool.h>
#include <time.h>
enum nivel_notificacion { NOTIF_DEBUG, NOTIF_INFO, NOTIF_ADVERTENCIA, NOTIF_ERROR, NOTIF_CRITICO, NOTIF_NIVEL_MAX };
enum canal_notificacion { CANAL_NINGUNO=0, CANAL_CONSOLE=1u<<0, CANAL_EMAIL=1u<<1, CANAL_SMS=1u<<2, CANAL_PUSH=1u<<3, CANAL_SYSLOG=1u<<4 };
typedef struct { enum nivel_notificacion nivel; unsigned int canales; char mensaje[256]; time_t timestamp; } notificacion_t;
bool debe_notificar(enum nivel_notificacion nivel, enum nivel_notificacion minimo);
unsigned int canales_para_nivel(enum nivel_notificacion nivel);
void enviar_notificacion(const notificacion_t *notif, enum nivel_notificacion minimo, void (*emitir)(unsigned int canal, const char *mensaje));
#endif
