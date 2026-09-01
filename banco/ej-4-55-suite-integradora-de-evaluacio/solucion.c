#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

bool validar_nota(int nota)
{
    return (nota >= 1 && nota <= 10);
}

double calcular_promedio_curso(const int notas[], int cantidad)
{
    if (notas == NULL || cantidad <= 0)
    {
        return -1.0;
    }
    int suma = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (!validar_nota(notas[i]))
        {
            return -1.0;
        }
        suma += notas[i];
    }
    return (double)suma / cantidad;
}

int contar_aprobados(const int notas[], int cantidad, int nota_minima)
{
    if (notas == NULL || cantidad <= 0 || !validar_nota(nota_minima))
    {
        return -1;
    }
    int aprobados = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (notas[i] >= nota_minima)
        {
            aprobados++;
        }
    }
    return aprobados;
}

int estado_final_alumno(int p1, int p2, int rec)
{
    if (!validar_nota(p1) || !validar_nota(p2))
    {
        return -1;
    }
    if (p1 >= 4 && p2 >= 4)
    {
        return (p1 + p2) / 2;
    }
    if (!validar_nota(rec))
    {
        return 0; // Reprobado sin recuperatorio válido
    }
    if (p1 < 4 && rec >= 4 && p2 >= 4)
    {
        return (rec + p2) / 2;
    }
    if (p2 < 4 && rec >= 4 && p1 >= 4)
    {
        return (p1 + rec) / 2;
    }
    return 0;
}

void test_sistema_calificaciones(void)
{
    int notas[] = {7, 8, 4, 10, 6};
    assert(calcular_promedio_curso(notas, 5) == 7.0);
    assert(contar_aprobados(notas, 5, 6) == 4);

    // Caso directo aprobado
    assert(estado_final_alumno(8, 6, 0) == 7);

    // Caso recupera primer parcial
    assert(estado_final_alumno(2, 8, 6) == 7);

    // Caso recupera segundo parcial
    assert(estado_final_alumno(7, 3, 5) == 6);

    // Caso reprueba recuperatorio
    assert(estado_final_alumno(2, 8, 3) == 0);

    // Caso notas inválidas
    assert(estado_final_alumno(12, 8, 5) == -1);
}

int main(void)
{
    test_sistema_calificaciones();
    printf("¡Suite integradora ejecutada con 100%% de éxito!\n");
    return 0;
}