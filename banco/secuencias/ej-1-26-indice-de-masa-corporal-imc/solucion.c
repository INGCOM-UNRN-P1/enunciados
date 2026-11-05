#include <stdio.h>

int main(void)
{
    double peso, altura;
    if (scanf("%lf %lf", &peso, &altura) != 2 || peso <= 0.0 || altura <= 0.0)
        return 1;

    double imc = peso / (altura * altura);
    const char *categoria;
    if (imc < 18.5)
        categoria = "Bajo peso";
    else if (imc < 25.0)
        categoria = "Normal";
    else if (imc < 30.0)
        categoria = "Sobrepeso";
    else
        categoria = "Obesidad";

    printf("IMC: %.2f\n%s\n", imc, categoria);
    return 0;
}
