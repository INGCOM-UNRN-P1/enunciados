#include <stdbool.h>
#include <stdio.h>

bool es_primo(int n)
{
    if (n < 2) return false;
    for (int divisor = 2; divisor <= n / divisor; divisor++)
        if (n % divisor == 0) return false;
    return true;
}

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 1;
    puts(es_primo(n) ? "Primo" : "No primo");
    return 0;
}
