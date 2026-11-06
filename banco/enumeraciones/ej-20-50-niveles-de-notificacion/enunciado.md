# 50 Niveles De Notificacion

Modelá los niveles y canales de notificación. Los niveles válidos tienen orden creciente de prioridad; validá rangos y devolvé un nombre estable para cada nivel.

La estructura `notificacion_t` contiene nivel, máscara de canales, mensaje de hasta 255 caracteres más terminador y timestamp.

```c
bool nivel_notificacion_valido(enum nivel_notificacion nivel);
const char *nombre_nivel(enum nivel_notificacion nivel);
```
