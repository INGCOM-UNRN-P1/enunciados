/*
 * Ordenamiento Generico con qsort y Punteros a Funcion
 * Catedra Programacion I - UNRN
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[32];
    float promedio;
} estudiante_t;

int cmp_promedio_desc(const void *a, const void *b)
{
    const estudiante_t *ea = (const estudiante_t *)a;
    const estudiante_t *eb = (const estudiante_t *)b;

    if (eb->promedio > ea->promedio)
    {
        return 1;
    }
    if (eb->promedio < ea->promedio)
    {
        return -1;
    }
    return (ea->id - eb->id);
}

int cmp_nombre_asc(const void *a, const void *b)
{
    const estudiante_t *ea = (const estudiante_t *)a;
    const estudiante_t *eb = (const estudiante_t *)b;
    int r = strcmp(ea->nombre, eb->nombre);
    if (r != 0)
    {
        return r;
    }
    return (eb->promedio > ea->promedio) - (eb->promedio < ea->promedio);
}

int cmp_id_asc(const void *a, const void *b)
{
    const estudiante_t *ea = (const estudiante_t *)a;
    const estudiante_t *eb = (const estudiante_t *)b;
    return (ea->id - eb->id);
}

int main(void)
{
    int cantidad = 0;
    estudiante_t *estudiantes = NULL;
    char comando[32] = {0};

    while (scanf("%31s", comando) == 1)
    {
        if (strcmp(comando, "CARGAR") == 0)
        {
            if (scanf("%d", &cantidad) == 1 && cantidad > 0)
            {
                free(estudiantes);
                estudiante_t *nuevos_estudiantes = (estudiante_t *)malloc(sizeof(estudiante_t) * (size_t)cantidad);
                if (nuevos_estudiantes == NULL)
                {
                    estudiantes = NULL;
                    cantidad = 0;
                    continue;
                }
                estudiantes = nuevos_estudiantes;
                for (int i = 0; i < cantidad; i++)
                {
                    if (scanf("%d %31s %f", &estudiantes[i].id, estudiantes[i].nombre, &estudiantes[i].promedio) != 3)
                    {
                        break;
                    }
                }
            }
        }
        else if (strcmp(comando, "SORT_PROMEDIO_DESC") == 0)
        {
            if (estudiantes != NULL && cantidad > 0)
            {
                qsort(estudiantes, (size_t)cantidad, sizeof(estudiante_t), cmp_promedio_desc);
            }
        }
        else if (strcmp(comando, "SORT_NOMBRE_ASC") == 0)
        {
            if (estudiantes != NULL && cantidad > 0)
            {
                qsort(estudiantes, (size_t)cantidad, sizeof(estudiante_t), cmp_nombre_asc);
            }
        }
        else if (strcmp(comando, "SORT_ID_ASC") == 0)
        {
            if (estudiantes != NULL && cantidad > 0)
            {
                qsort(estudiantes, (size_t)cantidad, sizeof(estudiante_t), cmp_id_asc);
            }
        }
        else if (strcmp(comando, "SHOW") == 0)
        {
            if (estudiantes != NULL)
            {
                for (int i = 0; i < cantidad; i++)
                {
                    printf("ID: %d | %s | %.2f\n", estudiantes[i].id, estudiantes[i].nombre, estudiantes[i].promedio);
                }
            }
        }
        else if (strcmp(comando, "EXIT") == 0)
        {
            break;
        }
    }

    free(estudiantes);
    return 0;
}