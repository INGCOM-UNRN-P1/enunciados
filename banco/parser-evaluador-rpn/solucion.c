/*
 * Evaluador de Expresiones en Notacion Polaca Inversa (RPN)
 * Catedra Programacion I - UNRN
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PILA 256

typedef struct
{
    long datos[MAX_PILA];
    int tope;
} PilaRPN;

void rpn_init(PilaRPN *p)
{
    p->tope = 0;
}

int rpn_push(PilaRPN *p, long v)
{
    if (p->tope >= MAX_PILA)
    {
        return 0;
    }
    p->datos[p->tope++] = v;
    return 1;
}

int rpn_pop(PilaRPN *p, long *out)
{
    if (p->tope <= 0)
    {
        return 0;
    }
    *out = p->datos[--p->tope];
    return 1;
}

void evaluar_linea(char *linea)
{
    PilaRPN p;
    rpn_init(&p);

    char *token = strtok(linea, " \t\r\n");
    int error_div_zero = 0;
    int error_sintaxis = 0;

    while (token != NULL)
    {
        if (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 ||
            strcmp(token, "*") == 0 || strcmp(token, "/") == 0)
        {
            long a = 0;
            long b = 0;
            if (!rpn_pop(&p, &a) || !rpn_pop(&p, &b))
            {
                error_sintaxis = 1;
                break;
            }
            if (strcmp(token, "+") == 0)
            {
                rpn_push(&p, b + a);
            }
            else if (strcmp(token, "-") == 0)
            {
                rpn_push(&p, b - a);
            }
            else if (strcmp(token, "*") == 0)
            {
                rpn_push(&p, b * a);
            }
            else if (strcmp(token, "/") == 0)
            {
                if (a == 0)
                {
                    error_div_zero = 1;
                    break;
                }
                rpn_push(&p, b / a);
            }
        }
        else
        {
            char *endptr = NULL;
            long val = strtol(token, &endptr, 10);
            if (endptr == token)
            {
                error_sintaxis = 1;
                break;
            }
            if (!rpn_push(&p, val))
            {
                error_sintaxis = 1;
                break;
            }
        }
        token = strtok(NULL, " \t\r\n");
    }

    if (error_div_zero)
    {
        printf("ERROR: DIV_ZERO\n");
    }
    else if (error_sintaxis || p.tope != 1)
    {
        printf("ERROR: SINTAXIS\n");
    }
    else
    {
        printf("RES: %ld\n", p.datos[0]);
    }
}

int main(void)
{
    char linea[1024] = {0};

    while (fgets(linea, sizeof(linea), stdin) != NULL)
    {
        if (strncmp(linea, "EXIT", 4) == 0 && (linea[4] == '\n' || linea[4] == '\0' || linea[4] == '\r'))
        {
            break;
        }
        if (linea[0] == '\n' || linea[0] == '\r')
        {
            continue;
        }
        evaluar_linea(linea);
    }

    return 0;
}