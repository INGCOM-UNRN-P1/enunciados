# 51 Gestor De Notificaciones

Implementá el filtrado y despacho de notificaciones. Un evento se despacha si alcanza el umbral; los canales habilitados dependen del nivel y el callback se invoca una vez por canal seleccionado.

La estructura `notificacion_t` contiene nivel, máscara de canales, mensaje de hasta 255 caracteres más terminador y timestamp.

```c
bool debe_notificar(enum nivel_notificacion nivel, enum nivel_notificacion minimo);
unsigned int canales_para_nivel(enum nivel_notificacion nivel);
void enviar_notificacion(const notificacion_t *notif, enum nivel_notificacion minimo, void (*emitir)(unsigned int canal, const char *mensaje));
```
