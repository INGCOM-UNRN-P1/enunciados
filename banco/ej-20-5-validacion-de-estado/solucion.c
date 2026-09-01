#include <stdbool.h>

enum estado_red
{
    DESCONECTADO,
    CONECTANDO,
    CONECTADO,
    DESCONECTANDO,
    ERROR_TIMEOUT,
    ERROR_AUTH,
    _ESTADO_MAX // Valor centinela
};
bool estado_valido(int valor);


int proc_validacion_de_estado(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}