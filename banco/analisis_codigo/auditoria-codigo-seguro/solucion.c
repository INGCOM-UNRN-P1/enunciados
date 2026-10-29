/*
 * Analizador Seguro de Credenciales (Anti-Overflow)
 * Catedra Programacion I - UNRN
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USER 32
#define MAX_ROL 16
#define MAX_TOKEN 64

void procesar_credencial(const char *raw_line)
{
    char user[MAX_USER] = {0};
    char rol[MAX_ROL] = {0};
    char token[MAX_TOKEN] = {0};

    char formato[64] = {0};
    snprintf(formato, sizeof(formato), "%%%ds:%%%ds:%%%ds", MAX_USER - 1, MAX_ROL - 1, MAX_TOKEN - 1);

    const char *primer_dos_puntos = strchr(raw_line, ':');
    if (primer_dos_puntos == NULL)
    {
        printf("RECHAZADO: OVERFLOW_PREVENTED\n");
        return;
    }

    const char *segundo_dos_puntos = strchr(primer_dos_puntos + 1, ':');
    if (segundo_dos_puntos == NULL)
    {
        printf("RECHAZADO: OVERFLOW_PREVENTED\n");
        return;
    }

    size_t user_len = (size_t)(primer_dos_puntos - raw_line);
    size_t rol_len = (size_t)(segundo_dos_puntos - (primer_dos_puntos + 1));
    const char *token_inicio = segundo_dos_puntos + 1;
    size_t token_len = strlen(token_inicio);

    while (token_len > 0 && (token_inicio[token_len - 1] == '\n' || token_inicio[token_len - 1] == '\r'))
    {
        token_len--;
    }

    if (user_len >= MAX_USER || rol_len >= MAX_ROL || token_len >= MAX_TOKEN || user_len == 0 || rol_len == 0 || token_len == 0)
    {
        printf("RECHAZADO: OVERFLOW_PREVENTED\n");
        return;
    }

    memcpy(user, raw_line, user_len);
    user[user_len] = '\0';

    memcpy(rol, primer_dos_puntos + 1, rol_len);
    rol[rol_len] = '\0';

    memcpy(token, token_inicio, token_len);
    token[token_len] = '\0';

    printf("ACEPTADO user=%s rol=%s\n", user, rol);
}

int main(void)
{
    char buffer[512] = {0};

    while (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if (strncmp(buffer, "EXIT", 4) == 0 && (buffer[4] == '\n' || buffer[4] == '\0' || buffer[4] == '\r'))
        {
            break;
        }
        if (buffer[0] == '\n' || buffer[0] == '\r')
        {
            continue;
        }
        procesar_credencial(buffer);
    }

    return 0;
}