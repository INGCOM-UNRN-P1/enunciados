#ifndef EJERCICIO_SERIALIZADOR_BINARIO_REGISTROS_H
#define EJERCICIO_SERIALIZADOR_BINARIO_REGISTROS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación calcular_checksum */
uint32_t calcular_checksum(const uint8_t *data, size_t len);

#endif /* EJERCICIO_SERIALIZADOR_BINARIO_REGISTROS_H */
