#include <stdio.h>

int main(void)
{
    char nombre[200];

    printf("Por favor, ingresa tu nombre:\n");
    if (fgets(nombre, sizeof nombre, stdin) == NULL)
        return 1;

    int i = 0;
    while (nombre[i] != '\0' && nombre[i] != '\n')
        i++;
    nombre[i] = '\0';

    printf("Hola, %s!\n", nombre);
    return 0;
}
