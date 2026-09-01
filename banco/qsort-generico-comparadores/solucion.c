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
} Estudiante;

int cmp_promedio_desc(const void *a, const void *b)
{
    const Estudiante *ea = (const Estudiante *)a;
    const Estudiante *eb = (const Estudiante *)b;

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
    const Estudiante *ea = (const Estudiante *)a;
    const Estudiante *eb = (const Estudiante *)b;
    int r = strcmp(ea->nombre, eb->nombre);
    if (r != 0)
    {
        return r;
    }
    return (eb->promedio > ea->promedio) - (eb->promedio < ea->promedio);
}

int cmp_id_asc(const void *a, const void *b)
{
    const Estudiante *ea = (const Estudiante *)a;
    const Estudiante *eb = (const Estudiante *)b;
    return (ea->id - eb->id);
}

int main(void)
{
    int cantidad = 0;
    Estudiante *estudiantes = NULL;
    char comando[32] = {0};

    while (scanf("%31s", comando) == 1)
    {
        if (strcmp(comando, "CARGAR") == 0)
        {
            if (scanf("%d", &cantidad) == 1 && cantidad > 0)
            {
                free(estudiantes);
                Estudiante *nuevos_estudiantes = (Estudiante *)malloc(sizeof(Estudiante) * (size_t)cantidad);
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
                qsort(estudiantes, (size_t)cantidad, sizeof(Estudiante), cmp_promedio_desc);
            }
        }
        else if (strcmp(comando, "SORT_NOMBRE_ASC") == 0)
        {
            if (estudiantes != NULL && cantidad > 0)
            {
                qsort(estudiantes, (size_t)cantidad, sizeof(Estudiante), cmp_nombre_asc);
            }
        }
        else if (strcmp(comando, "SORT_ID_ASC") == 0)
        {
            if (estudiantes != NULL && cantidad > 0)
            {
                qsort(estudiantes, (size_t)cantidad, sizeof(Estudiante), cmp_id_asc);
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