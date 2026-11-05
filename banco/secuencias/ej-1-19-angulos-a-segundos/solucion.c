#include "ej-1-19-angulos-a-segundos.h"

#include <stdio.h>

long long angulo_a_segundos(int grados, int minutos, int segundos)
{
    return (long long)grados * 3600 + (long long)minutos * 60 + segundos;
}

int main(void)
{
    int grados, minutos, segundos;
    if (scanf("%d %d %d", &grados, &minutos, &segundos) != 3)
        return 1;
    printf("%lld\n", angulo_a_segundos(grados, minutos, segundos));
    return 0;
}
