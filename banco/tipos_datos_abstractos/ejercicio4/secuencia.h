/**
 * @file secuencia.h
 * @brief TDA Secuencia Lineal Indexada con implementaciones intercambiables.
 *
 * Trabajo Práctico 6 - Programación 1
 * Universidad Nacional de Río Negro - Ingeniería en Computación
 */

#ifndef SECUENCIA_H
#define SECUENCIA_H

#include <stdbool.h>
#include <stddef.h>

/**
 * @brief Tipo opaco que representa una secuencia lineal finita de enteros.
 */
typedef struct secuencia secuencia_t;

/**
 * @brief Crea e inicializa una nueva secuencia en memoria dinámica.
 *
 * Reserva memoria para la estructura principal secuencia_t y para el arreglo contiguo de
 * enteros en el heap de acuerdo con la capacidad solicitada.
 *
 * @param capacidad Capacidad máxima de elementos que podrá albergar la secuencia.
 *
 * @return Puntero a la nueva secuencia creada, o NULL si la capacidad indicada es 0
 *         o si falla cualquier reserva de memoria dinámica.
 */
secuencia_t *secuencia_crear(size_t capacidad);

/**
 * @brief Libera toda la memoria dinámica ocupada por una secuencia.
 *
 * Libera el arreglo dinámico interno de elementos y la estructura contenedora de la secuencia.
 * Si el puntero recibido es NULL, la función no realiza ninguna acción.
 *
 * @param s Puntero a la secuencia a liberar.
 */
void secuencia_destruir(secuencia_t *s);

/**
 * @brief Lee el elemento almacenado en una posición específica de la secuencia sin modificarla.
 *
 * Comprueba que la posición consultada esté dentro del rango activo de la secuencia y copia
 * el valor encontrado en la dirección de memoria apuntada por destino.
 *
 * @param sec Puntero constante a la secuencia a consultar.
 * @param indice Índice a leer (debe ser estrictamente menor al largo actual).
 * @param destino Puntero a la variable entera donde se guardará el valor recuperado.
 *
 * @return true si el índice es válido y la copia fue exitosa; false si sec o destino son NULL
 *         o si el índice está fuera del rango válido.
 */
bool secuencia_obtener(const secuencia_t *sec, size_t indice, int *destino);

/**
 * @brief Obtiene la cantidad actual de elementos almacenados en la secuencia.
 *
 * @param sec Puntero constante a la secuencia a consultar.
 *
 * @return Cantidad de elementos almacenados actualmente (largo), o 0 si sec es NULL.
 */
size_t secuencia_largo(const secuencia_t *sec);

/**
 * @brief Evalúa si la secuencia carece de elementos.
 *
 * @param sec Puntero constante a la secuencia a consultar.
 *
 * @return true si el largo de la secuencia es 0; false si contiene al menos un elemento
 *         o si sec es NULL.
 */
bool secuencia_esta_vacia(const secuencia_t *sec);

/**
 * @brief Inserta un entero en la posición indicada desplazando los elementos preexistentes.
 *
 * Realiza un corrimiento hacia la derecha de los elementos a partir del índice pos para liberar
 * la celda e insertar el nuevo valor sin perder información.
 *
 * @param sec Puntero a la secuencia a modificar.
 * @param pos Índice donde se ubicará el nuevo elemento.
 * @param valor Entero a insertar.
 *
 * @return true si la inserción se completó con éxito; false si sec es NULL, si se alcanzó
 *         la capacidad máxima de la secuencia o si la posición supera el largo actual.
 *
 * @post Si la operación tiene éxito, la cantidad de elementos de la secuencia aumenta en 1.
 */
bool secuencia_insertar(secuencia_t *sec, size_t pos, int valor);

/**
 * @brief Extrae y elimina el elemento ubicado en una posición dada.
 *
 * Copia el valor del elemento removido en la dirección apuntada por dato_extraido y desplaza
 * a la izquierda todos los elementos posteriores para mantener la contigüidad de la memoria.
 *
 * @param sec Puntero a la secuencia a modificar.
 * @param pos Índice del elemento a eliminar.
 * @param dato_extraido Puntero a la variable donde se almacenará el valor removido.
 *
 * @return true si el elemento fue extraído y borrado; false si sec o dato_extraido son NULL
 *         o si pos está fuera del rango válido de elementos.
 */
bool secuencia_eliminar(secuencia_t *sec, size_t pos, int *dato_extraido);

/**
 * @brief Genera una representación de texto con los elementos de la secuencia.
 *
 * Formatea el contenido de la secuencia en una cadena de caracteres dinámica con la forma
 * "[10, 20, 30]". El llamador es responsable de liberar la memoria del string resultante.
 *
 * @param sec Puntero constante a la secuencia a convertir.
 *
 * @return Puntero a la cadena alojada en el heap, o NULL si sec es NULL o si falla malloc.
 */
char *secuencia_a_cadena(const secuencia_t *sec);

#endif /* SECUENCIA_H */
