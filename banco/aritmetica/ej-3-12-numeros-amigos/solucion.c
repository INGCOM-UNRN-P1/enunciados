#include "ej-3-12-numeros-amigos.h"

static int suma_divisores_propios(int n) {
    if (n <= 1) return 0;
    int suma = 1;
    for (int d = 2; d <= n / d; ++d) if (n % d == 0) {
        suma += d;
        if (d != n / d) suma += n / d;
    }
    return suma;
}
int son_amigos(int a, int b) {
    return a > 0 && b > 0 && a != b && suma_divisores_propios(a) == b && suma_divisores_propios(b) == a;
}
