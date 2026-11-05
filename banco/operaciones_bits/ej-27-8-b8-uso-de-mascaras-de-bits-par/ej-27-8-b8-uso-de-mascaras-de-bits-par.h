#ifndef EJ_PERMISOS_BITS_H
#define EJ_PERMISOS_BITS_H

#define LECTURA   (1u << 0)
#define ESCRITURA (1u << 1)
#define EJECUCION (1u << 2)
unsigned char conceder(unsigned char permisos, unsigned char mascara);
unsigned char revocar(unsigned char permisos, unsigned char mascara);
int tiene_permisos(unsigned char permisos, unsigned char mascara);

#endif
