/*
 * Entrega 4 - Ejercicio 10
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include <math.h>
#include "ejercicio10.h"

float perimetro_circulo(float radio) {
    if (radio < 0.0f) {
        return -1.0f;
    }
    return 2.0f * PI_VAL * radio;
}

float area_circulo(float radio) {
    if (radio < 0.0f) {
        return -1.0f;
    }
    return PI_VAL * radio * radio;
}

float area_triangulo(float base, float altura) {
    if (base <= 0.0f || altura <= 0.0f) {
        return -1.0f;
    }
    return (base * altura) / 2.0f;
}

float calcular_hipotenusa(float cateto_a, float cateto_b) {
    if (cateto_a <= 0.0f || cateto_b <= 0.0f) {
        return -1.0f;
    }
    return sqrtf(cateto_a * cateto_a + cateto_b * cateto_b);
}
