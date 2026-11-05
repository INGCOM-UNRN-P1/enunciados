#ifndef EJ_20_5_VALIDACION_DE_ESTADO_H
#define EJ_20_5_VALIDACION_DE_ESTADO_H

#include <stdbool.h>

enum estado_red { DESCONECTADO, CONECTANDO, CONECTADO, DESCONECTANDO, ERROR_TIMEOUT, ERROR_AUTH, _ESTADO_MAX };

bool estado_valido(int valor);

#endif
