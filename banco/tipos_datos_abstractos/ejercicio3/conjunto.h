/**
 * @file conjunto.h
 * @brief TDA Conjunto Finito de Enteros con invariante de unicidad.
 *
 * Trabajo Práctico 6 - Programación 1
 * Universidad Nacional de Río Negro - Ingeniería en Computación
 */

#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <stdbool.h>
#include <stddef.h>

/**
 * @brief Tipo opaco que representa un conjunto matemático finito de números enteros.
 */
typedef struct conjunto conjunto_t;

/**
 * @brief Crea una nueva instancia de un conjunto matemático de enteros.
 *
 * Reserva memoria dinámica tanto para la estructura del conjunto como para su
 * arreglo interno de elementos con la capacidad especificada.
 *
 * @param capacidad Capacidad máxima de elementos que podrá almacenar el conjunto.
 *
 * @return Puntero a la instancia conjunto_t creada en memoria dinámica,
 *         o NULL si falla la asignación de memoria o si la capacidad es 0.
 */
conjunto_t *conjunto_crear(size_t capacidad);

/**
 * @brief Libera toda la memoria dinámica asociada a un conjunto.
 *
 * Libera tanto el arreglo dinámico interno como la estructura principal del conjunto.
 * Si c es NULL, no realiza ninguna acción.
 *
 * @param c Puntero al conjunto a destruir.
 */
void conjunto_destruir(conjunto_t *c);

/**
 * @brief Obtiene la cantidad actual de elementos en el conjunto.
 *
 * @param c Puntero al conjunto a consultar.
 *
 * @return Cantidad de elementos almacenados (cardinal), o 0 si c es NULL.
 */
size_t conjunto_cardinal(const conjunto_t *c);

/**
 * @brief Determina si el conjunto no contiene elementos.
 *
 * @param c Puntero al conjunto a consultar.
 *
 * @return true si el conjunto tiene cardinal 0; false si tiene al menos un elemento o si c es NULL.
 */
bool conjunto_esta_vacio(const conjunto_t *c);

/**
 * @brief Consulta la presencia de un elemento dentro del conjunto.
 *
 * @param c Puntero al conjunto a consultar.
 * @param elemento Valor entero a buscar.
 *
 * @return true si el elemento pertenece al conjunto; false en caso contrario o si c es NULL.
 */
bool conjunto_pertenece(const conjunto_t *c, int elemento);

/**
 * @brief Evalúa si el conjunto a es subconjunto del conjunto b (A ⊆ B).
 *
 * Verifica si cada uno de los elementos almacenados en a pertenece también a b.
 *
 * @param a Puntero al conjunto candidato a subconjunto.
 * @param b Puntero al conjunto contenedor.
 *
 * @return true si todos los elementos de a pertenecen a b; false en caso contrario
 *         o si alguno de los punteros es NULL.
 */
bool conjunto_es_subconjunto(const conjunto_t *a, const conjunto_t *b);

/**
 * @brief Agrega un elemento al conjunto respetando el invariante de unicidad.
 *
 * Si el elemento ya pertenece al conjunto, la operación tiene éxito sin duplicarlo.
 * Si el elemento no estaba, se inserta en la posición actual del cardinal.
 *
 * @param c Puntero al conjunto a modificar.
 * @param elemento Valor entero a insertar.
 *
 * @return true si el elemento ya pertenecía o si fue agregado con éxito;
 *         false si c es NULL o si el conjunto alcanzó su capacidad máxima.
 */
bool conjunto_agregar(conjunto_t *c, int elemento);

/**
 * @brief Elimina un elemento del conjunto manteniendo los elementos restantes contiguos.
 *
 * Si el elemento pertenece al conjunto, realiza un corrimiento a la izquierda
 * de los elementos posteriores para evitar dejar huecos en la memoria.
 *
 * @param c Puntero al conjunto a modificar.
 * @param elemento Valor entero a eliminar.
 *
 * @return true si el elemento fue eliminado; false si c es NULL o si el elemento no pertenecía.
 */
bool conjunto_eliminar(conjunto_t *c, int elemento);

/**
 * @brief Construye un nuevo conjunto resultado de la unión entre a y b (A ∪ B).
 *
 * Crea una nueva instancia de conjunto_t con capacidad suficiente para albergar
 * todos los elementos posibles e inserta sin duplicar los elementos de a y b.
 *
 * @param a Puntero al primer conjunto.
 * @param b Puntero al segundo conjunto.
 *
 * @return Puntero a la nueva instancia conjunto_t con la unión, o NULL si falla
 *         la reserva de memoria o si alguno de los parámetros es NULL.
 */
conjunto_t *conjunto_union(const conjunto_t *a, const conjunto_t *b);

/**
 * @brief Construye un nuevo conjunto resultado de la intersección entre a y b (A ∩ B).
 *
 * Crea una nueva instancia con los elementos presentes simultáneamente en a y b.
 *
 * @param a Puntero al primer conjunto.
 * @param b Puntero al segundo conjunto.
 *
 * @return Puntero a la nueva instancia conjunto_t con la intersección, o NULL
 *         si falla la asignación de memoria o si alguno de los parámetros es NULL.
 */
conjunto_t *conjunto_interseccion(const conjunto_t *a, const conjunto_t *b);

#endif /* CONJUNTO_H */
