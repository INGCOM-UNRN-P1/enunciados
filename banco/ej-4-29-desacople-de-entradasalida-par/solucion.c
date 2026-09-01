#include <stdio.h>

void calcular_imc_interactivo(void)
{
    float peso = 0.0f;
    float altura = 0.0f;
    printf("Ingrese peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese altura en m: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    if (imc < 18.5f)
    {
        printf("Bajo peso\n");
    }
    else if (imc < 25.0f)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Sobrepeso\n");
    }
}

int main(void)
{
    return 0;
}