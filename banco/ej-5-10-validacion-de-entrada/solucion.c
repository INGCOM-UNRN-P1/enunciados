#include <stdio.h>
#include <stdbool.h>

bool validar_rango(int valor, int min, int max) {
    return (valor >= min && valor <= max);
}

bool validar_positivo(double valor) {
    return (valor > 0.0);
}

int main(void) {
    printf("Valido: %d\n", validar_rango(5, 1, 10));
    return 0;
}
