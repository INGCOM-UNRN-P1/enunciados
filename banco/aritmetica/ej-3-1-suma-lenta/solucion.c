#include "ej-3-1-suma-lenta.h"

int suma_lenta(int a, int b) {
    int resultado = a;
    while (b > 0) { ++resultado; --b; }
    while (b < 0) { --resultado; ++b; }
    return resultado;
}
