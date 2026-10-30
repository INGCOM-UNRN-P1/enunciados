#include "consola.h"
#include <stdio.h>

void limpiar_buffer_entrada(void)
{
    int caracter = 0;
    while ((caracter = getchar()) != '\n' && caracter != EOF)
    {
        /* Descartar caracteres restantes en el bufer de entrada */
    }
}

bool esta_en_rango_entero(int valor, int min, int max)
{
    return (valor >= min && valor <= max);
}

bool esta_en_rango_flotante(float valor, float min, float max)
{
    return (valor >= min && valor <= max);
}

int leer_entero(const char *mensaje)
{
    (void)mensaje;
    /*
     * Guia de implementacion:
     * 1. Imprimir el mensaje/prompt con printf("%s", mensaje).
     * 2. Declarar una variable entera (ej: int valor).
     * 3. Leer con scanf("%d", &valor) y verificar su retorno (debe ser 1).
     * 4. Limpiar el bufer llamando a limpiar_buffer_entrada().
     * 5. Si scanf fallo, informar el error y reintentar hasta ingreso valido.
     * 6. Retornar el valor ingresado.
     */
    return 0;
}

int leer_entero_entre(const char *mensaje, int min, int max)
{
    (void)mensaje;
    (void)min;
    (void)max;
    /*
     * Guia de implementacion:
     * 1. Solicitar un entero al usuario (ej: invocando leer_entero(mensaje)).
     * 2. Validar con esta_en_rango_entero(valor, min, max).
     * 3. Si no esta en rango, mostrar error indicando limites y repetir.
     * 4. Retornar el valor cuando se encuentre dentro del rango.
     */
    return 0;
}

float leer_flotante(const char *mensaje)
{
    (void)mensaje;
    /*
     * Guia de implementacion:
     * 1. Imprimir el mensaje/prompt con printf("%s", mensaje).
     * 2. Declarar una variable flotante (ej: float valor).
     * 3. Leer con scanf("%f", &valor) y verificar su retorno (debe ser 1).
     * 4. Limpiar el bufer llamando a limpiar_buffer_entrada().
     * 5. Si la lectura fallo, informar el error y reintentar.
     * 6. Retornar el valor flotante ingresado.
     */
    return 0.0f;
}

float leer_flotante_entre(const char *mensaje, float min, float max)
{
    (void)mensaje;
    (void)min;
    (void)max;
    /*
     * Guia de implementacion:
     * 1. Solicitar un flotante al usuario (ej: usando leer_flotante(mensaje)).
     * 2. Validar con esta_en_rango_flotante(valor, min, max).
     * 3. Si no esta en rango, mostrar error con limites y reintentar.
     * 4. Retornar el valor valido.
     */
    return 0.0f;
}

char leer_caracter(const char *mensaje)
{
    (void)mensaje;
    /*
     * Guia de implementacion:
     * 1. Imprimir el mensaje/prompt con printf("%s", mensaje).
     * 2. Leer un caracter usando scanf(" %c", &c).
     * 3. Limpiar el bufer con limpiar_buffer_entrada().
     * 4. Retornar el caracter leido.
     */
    return ' ';
}

bool leer_logico(const char *mensaje)
{
    (void)mensaje;
    /*
     * Guia de implementacion:
     * 1. Imprimir el mensaje solicitando confirmacion (ej: "[s/n]").
     * 2. Leer un caracter o entero representativo.
     * 3. Limpiar el bufer con limpiar_buffer_entrada().
     * 4. Retornar true si es afirmativo ('s', 'S', 1) o false ('n', 'N', 0).
     * 5. Si la respuesta es invalida, emitir advertencia y reintentar.
     */
    return false;
}
