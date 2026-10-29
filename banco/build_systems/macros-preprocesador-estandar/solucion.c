#include <stdio.h>

int proc_eprocesador_estandar(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    printf("STDC: %d | STDC_VERSION: %ld\n", __STDC__, __STDC_VERSION__);
    return 0;
}