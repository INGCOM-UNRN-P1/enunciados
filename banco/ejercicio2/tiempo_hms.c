/**
 * @file tiempo_hms.c
 * @brief Implementación A: Representación desglosada (horas, minutos, segundos).
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tiempo.h"

struct tiempo
{
    unsigned int horas;
    unsigned int minutos;
    unsigned int segundos;
};

static bool tiempo_invariante(const tiempo_t *t)
{
    if (t == NULL)
    {
        return false;
    }
    return (t->minutos < 60) && (t->segundos < 60);
}

tiempo_t *tiempo_crear(unsigned int horas, unsigned int minutos, unsigned int segundos)
{
    tiempo_t *t = (tiempo_t *)malloc(sizeof(struct tiempo));
    if (t == NULL)
    {
        return NULL;
    }

    minutos += segundos / 60;
    segundos = segundos % 60;
    horas += minutos / 60;
    minutos = minutos % 60;

    t->horas = horas;
    t->minutos = minutos;
    t->segundos = segundos;

    if (!tiempo_invariante(t))
    {
        free(t);
        return NULL;
    }

    return t;
}

void tiempo_destruir(tiempo_t *t)
{
    if (t != NULL)
    {
        free(t);
    }
}

unsigned int tiempo_horas(const tiempo_t *t)
{
    if (t == NULL)
    {
        return 0;
    }
    return t->horas;
}

unsigned int tiempo_minutos(const tiempo_t *t)
{
    if (t == NULL)
    {
        return 0;
    }
    return t->minutos;
}

unsigned int tiempo_segundos(const tiempo_t *t)
{
    if (t == NULL)
    {
        return 0;
    }
    return t->segundos;
}

unsigned long tiempo_en_segundos(const tiempo_t *t)
{
    if (t == NULL)
    {
        return 0;
    }
    return ((unsigned long)t->horas * 3600) + ((unsigned long)t->minutos * 60) + t->segundos;
}

void tiempo_incrementar(tiempo_t *t, unsigned int segundos_extra)
{
    if (t != NULL)
    {
        t->segundos += segundos_extra;
        t->minutos += t->segundos / 60;
        t->segundos = t->segundos % 60;
        t->horas += t->minutos / 60;
        t->minutos = t->minutos % 60;
    }
}
