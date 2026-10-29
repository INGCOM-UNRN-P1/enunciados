#include <stdio.h>
#include <assert.h>

int factorial_iterativo(int n) {
    if (n < 0) return -1;
    int res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}

int factorial_recursivo(int n) {
    if (n < 0) return -1;
    if (n <= 1) return 1;
    return n * factorial_recursivo(n - 1);
}

int main(void) {
    printf("Fact 5: %d\n", factorial_iterativo(5));
    return 0;
}
