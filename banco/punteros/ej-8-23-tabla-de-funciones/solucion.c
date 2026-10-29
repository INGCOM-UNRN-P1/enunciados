#include <stdio.h>

typedef double (*operacion_t)(double, double);

double sumar(double a, double b) { return a + b; }
double restar(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) { return (b != 0) ? a / b : 0.0; }

static operacion_t operaciones[] = {sumar, restar, multiplicar, dividir};

int main(void)
{
    printf("OPERACIONES: %d\n", 4);
    return 0;
}
