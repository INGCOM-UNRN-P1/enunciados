#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int st = 0;

void step(char c)
{
    if (st == 0 && c != ' ') st = 1;
    else if (st == 1 && c == ' ') st = 2;
    else if (st == 2 && c != ' ') st = 1;
    else if (c == '\n') st = 3;
}
    return 0;
}