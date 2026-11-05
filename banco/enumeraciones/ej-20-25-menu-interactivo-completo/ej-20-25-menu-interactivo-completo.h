#ifndef EJERCICIO_EJ_20_25_H
#define EJERCICIO_EJ_20_25_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum opcion_menu { MENU_NUEVO=1, MENU_ABRIR, MENU_GUARDAR, MENU_CERRAR, MENU_SALIR, MENU_INVALIDO=-1 };
int ejecutar_menu(FILE *entrada, FILE *salida);

#endif
