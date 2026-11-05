#include "ej-5-6-funciones-matematicas-basicas.h"
#include <math.h>
#include <stdio.h>

double sumar(double a, double b) { return a + b; }
double restar(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }

double dividir(double a, double b) {
    if (b == 0.0) return NAN;
    return a / b;
}

int main(void)
{
    double a, b, resultado;
    char operacion;
    if (scanf("%lf %c %lf", &a, &operacion, &b) != 3)
        return 1;
    switch (operacion) {
    case '+': resultado = sumar(a, b); break;
    case '-': resultado = restar(a, b); break;
    case '*': resultado = multiplicar(a, b); break;
    case '/': resultado = dividir(a, b); break;
    default:
        puts("Operación inválida");
        return 0;
    }
    if (isnan(resultado))
        puts("División por cero");
    else
        printf("%.2f\n", resultado);
    return 0;
}
