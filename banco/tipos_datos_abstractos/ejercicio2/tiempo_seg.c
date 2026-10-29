/**
 * @file tiempo_seg.c
 * @brief Implementación B: Representación compacta (segundos totales).
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tiempo.h"

struct tiempo
{
    unsigned long seg_totales;
};

static bool tiempo_invariante(const tiempo_t *t)
{
    return t != NULL;
}

tiempo_t *tiempo_crear(unsigned int horas, unsigned int minutos, unsigned int segundos)
{
    tiempo_t *t = (tiempo_t *)malloc(sizeof(struct tiempo));
    if (t == NULL)
    {
        return NULL;
    }

    t->seg_totales = ((unsigned long)horas * 3600) + ((unsigned long)minutos * 60) + segundos;

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
    return (unsigned int)(t->seg_totales / 3600);
}

unsigned int tiempo_minutos(const tiempo_t *t)
{
    if (t == NULL)
    {
        return 0;
    }
    return (unsigned int)((t->seg_totales % 3600) / 60);
}

unsigned int tiempo_segundos(const tiempo_t *t)
{
    if (t == NULL)
    {
        return 0;
    }
    return (unsigned int)(t->seg_totales % 60);
}

unsigned long tiempo_en_segundos(const tiempo_t *t)
{
    if (t == NULL)
    {
        return 0;
    }
    return t->seg_totales;
}

void tiempo_incrementar(tiempo_t *t, unsigned int segundos_extra)
{
    if (t != NULL)
    {
        t->seg_totales += segundos_extra;
    }
}
