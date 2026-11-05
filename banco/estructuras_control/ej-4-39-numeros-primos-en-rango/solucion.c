#include "ej-4-39-numeros-primos-en-rango.h"

#include <stdio.h>

static bool es_primo(int numero)
{
    if (numero < 2) {
        return false;
    }

    for (int divisor = 2; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0) {
            return false;
        }
    }
    return true;
}

int contar_primos_en_rango(int inicio, int fin)
{
    if (inicio <= 0 || fin <= 0 || inicio > fin) {
        return -1;
    }

    int cantidad = 0;
    for (int numero = inicio;; numero++) {
        if (es_primo(numero)) {
            cantidad++;
        }
        if (numero == fin) {
            break;
        }
    }
    return cantidad;
}

int main(void)
{
    int inicio;
    int fin;
    if (scanf("%d %d", &inicio, &fin) != 2) {
        return 1;
    }
    if (inicio <= 0 || fin <= 0 || inicio > fin) {
        fputs("Rango invalido\n", stderr);
        return 1;
    }

    printf("Primos entre %d y %d:", inicio, fin);
    for (int numero = inicio;; numero++) {
        if (es_primo(numero)) {
            printf(" %d", numero);
        }
        if (numero == fin) {
            break;
        }
    }
    putchar('\n');
    return 0;
}
