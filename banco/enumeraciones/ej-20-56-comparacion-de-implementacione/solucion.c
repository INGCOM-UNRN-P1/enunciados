#include "ej-20-56-comparacion-de-implementacione.h"
size_t tamanio_enum_dia(void){return sizeof(enum dia);}
int dia_a_indice(enum dia d){return d>=LUNES&&d<=DOMINGO?(int)d-1:-1;}
unsigned int mascara_dia(enum dia d){return d>=LUNES&&d<=DOMINGO?1u<<((unsigned)d-1):0u;}
