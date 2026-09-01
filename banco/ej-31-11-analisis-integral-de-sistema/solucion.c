#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nombre[50];
    int edad;
    float promedio;
} estudiante_t;
typedef struct
{
    estudiante_t *lista;
    int cantidad;
    int capacidad;
} sistema_estudiantes_t;
sistema_estudiantes_t *inicializar_sistema(int capacidad_inicial)
{
    sistema_estudiantes_t *sistema = malloc(sizeof(sistema_estudiantes_t));
    sistema->lista = malloc(capacidad_inicial * sizeof(estudiante_t));
    sistema->cantidad = 0;
    sistema->capacidad = capacidad_inicial;
    return sistema;
}
bool agregar_estudiante(sistema_estudiantes_t *sistema, const char *nombre,
                        int edad, float promedio)
{
    if (sistema->cantidad >= sistema->capacidad)
    {
        // Redimensionar
        int nueva_capacidad = sistema->capacidad * 2;
        estudiante_t *nueva_lista =
            realloc(sistema->lista, nueva_capacidad * sizeof(estudiante_t));
        if (nueva_lista == NULL)
        {
            return false;
        }
        sistema->lista = nueva_lista;
        sistema->capacidad = nueva_capacidad;
    }
    // Agregar nuevo estudiante
    strcpy(sistema->lista[sistema->cantidad].nombre, nombre);
    sistema->lista[sistema->cantidad].edad = edad;
    sistema->lista[sistema->cantidad].promedio = promedio;
    sistema->cantidad++;
    return true;
}
estudiante_t *buscar_mejor_estudiante(sistema_estudiantes_t *sistema)
{
    if (sistema->cantidad == 0)
    {
        return NULL;
    }
    estudiante_t *mejor = &sistema->lista[0];
    for (int i = 1; i < sistema->cantidad; i++)
    {
        if (sistema->lista[i].promedio > mejor->promedio)
        {
            mejor = &sistema->lista[i];
        }
    }
    return mejor;
}
void liberar_sistema(sistema_estudiantes_t *sistema)
{
    if (sistema != NULL)
    {
        free(sistema->lista);
        free(sistema);
    }
}

int main(void)
{
    return 0;
}