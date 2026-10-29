/**
 * @file solucion.c
 * @brief Implementación de referencia canónica: TDA Fracción (fraccion_t).
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "fraccion.h"

struct fraccion
{
    int numerador;
    int denominador;
};

static int mcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

static bool fraccion_invariante(const fraccion_t *f)
{
    if (f == NULL)
    {
        return false;
    }
    if (f->denominador <= 0)
    {
        return false;
    }
    int a = abs(f->numerador);
    int b = f->denominador;
    return mcd(a, b) == 1;
}

fraccion_t *fraccion_crear(int numerador, int denominador)
{
    if (denominador == 0)
    {
        return NULL;
    }

    if (denominador < 0)
    {
        numerador = -numerador;
        denominador = -denominador;
    }

    if (numerador == 0)
    {
        denominador = 1;
    }
    else
    {
        int divisor = mcd(abs(numerador), denominador);
        numerador = numerador / divisor;
        denominador = denominador / divisor;
    }

    fraccion_t *f = (fraccion_t *)malloc(sizeof(struct fraccion));
    if (f == NULL)
    {
        return NULL;
    }

    f->numerador = numerador;
    f->denominador = denominador;

    if (!fraccion_invariante(f))
    {
        free(f);
        return NULL;
    }

    return f;
}

void fraccion_destruir(fraccion_t *f)
{
    if (f != NULL)
    {
        free(f);
    }
}

int fraccion_numerador(const fraccion_t *f)
{
    if (f == NULL)
    {
        return 0;
    }
    return f->numerador;
}

int fraccion_denominador(const fraccion_t *f)
{
    if (f == NULL)
    {
        return 0;
    }
    return f->denominador;
}

bool fraccion_es_entera(const fraccion_t *f)
{
    if (f == NULL)
    {
        return false;
    }
    return f->denominador == 1;
}

int fraccion_comparar(const fraccion_t *f1, const fraccion_t *f2)
{
    if (f1 == NULL || f2 == NULL)
    {
        return 0;
    }
    long prod1 = (long)f1->numerador * f2->denominador;
    long prod2 = (long)f2->numerador * f1->denominador;
    if (prod1 < prod2)
    {
        return -1;
    }
    if (prod1 > prod2)
    {
        return 1;
    }
    return 0;
}

fraccion_t *fraccion_sumar(const fraccion_t *f1, const fraccion_t *f2)
{
    if (f1 == NULL || f2 == NULL)
    {
        return NULL;
    }
    int num = (f1->numerador * f2->denominador) + (f2->numerador * f1->denominador);
    int den = f1->denominador * f2->denominador;
    return fraccion_crear(num, den);
}

fraccion_t *fraccion_multiplicar(const fraccion_t *f1, const fraccion_t *f2)
{
    if (f1 == NULL || f2 == NULL)
    {
        return NULL;
    }
    int num = f1->numerador * f2->numerador;
    int den = f1->denominador * f2->denominador;
    return fraccion_crear(num, den);
}

double fraccion_a_real(const fraccion_t *f)
{
    if (f == NULL || f->denominador == 0)
    {
        return 0.0;
    }
    return (double)f->numerador / (double)f->denominador;
}

char *fraccion_a_cadena(const fraccion_t *f)
{
    if (f == NULL)
    {
        return NULL;
    }
    int largo = snprintf(NULL, 0, "%d/%d", f->numerador, f->denominador);
    if (largo < 0)
    {
        return NULL;
    }
    char *cadena = (char *)malloc((size_t)largo + 1);
    if (cadena == NULL)
    {
        return NULL;
    }
    snprintf(cadena, (size_t)largo + 1, "%d/%d", f->numerador, f->denominador);
    return cadena;
}

int main(void)
{
    char cmd[32];
    while (scanf("%31s", cmd) == 1)
    {
        if (strcmp(cmd, "CREAR") == 0)
        {
            int num = 0;
            int den = 0;
            if (scanf("%d %d", &num, &den) == 2)
            {
                fraccion_t *f = fraccion_crear(num, den);
                if (f != NULL)
                {
                    char *str = fraccion_a_cadena(f);
                    printf("OK %s\n", str);
                    free(str);
                    fraccion_destruir(f);
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
        else if (strcmp(cmd, "SUMAR") == 0)
        {
            int n1 = 0;
            int d1 = 0;
            int n2 = 0;
            int d2 = 0;
            if (scanf("%d %d %d %d", &n1, &d1, &n2, &d2) == 4)
            {
                fraccion_t *f1 = fraccion_crear(n1, d1);
                fraccion_t *f2 = fraccion_crear(n2, d2);
                fraccion_t *res = fraccion_sumar(f1, f2);
                if (res != NULL)
                {
                    char *str = fraccion_a_cadena(res);
                    printf("%s\n", str);
                    free(str);
                    fraccion_destruir(res);
                }
                else
                {
                    printf("ERROR\n");
                }
                fraccion_destruir(f1);
                fraccion_destruir(f2);
            }
        }
        else if (strcmp(cmd, "MULT") == 0)
        {
            int n1 = 0;
            int d1 = 0;
            int n2 = 0;
            int d2 = 0;
            if (scanf("%d %d %d %d", &n1, &d1, &n2, &d2) == 4)
            {
                fraccion_t *f1 = fraccion_crear(n1, d1);
                fraccion_t *f2 = fraccion_crear(n2, d2);
                fraccion_t *res = fraccion_multiplicar(f1, f2);
                if (res != NULL)
                {
                    char *str = fraccion_a_cadena(res);
                    printf("%s\n", str);
                    free(str);
                    fraccion_destruir(res);
                }
                else
                {
                    printf("ERROR\n");
                }
                fraccion_destruir(f1);
                fraccion_destruir(f2);
            }
        }
        else if (strcmp(cmd, "COMP") == 0)
        {
            int n1 = 0;
            int d1 = 0;
            int n2 = 0;
            int d2 = 0;
            if (scanf("%d %d %d %d", &n1, &d1, &n2, &d2) == 4)
            {
                fraccion_t *f1 = fraccion_crear(n1, d1);
                fraccion_t *f2 = fraccion_crear(n2, d2);
                int cmp = fraccion_comparar(f1, f2);
                printf("%d\n", cmp);
                fraccion_destruir(f1);
                fraccion_destruir(f2);
            }
        }
        else if (strcmp(cmd, "REAL") == 0)
        {
            int n1 = 0;
            int d1 = 0;
            if (scanf("%d %d", &n1, &d1) == 2)
            {
                fraccion_t *f1 = fraccion_crear(n1, d1);
                if (f1 != NULL)
                {
                    printf("%.4f\n", fraccion_a_real(f1));
                    fraccion_destruir(f1);
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
        else if (strcmp(cmd, "ENTERA") == 0)
        {
            int n1 = 0;
            int d1 = 0;
            if (scanf("%d %d", &n1, &d1) == 2)
            {
                fraccion_t *f1 = fraccion_crear(n1, d1);
                if (f1 != NULL)
                {
                    printf("%s\n", fraccion_es_entera(f1) ? "true" : "false");
                    fraccion_destruir(f1);
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
        else if (strcmp(cmd, "SALIR") == 0)
        {
            break;
        }
    }
    return 0;
}
