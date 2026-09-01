#include <stdio.h>
#include <stdlib.h>

int division_lenta(int dividendo, int divisor) {
    if (divisor <= 0 || dividendo < 0) return 0;
    int cociente = 0;
    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }
    return cociente;
}

int main(void) {
    printf("12 / 3 = %d\n", division_lenta(12, 3));
    return 0;
}
