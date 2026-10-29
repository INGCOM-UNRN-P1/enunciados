#include <stdio.h>
#include <stdbool.h>

int g_contador = 0;

// Función 1
int duplicar(int x) {
    return x * 2;
}

// Función 2
int obtener_siguiente(void) {
    return ++g_contador;
}

// Función 3
int sumar_con_log(int a, int b) {
    printf("Sumando %d y %d\n", a, b);
    return a + b;
}

// Función 4
bool es_positivo(int n) {
    return n > 0;
}

int main(void)
{
    return 0;
}