#include "ej-20-57-tamano-y-rendimiento.h"
enum estado { ESTADO_A, ESTADO_B, ESTADO_C };
size_t tamanio_enum_estado(void){return sizeof(enum estado);}
size_t tamanio_tipo_entero(void){return sizeof(int);}
