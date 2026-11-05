#include "ej-3-10-numeros-primos.h"

int es_primo(int n) {
    if (n < 2) return 0;
    for (int d = 2; d <= n / d; ++d) if (n % d == 0) return 0;
    return 1;
}
