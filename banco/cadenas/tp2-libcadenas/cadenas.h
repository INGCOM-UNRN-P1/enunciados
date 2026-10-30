/**
 * @file cadenas.h
 * @brief Biblioteca de manipulación de cadenas seguras (Safe Strings) en C11.
 *
 * Trabajo Práctico 2 - Programación 1
 * Universidad Nacional de Río Negro - Ingeniería en Computación
 *
 * Convenciones de Estilo y Seguridad:
 * - Nombres de variables y parámetros descriptivos, de hasta dos palabras,
 *   sin abreviaturas y con un máximo de 12 caracteres.
 * - RECIBE LA CAPACIDAD: Parámetro 'size_t capacidad' con el tamaño total
 *   del búfer destino en memoria física (incluyendo terminador).
 * - GARANTÍA DE TERMINADOR: Si capacidad > 0, el búfer destino siempre
 *   finaliza con el carácter nulo '\0'.
 * - CONTROL DE LÍMITES: Nunca se escribe fuera de [0, capacidad - 1].
 */

#ifndef CADENAS_H
#define CADENAS_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Ejercicio 1: Medición Segura de Longitud
 * =========================================================================
 * Consigna:
 * Contar y retornar la cantidad de caracteres útiles de la cadena antes del
 * terminador nulo '\0', examinando como máximo 'capacidad' bytes en memoria
 * para prevenir lecturas fuera de límites si la cadena careciese de '\0'.
 * Si no halla '\0' dentro del rango, retornar 'capacidad'. Retornar 0 si la
 * cadena es nula o la capacidad es 0.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función (propósito,
 * precondiciones, postcondiciones, parámetros y valor de retorno).
 */
size_t cadena_longitud(const char cadena[], size_t capacidad);

/* =========================================================================
 * Ejercicio 2: Copia Segura con Control de Búfer
 * =========================================================================
 * Consigna:
 * Copiar la cadena origen en el búfer destino de tamaño 'capacidad' bytes.
 * Si origen cabe completo (incluyendo '\0'), copiarlo y retornar true. Si no
 * cabe completo, copiar los primeros capacidad - 1 caracteres, colocar '\0'
 * al final y retornar false para advertir el truncamiento. Si destino es nulo
 * o la capacidad es 0, retornar false sin modificar memoria.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 */
bool cadena_copiar(char destino[], size_t capacidad, const char origen[]);

/* =========================================================================
 * Ejercicio 3: Concatenación Segura con Control de Búfer
 * =========================================================================
 * Consigna:
 * Anexar el contenido de origen al final del texto preexistente en destino,
 * respetando estrictamente la capacidad total del búfer. El resultado debe
 * quedar siempre finalizado en '\0' si capacidad > 0. Retornar true si todo
 * el texto de origen se concatenó sin truncamiento; retornar false si hubo
 * truncamiento o ante argumentos inválidos.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 */
bool cadena_concatenar(char destino[], size_t capacidad, const char origen[]);

/* =========================================================================
 * Ejercicio 4: Normalización a Mayúsculas Segura
 * =========================================================================
 * Consigna:
 * Convertir in-place a mayúsculas los caracteres minúsculas ASCII ('a'-'z')
 * presentes en la cadena, sin sobrepasar el límite de capacidad y deteniéndose
 * en el primer '\0'. Retornar la cantidad de caracteres convertidos a mayúscula.
 * Retornar 0 ante cadena nula o capacidad igual a 0.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 */
size_t cadena_a_mayusculas(char cadena[], size_t capacidad);

/* =========================================================================
 * Ejercicio 5: Extracción de Subcadena Segura (Sin prototipo previo)
 * =========================================================================
 * Consigna:
 * Extraer una porción de una cadena origen a partir de una posición inicial
 * ('inicio'), copiando a lo sumo 'cantidad' caracteres en un búfer destino
 * seguro acotado por 'capacidad'. Si capacidad > 0, el destino debe quedar
 * siempre terminado en '\0'. Si inicio supera la longitud de origen, destino
 * debe quedar como cadena vacía ("").
 *
 * Tarea del estudiante:
 * 1. Diseñar y declarar el prototipo con identificadores de hasta 12 caracteres.
 * 2. Redactar y completar su documentación formal exhaustiva.
 * 3. Implementar la función en cadenas.c y sus pruebas en prueba.c.
 *
 * Prototipo sugerido:
 * bool cadena_subcadena(char destino[], size_t capacidad, const char origen[], size_t inicio, size_t cantidad);
 */

/* =========================================================================
 * Ejercicio 6: Entero a Cadena Decimal Segura (Sin prototipo previo)
 * =========================================================================
 * Consigna:
 * Convertir un entero con signo ('valor') a su representación textual en
 * base 10 dentro de un búfer destino seguro de tamaño 'capacidad'. Debe
 * contemplar números negativos (con prefijo '-'), el cero ("0") y el valor
 * extremo INT_MIN. Si la capacidad es insuficiente, colocar '\0' y alertar
 * el error sin generar desbordamiento de búfer.
 *
 * Tarea del estudiante:
 * 1. Diseñar y declarar el prototipo formal.
 * 2. Redactar y completar su documentación formal exhaustiva.
 * 3. Implementar la función en cadenas.c y sus pruebas en prueba.c.
 *
 * Prototipo sugerido:
 * bool cadena_de_entero(char destino[], size_t capacidad, int valor);
 */

#endif /* CADENAS_H */
