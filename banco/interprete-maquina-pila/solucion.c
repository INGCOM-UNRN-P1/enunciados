/*
 * Interprete de Maquina Virtual de Pila
 * Catedra Programacion I - UNRN
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACIDAD_PILA 1024

typedef struct
{
    long datos[CAPACIDAD_PILA];
    int sp;
} PilaVirtual;

void inicializar_pila(PilaVirtual *p)
{
    p->sp = 0;
}

int push(PilaVirtual *p, long v)
{
    if (p->sp >= CAPACIDAD_PILA)
    {
        printf("ERROR_OVERFLOW\n");
        return 0;
    }
    p->datos[p->sp++] = v;
    return 1;
}

int pop(PilaVirtual *p, long *out)
{
    if (p->sp <= 0)
    {
        printf("ERROR_UNDERFLOW\n");
        return 0;
    }
    *out = p->datos[--p->sp];
    return 1;
}

int main(void)
{
    PilaVirtual p;
    inicializar_pila(&p);

    char op[32] = {0};
    long val = 0;

    while (scanf("%31s", op) == 1)
    {
        if (strcmp(op, "PUSH") == 0)
        {
            if (scanf("%ld", &val) == 1)
            {
                push(&p, val);
            }
        }
        else if (strcmp(op, "ADD") == 0)
        {
            long a = 0;
            long b = 0;
            if (pop(&p, &a) && pop(&p, &b))
            {
                push(&p, b + a);
            }
        }
        else if (strcmp(op, "SUB") == 0)
        {
            long a = 0;
            long b = 0;
            if (pop(&p, &a) && pop(&p, &b))
            {
                push(&p, b - a);
            }
        }
        else if (strcmp(op, "MUL") == 0)
        {
            long a = 0;
            long b = 0;
            if (pop(&p, &a) && pop(&p, &b))
            {
                push(&p, b * a);
            }
        }
        else if (strcmp(op, "DIV") == 0)
        {
            long a = 0;
            long b = 0;
            if (pop(&p, &a) && pop(&p, &b))
            {
                if (a == 0)
                {
                    printf("ERROR_DIV_ZERO\n");
                }
                else
                {
                    push(&p, b / a);
                }
            }
        }
        else if (strcmp(op, "DUP") == 0)
        {
            if (p.sp > 0)
            {
                push(&p, p.datos[p.sp - 1]);
            }
            else
            {
                printf("ERROR_UNDERFLOW\n");
            }
        }
        else if (strcmp(op, "SWAP") == 0)
        {
            long a = 0;
            long b = 0;
            if (pop(&p, &a) && pop(&p, &b))
            {
                push(&p, a);
                push(&p, b);
            }
        }
        else if (strcmp(op, "POP") == 0)
        {
            long a = 0;
            if (pop(&p, &a))
            {
                printf("%ld\n", a);
            }
        }
        else if (strcmp(op, "PEEK") == 0)
        {
            if (p.sp > 0)
            {
                printf("%ld\n", p.datos[p.sp - 1]);
            }
            else
            {
                printf("ERROR_UNDERFLOW\n");
            }
        }
        else if (strcmp(op, "HALT") == 0)
        {
            break;
        }
    }

    return 0;
}