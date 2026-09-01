#include <assert.h>
#include <stdbool.h>
#include <stddef.h>

bool segundos_a_tiempo(int total_segundos, int *horas, int *minutos, int *segundos)
{
    if (total_segundos < 0 || !horas || !minutos || !segundos)
    {
        return false;
    }
    *horas = total_segundos / 3600;
    int resto = total_segundos % 3600;
    *minutos = resto / 60;
    *segundos = resto % 60;
    return true;
}

void test_segundos_a_tiempo_normal(void)
{
    int h = 0, m = 0, s = 0;
    bool ok = segundos_a_tiempo(3661, &h, &m, &s);
    assert(ok == true);
    assert(h == 1 && m == 1 && s == 1);
}

void test_segundos_a_tiempo_cero(void)
{
    int h = 0, m = 0, s = 0;
    bool ok = segundos_a_tiempo(0, &h, &m, &s);
    assert(ok == true);
    assert(h == 0 && m == 0 && s == 0);
}

void test_segundos_a_tiempo_invalido(void)
{
    int h = 0, m = 0, s = 0;
    assert(segundos_a_tiempo(-10, &h, &m, &s) == false);
    assert(segundos_a_tiempo(100, NULL, &m, &s) == false);
}

int main(void)
{
    return 0;
}