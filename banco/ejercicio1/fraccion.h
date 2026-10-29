/**
 * @file fraccion.h
 * @brief TDA Fracción (números racionales exactos) con invariantes y tipos opacos.
 *
 * Trabajo Práctico 6 - Programación 1
 * Universidad Nacional de Río Negro - Ingeniería en Computación
 */

#ifndef FRACCION_H
#define FRACCION_H

#include <stdbool.h>

/**
 * @brief Tipo opaco que representa una fracción matemática irreductible.
 */
typedef struct fraccion fraccion_t;

/**
 * @brief Crea e inicializa una nueva fracción matemática.
 *
 * Reserva memoria dinámica para una fracción a partir de un numerador y un
 * denominador dados. La fracción resultante se simplifica automáticamente a su
 * forma irreducible (utilizando el MCD) y se normaliza el signo para que este
 * resida únicamente en el numerador.
 *
 * @param numerador Entero que representa el numerador de la fracción.
 * @param denominador Entero que representa el denominador de la fracción.
 *
 * @return Puntero a la nueva instancia de fraccion_t, o NULL si el denominador
 *         es 0, si ocurre un error en la reserva de memoria dinámica, o si no cumple con invariantes.
 *
 * @pre El denominador no debe ser igual a 0.
 * @post Si la función no retorna NULL, la fracción devuelta es irreducible y
 *       satisface el invariante de representación (denominador > 0).
 */
fraccion_t *fraccion_crear(int numerador, int denominador);

/**
 * @brief Libera la memoria reservada para una fracción.
 *
 * Libera la memoria dinámica asignada a la instancia de fraccion_t dada.
 * Esta función es tolerante a punteros nulos: si recibe NULL, no realiza
 * ninguna operación ni produce fallos de segmento.
 *
 * @param f Puntero a la fracción a destruir. Puede ser NULL.
 *
 * @pre Ninguna.
 * @post La memoria asignada a la fracción es devuelta al sistema.
 */
void fraccion_destruir(fraccion_t *f);

/**
 * @brief Obtiene el numerador de la fracción.
 *
 * @param f Puntero a la fracción a consultar.
 *
 * @return Entero que representa el numerador de la fracción, o 0 si f es NULL.
 *
 * @pre El puntero f no debe ser NULL.
 * @post La fracción permanece inalterada.
 */
int fraccion_numerador(const fraccion_t *f);

/**
 * @brief Obtiene el denominador de la fracción.
 *
 * @param f Puntero a la fracción a consultar.
 *
 * @return Entero positivo que representa el denominador de la fracción, o 0 si f es NULL.
 *
 * @pre El puntero f no debe ser NULL.
 * @post La fracción permanece inalterada y el valor retornado es siempre > 0.
 */
int fraccion_denominador(const fraccion_t *f);

/**
 * @brief Consulta si la fracción representa un número entero.
 *
 * Determina si la fracción simplificada tiene como denominador el valor 1.
 *
 * @param f Puntero a la fracción a consultar.
 *
 * @return true si el denominador es igual a 1, false en caso contrario o si f es NULL.
 *
 * @pre El puntero f no debe ser NULL.
 * @post La fracción permanece inalterada.
 */
bool fraccion_es_entera(const fraccion_t *f);

/**
 * @brief Compara dos fracciones matemáticas para determinar su orden.
 *
 * Compara f1 y f2 utilizando el producto cruzado para evitar divisiones
 * de punto flotante y mantener la precisión exacta.
 *
 * @param f1 Puntero a la primera fracción.
 * @param f2 Puntero a la segunda fracción.
 *
 * @return Un entero menor que 0 si f1 < f2, 0 si f1 == f2, o mayor que 0 si f1 > f2.
 *         Si alguno de los punteros es NULL, retorna 0 como caso defensivo.
 *
 * @pre Ni f1 ni f2 deben ser NULL.
 * @post Ambas fracciones permanecen inalteradas.
 */
int fraccion_comparar(const fraccion_t *f1, const fraccion_t *f2);

/**
 * @brief Suma dos fracciones y genera una nueva fracción con el resultado.
 *
 * Realiza la suma exacta entre f1 y f2. La fracción resultante se devuelve
 * simplificada e irreducible.
 *
 * @param f1 Puntero a la primera fracción sumando.
 * @param f2 Puntero a la segunda fracción sumando.
 *
 * @return Puntero a una nueva instancia de fraccion_t con el resultado de la suma,
 *         o NULL si alguno de los parámetros es NULL o si falla la asignación de memoria.
 *
 * @pre Ni f1 ni f2 deben ser NULL.
 * @post Las fracciones originales f1 y f2 permanecen inalteradas.
 */
fraccion_t *fraccion_sumar(const fraccion_t *f1, const fraccion_t *f2);

/**
 * @brief Multiplica dos fracciones y genera una nueva fracción con el resultado.
 *
 * Realiza el producto exacto entre f1 y f2. La fracción resultante se devuelve
 * simplificada e irreducible.
 *
 * @param f1 Puntero a la primera fracción factor.
 * @param f2 Puntero a la segunda fracción factor.
 *
 * @return Puntero a una nueva instancia de fraccion_t con el resultado del producto,
 *         o NULL si alguno de los parámetros es NULL o si falla la asignación de memoria.
 *
 * @pre Ni f1 ni f2 deben ser NULL.
 * @post Las fracciones originales f1 y f2 permanecen inalteradas.
 */
fraccion_t *fraccion_multiplicar(const fraccion_t *f1, const fraccion_t *f2);

/**
 * @brief Convierte la fracción a su representación numérica en coma flotante.
 *
 * Calcula el valor real equivalente dividiendo el numerador por el denominador
 * mediante casteo explícito a double para mantener la precisión.
 *
 * @param f Puntero a la fracción a convertir.
 *
 * @return El valor real de la fracción como double, o 0.0 si f es NULL.
 *
 * @pre El puntero f no debe ser NULL.
 * @post La fracción permanece inalterada.
 */
double fraccion_a_real(const fraccion_t *f);

/**
 * @brief Genera una representación en cadena de texto de la fracción.
 *
 * Reserva memoria dinámica en el heap para una cadena con el formato "num/den".
 * Es responsabilidad del llamador liberar la memoria retornada utilizando free().
 *
 * @param f Puntero a la fracción a convertir.
 *
 * @return Puntero a la cadena de caracteres creada dinámicamente, o NULL si f
 *         es NULL o si falla la asignación de memoria.
 *
 * @pre El puntero f no debe ser NULL.
 * @post La fracción permanece inalterada. El llamador asume la propiedad de la
 *       memoria de la cadena retornada.
 */
char *fraccion_a_cadena(const fraccion_t *f);

#endif /* FRACCION_H */
