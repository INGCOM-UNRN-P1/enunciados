#include <assert.h>
#include <stdbool.h>

#define MIN_HORAS 0
#define MAX_HORAS 23
#define MIN_MINUTOS 0
#define MAX_MINUTOS 59
#define MIN_SEGUNDOS 0
#define MAX_SEGUNDOS 59

bool es_horario_valido(int horas, int minutos, int segundos)
{
    if (horas < MIN_HORAS || horas > MAX_HORAS)
    {
        return false;
    }
    if (minutos < MIN_MINUTOS || minutos > MAX_MINUTOS)
    {
        return false;
    }
    if (segundos < MIN_SEGUNDOS || segundos > MAX_SEGUNDOS)
    {
        return false;
    }
    return true;
}

void test_es_horario_valido(void)
{
    assert(es_horario_valido(14, 30, 0) == true);
    assert(es_horario_valido(23, 59, 59) == true);
    assert(es_horario_valido(24, 0, 0) == false);
    assert(es_horario_valido(12, -1, 0) == false);
}

int main(void)
{
    return 0;
}