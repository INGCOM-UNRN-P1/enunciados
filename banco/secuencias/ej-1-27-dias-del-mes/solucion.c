#include <stdio.h>

int main(void)
{
    int mes, anio;
    if (scanf("%d%d", &mes, &anio) != 2 || mes < 1 || mes > 12 || anio <= 0)
        return 1;
    const int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cantidad = dias[mes - 1];
    if (mes == 2 && anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
        cantidad++;
    printf("%d\n", cantidad);
    return 0;
}
