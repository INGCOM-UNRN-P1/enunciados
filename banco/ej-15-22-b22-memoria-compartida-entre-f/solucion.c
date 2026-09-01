#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// El llamador es responsable de liberar la memoria retornada
char *construir_mensaje(const char *usuario)
{
    size_t len = strlen("Hola, ") + strlen(usuario) + 2;
    char *msg = malloc(len);
    if (msg == NULL)
    {
        return NULL;
    }
    snprintf(msg, len, "Hola, %s", usuario);
    return msg;
}

int proc_a_compartida_entre_f(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    char *mensaje = construir_mensaje("Alumno");
    if (mensaje != NULL)
    {
        printf("%s\n", mensaje);
        free(mensaje); // ¡El main debe liberar!
    }
    return 0;
}