#include <stdbool.h>
#include <stdio.h>

bool aprobo(int nota)
{
    return nota >= 4;
}

int main(void)
{
    int nota;
    if (scanf("%d", &nota) != 1) return 1;
    puts(aprobo(nota) ? "Aprobado" : "Desaprobado");
    return 0;
}
