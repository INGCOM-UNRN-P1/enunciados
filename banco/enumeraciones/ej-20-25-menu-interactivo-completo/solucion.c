#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ej-20-25-menu-interactivo-completo.h"

static void mostrar_menu(FILE *salida)
{
    fputs("1. Nuevo\n2. Abrir\n3. Guardar\n4. Cerrar\n5. Salir\nOpcion: ", salida);
}

static enum opcion_menu leer_opcion(FILE *entrada)
{
    char linea[128];
    char *fin;
    long valor;

    if (!fgets(linea, sizeof linea, entrada))
    {
        return MENU_INVALIDO;
    }
    if (!strchr(linea, '\n') && !feof(entrada))
    {
        int c;
        while ((c = fgetc(entrada)) != '\n' && c != EOF)
        {
        }
        return MENU_INVALIDO;
    }

    errno = 0;
    valor = strtol(linea, &fin, 10);
    while (isspace((unsigned char)*fin))
    {
        fin++;
    }
    if (errno == ERANGE || fin == linea || *fin != '\0' ||
        valor < MENU_NUEVO || valor > MENU_SALIR)
    {
        return MENU_INVALIDO;
    }
    return (enum opcion_menu)valor;
}

int ejecutar_menu(FILE *entrada, FILE *salida)
{
    int acciones = 0;
    if (!entrada || !salida)
    {
        return -1;
    }

    for (;;)
    {
        enum opcion_menu opcion;
        mostrar_menu(salida);
        opcion = leer_opcion(entrada);
        switch (opcion)
        {
            case MENU_NUEVO:
                fputs("nuevo\n", salida);
                acciones++;
                break;
            case MENU_ABRIR:
                fputs("abrir\n", salida);
                acciones++;
                break;
            case MENU_GUARDAR:
                fputs("guardar\n", salida);
                acciones++;
                break;
            case MENU_CERRAR:
                fputs("cerrar\n", salida);
                acciones++;
                break;
            case MENU_SALIR:
                fputs("salir\n", salida);
                return acciones;
            case MENU_INVALIDO:
            default:
                if (feof(entrada))
                {
                    return acciones;
                }
                fputs("invalido\n", salida);
                acciones++;
                break;
        }
    }
}
