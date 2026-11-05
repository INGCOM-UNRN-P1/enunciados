#include <stdio.h>

int main(void)
{
    double primero, segundo, resultado;
    char operador;
    if (scanf("%lf %c %lf", &primero, &operador, &segundo) != 3)
        return 1;

    switch (operador) {
    case '+': resultado = primero + segundo; break;
    case '-': resultado = primero - segundo; break;
    case '*': resultado = primero * segundo; break;
    case '/':
        if (segundo == 0.0) {
            puts("Error: División por cero.");
            return 0;
        }
        resultado = primero / segundo;
        break;
    default:
        puts("Error: Operador no válido.");
        return 0;
    }
    printf("%.2f\n", resultado);
    return 0;
}
