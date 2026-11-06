#ifndef EJ20_56_H
#define EJ20_56_H
#include <stddef.h>
enum dia { LUNES=1,MARTES=2,MIERCOLES=3,JUEVES=4,VIERNES=5,SABADO=6,DOMINGO=7 };
size_t tamanio_enum_dia(void);
int dia_a_indice(enum dia dia);
unsigned int mascara_dia(enum dia dia);
#endif
