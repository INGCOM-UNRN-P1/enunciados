#include <stdio.h>

int proc__de_entrada_y_salida(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    char inicial = ' ';
    int edad = 0;
    float promedio = 0.0f;
    printf("Ingrese su inicial: ");
    if (scanf(" %c", &inicial) != 1)
    {
        printf("Error al leer la inicial.\n");
        return 1;
    }
    printf("Ingrese su edad: ");
    if (scanf("%d", &edad) != 1)
    {
        printf("Error al leer la edad.\n");
        return 1;
    }
    printf("Ingrese su promedio: ");
    if (scanf("%f", &promedio) != 1)
    {
        printf("Error al leer el promedio.\n");
        return 1;
    }
    printf("Inicial: %c, Edad: %d, Promedio: %.2f\n", inicial, edad, promedio);
    return 0;
}