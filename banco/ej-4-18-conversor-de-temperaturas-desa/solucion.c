#include <stdlib.h>

#include <assert.h>
#include <math.h>
#include <stdbool.h>

bool son_cercanos(double a, double b, double eps)
{
    return fabs(a - b) < eps;
}

double celsius_a_fahrenheit(double c)
{
    return (c * 9.0 / 5.0) + 32.0;
}

double fahrenheit_a_celsius(double f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

double celsius_a_kelvin(double c)
{
    return c + 273.15;
}

void test_celsius_a_fahrenheit_cero(void)
{
    assert(son_cercanos(celsius_a_fahrenheit(0.0), 32.0, 1e-6));
}

void test_celsius_a_fahrenheit_ebullicion(void)
{
    assert(son_cercanos(celsius_a_fahrenheit(100.0), 212.0, 1e-6));
}

void test_celsius_a_kelvin_cero(void)
{
    assert(son_cercanos(celsius_a_kelvin(0.0), 273.15, 1e-6));
}

int main(void)
{
    return 0;
}