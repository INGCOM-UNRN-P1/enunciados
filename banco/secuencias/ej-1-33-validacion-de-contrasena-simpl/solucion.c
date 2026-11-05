#include <stdio.h>
#include <string.h>

#define CLAVE_SECRETA "password123"
#define LONGITUD_MAXIMA 128

int main(void)
{
    char intento[LONGITUD_MAXIMA];
    while (1) {
        fputs("Ingrese la contraseña:\n", stdout);
        fflush(stdout);
        if (fgets(intento, sizeof intento, stdin) == NULL)
            return 1;
        intento[strcspn(intento, "\n")] = '\0';
        if (strcmp(intento, CLAVE_SECRETA) == 0) {
            puts("Acceso concedido.");
            return 0;
        }
        puts("Contraseña incorrecta.");
    }
    return 1;
}
