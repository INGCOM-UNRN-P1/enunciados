/**
 * @file tiempo.h
 * @brief TDA Duración de Tiempo con interfaz desacoplada de la representación.
 *
 * Trabajo Práctico 6 - Programación 1
 * Universidad Nacional de Río Negro - Ingeniería en Computación
 */

#ifndef TIEMPO_H
#define TIEMPO_H

#include <stdbool.h>

/**
 * @brief Tipo opaco que representa una duración temporal.
 */
typedef struct tiempo tiempo_t;

/**
 * @brief Crea una nueva instancia de tiempo_t.
 *
 * Reserva memoria dinámica e inicializa el objeto. Recibe horas, minutos
 * y segundos, normalizando internamente cualquier exceso (por ejemplo, 70 minutos
 * se convierten en 1 hora y 10 minutos).
 *
 * @param horas Cantidad inicial de horas.
 * @param minutos Cantidad inicial de minutos (admite valores >= 60).
 * @param segundos Cantidad inicial de segundos (admite valores >= 60).
 *
 * @return Puntero a la instancia tiempo_t creada dinámicamente en el heap,
 *         o NULL si falla la asignación de memoria o la validación del invariante.
 */
tiempo_t *tiempo_crear(unsigned int horas, unsigned int minutos, unsigned int segundos);

/**
 * @brief Libera la memoria reservada para una instancia de tiempo_t.
 *
 * @param t Puntero al tiempo a destruir. Si es NULL, la función no realiza ninguna acción.
 */
void tiempo_destruir(tiempo_t *t);

/**
 * @brief Obtiene la cantidad de horas de la duración.
 *
 * @param t Puntero a la estructura tiempo a consultar.
 *
 * @pre El puntero t no debe ser NULL.
 * @post La estructura t permanece inalterada.
 *
 * @return Cantidad de horas, o 0 si t es NULL.
 */
unsigned int tiempo_horas(const tiempo_t *t);

/**
 * @brief Obtiene la cantidad de minutos de la duración.
 *
 * @param t Puntero a la estructura tiempo a consultar.
 *
 * @return Cantidad de minutos en el rango garantizado [0, 59], o 0 si t es NULL.
 *
 * @pre El puntero t no debe ser NULL.
 * @post La estructura t permanece inalterada.
 */
unsigned int tiempo_minutos(const tiempo_t *t);

/**
 * @brief Obtiene la cantidad de segundos de la duración.
 *
 * @param t Puntero a la estructura tiempo a consultar.
 *
 * @return Cantidad de segundos en el rango garantizado [0, 59], o 0 si t es NULL.
 *
 * @pre El puntero t no debe ser NULL.
 * @post La estructura t permanece inalterada.
 */
unsigned int tiempo_segundos(const tiempo_t *t);

/**
 * @brief Calcula la duración total expresada íntegramente en segundos.
 *
 * @param t Puntero a la estructura tiempo a consultar.
 *
 * @return Total de segundos equivalentes a la duración, o 0 si t es NULL.
 *
 * @pre El puntero t no debe ser NULL.
 * @post La estructura t permanece inalterada.
 */
unsigned long tiempo_en_segundos(const tiempo_t *t);

/**
 * @brief Incrementa la duración sumando una cantidad dada de segundos.
 *
 * Suma los segundos recibidos y normaliza la estructura resultante para
 * garantizar que los minutos y segundos se mantengan dentro del rango [0, 59].
 *
 * @param t Puntero al tiempo a modificar.
 * @param segundos_extra Cantidad de segundos a incrementar.
 *
 * @pre El puntero t no debe ser NULL.
 * @post Si t no es NULL, la estructura t queda actualizada y mantiene su invariante.
 */
void tiempo_incrementar(tiempo_t *t, unsigned int segundos_extra);

#endif /* TIEMPO_H */
