#include <assert.h>

int clasificar_edad(int edad)
{
    if (edad < 0 || edad > 130)
    {
        return -1;
    }
    if (edad < 18)
    {
        return 1;
    }
    if (edad <= 64)
    {
        return 2;
    }
    return 3;
}

int main(void)
{
    return 0;
}