#include <stdio.h>

long long combinaciones(int n, int k) {
    if (k < 0 || k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n / 2) k = n - k;
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

long long permutaciones(int n, int k) {
    if (k < 0 || k > n) return 0;
    long long res = 1;
    for (int i = 0; i < k; i++) {
        res *= (n - i);
    }
    return res;
}

int main(void) {
    printf("C(5, 2): %lld\n", combinaciones(5, 2));
    return 0;
}
