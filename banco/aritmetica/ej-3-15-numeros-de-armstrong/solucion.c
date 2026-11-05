#include "ej-3-15-numeros-de-armstrong.h"

int es_armstrong(int n) {
    if (n < 0) return 0;
    int digitos = 1;
    for (int t = n; t >= 10; t /= 10) ++digitos;
    unsigned long long suma = 0;
    int temp = n;
    do {
        int d = temp % 10;
        unsigned long long potencia = 1;
        for (int i = 0; i < digitos; ++i) potencia *= d;
        suma += potencia;
        temp /= 10;
    } while (temp > 0);
    return suma == (unsigned int)n;
}
