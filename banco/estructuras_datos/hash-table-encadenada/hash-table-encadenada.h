#ifndef EJERCICIO_HASH_TABLE_ENCADENADA_H
#define EJERCICIO_HASH_TABLE_ENCADENADA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación funcion_hash_djb2 */
unsigned long funcion_hash_djb2(const char *str);
/* Operación inicializar_tabla */
void inicializar_tabla(tabla_hash_t *tabla);
/* Operación insertar_o_actualizar */
void insertar_o_actualizar(tabla_hash_t *tabla, const char *clave, int valor);
/* Operación buscar_clave */
void buscar_clave(const tabla_hash_t *tabla, const char *clave);
/* Operación eliminar_clave */
void eliminar_clave(tabla_hash_t *tabla, const char *clave);
/* Operación destruir_tabla */
void destruir_tabla(tabla_hash_t *tabla);

#endif /* EJERCICIO_HASH_TABLE_ENCADENADA_H */
