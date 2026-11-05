#ifndef EJERCICIO_EJ_20_29_H
#define EJERCICIO_EJ_20_29_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

typedef struct { int valor; const char *nombre; } enum_string_t;
const char *enum_a_string(int valor,const enum_string_t *tabla,size_t tam);
int string_a_enum(const char *nombre,const enum_string_t *tabla,size_t tam,int valor_defecto);

#endif
