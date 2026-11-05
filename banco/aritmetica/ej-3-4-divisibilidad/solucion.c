#include "ej-3-4-divisibilidad.h"

int es_divisible(int a, int b) {
    return b != 0 && a % b == 0;
}
