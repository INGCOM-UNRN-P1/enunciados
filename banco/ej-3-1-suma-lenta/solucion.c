#include <stdio.h>
#include <stdlib.h>

int suma_lenta(int a, int b) {
    int res = a;
    if (b >= 0) {
        for (int i = 0; i < b; i++) res++;
    } else {
        for (int i = 0; i < -b; i++) res--;
    }
    return res;
}

int main(void) {
    printf("3 + 4 = %d\n", suma_lenta(3, 4));
    return 0;
}
