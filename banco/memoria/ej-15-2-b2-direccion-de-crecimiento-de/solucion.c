#include <stdio.h>

void explorar_stack(int nivel)
{
    int variable_local;
    printf("Nivel %d: direccion = %p\n", nivel, (void *)&variable_local);
    if (nivel < 5)
    {
        explorar_stack(nivel + 1);
    }
}

int main(void)
{
    return 0;
}