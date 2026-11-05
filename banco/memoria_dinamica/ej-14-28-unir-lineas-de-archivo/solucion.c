#include "ej-14-28-unir-lineas-de-archivo.h"

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

static bool agregar_bytes(char **buffer, size_t *longitud, size_t *capacidad,
                          const char *bytes, size_t cantidad)
{
    if (cantidad > SIZE_MAX - *longitud - 1) return false;
    size_t requerido = *longitud + cantidad + 1;
    if (requerido > *capacidad) {
        size_t nueva = *capacidad ? *capacidad : 32;
        while (nueva < requerido) {
            if (nueva > SIZE_MAX / 2) { nueva = requerido; break; }
            nueva *= 2;
        }
        char *temporal = realloc(*buffer, nueva);
        if (!temporal) return false;
        *buffer = temporal;
        *capacidad = nueva;
    }
    if (cantidad) memcpy(*buffer + *longitud, bytes, cantidad);
    *longitud += cantidad;
    (*buffer)[*longitud] = '\0';
    return true;
}

static void liberar_lineas(char **lineas, size_t cantidad)
{
    for (size_t i = 0; i < cantidad; i++) free(lineas[i]);
    free(lineas);
}

static bool guardar_linea(char ***lineas, size_t *cantidad, size_t *capacidad,
                          char *linea)
{
    if (*cantidad == *capacidad) {
        size_t nueva = *capacidad ? *capacidad * 2 : 4;
        if (nueva < *capacidad || nueva > SIZE_MAX / sizeof **lineas) return false;
        char **temporal = realloc(*lineas, nueva * sizeof **lineas);
        if (!temporal) return false;
        *lineas = temporal;
        *capacidad = nueva;
    }
    (*lineas)[(*cantidad)++] = linea;
    return true;
}

char *unir_lineas(FILE *entrada, const char *separador)
{
    if (!entrada || !separador) return NULL;
    char **lineas = NULL;
    size_t cantidad = 0, capacidad = 0;
    char *linea = NULL;
    size_t longitud_linea = 0, capacidad_linea = 0;
    int caracter;
    while ((caracter = fgetc(entrada)) != EOF) {
        if (caracter != '\n') {
            char byte = (char)caracter;
            if (!agregar_bytes(&linea, &longitud_linea, &capacidad_linea, &byte, 1))
                goto error;
            continue;
        }
        if (!linea) {
            linea = malloc(1);
            if (!linea) goto error;
            linea[0] = '\0';
        }
        if (longitud_linea && linea[longitud_linea - 1] == '\r')
            linea[--longitud_linea] = '\0';
        if (!guardar_linea(&lineas, &cantidad, &capacidad, linea)) goto error;
        linea = NULL;
        longitud_linea = capacidad_linea = 0;
    }
    if (ferror(entrada)) goto error;
    if (linea || longitud_linea) {
        if (longitud_linea && linea[longitud_linea - 1] == '\r')
            linea[--longitud_linea] = '\0';
        if (!linea) {
            linea = malloc(1);
            if (!linea) goto error;
            linea[0] = '\0';
        }
        if (!guardar_linea(&lineas, &cantidad, &capacidad, linea)) goto error;
        linea = NULL;
    }

    char *resultado = malloc(1);
    if (!resultado) goto error;
    resultado[0] = '\0';
    size_t longitud = 0, capacidad_resultado = 1;
    for (size_t i = 0; i < cantidad; i++) {
        if ((i && !agregar_bytes(&resultado, &longitud, &capacidad_resultado,
                                 separador, strlen(separador))) ||
            !agregar_bytes(&resultado, &longitud, &capacidad_resultado,
                           lineas[i], strlen(lineas[i]))) {
            free(resultado);
            goto error;
        }
    }
    liberar_lineas(lineas, cantidad);
    return resultado;

error:
    free(linea);
    liberar_lineas(lineas, cantidad);
    return NULL;
}

int main(int argc, char **argv)
{
    FILE *entrada = stdin;
    if (argc > 2) {
        fputs("Uso: unir-lineas [archivo]\n", stderr);
        return EXIT_FAILURE;
    }
    if (argc == 2) {
        entrada = fopen(argv[1], "r");
        if (!entrada) {
            perror("No se pudo abrir el archivo");
            return EXIT_FAILURE;
        }
    }
    char *unidas = unir_lineas(entrada, " ");
    if (entrada != stdin) fclose(entrada);
    if (!unidas) {
        fputs("No se pudieron leer o unir las líneas.\n", stderr);
        return EXIT_FAILURE;
    }
    puts(unidas);
    free(unidas);
    return EXIT_SUCCESS;
}
