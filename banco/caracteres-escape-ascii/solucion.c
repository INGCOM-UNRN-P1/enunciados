#include <stdio.h>

int proc_acteres_escape_ascii(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    printf("Tab:\t[TAB]\nBackslash:\\[BS]\nQuote:\"[Q]\"\n");
    return 0;
}