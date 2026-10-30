/*
 * Entrega 4 - Ejercicio 10
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO10_H
#define EJERCICIO10_H

#define PI_VAL 3.14159265358979323846f

/**
 * @brief Calcula el perímetro de un círculo a partir de su radio.
 * @param radio Radio del círculo (>= 0).
 * @return Perímetro (2 * PI * radio), o -1.0f si radio < 0.
 */
float perimetro_circulo(float radio);

/**
 * @brief Calcula el área de un círculo a partir de su radio.
 * @param radio Radio del círculo (>= 0).
 * @return Área (PI * radio^2), o -1.0f si radio < 0.
 */
float area_circulo(float radio);

/**
 * @brief Calcula el área de un triángulo a partir de base y altura.
 * @param base Longitud de la base (> 0).
 * @param altura Longitud de la altura (> 0).
 * @return Área ((base * altura) / 2), o -1.0f si base <= 0 o altura <= 0.
 */
float area_triangulo(float base, float altura);

/**
 * @brief Calcula la hipotenusa de un triángulo rectángulo dados sus dos catetos.
 * @param cateto_a Longitud del primer cateto (> 0).
 * @param cateto_b Longitud del segundo cateto (> 0).
 * @return Longitud de la hipotenusa sqrt(a^2 + b^2), o -1.0f si algún cateto <= 0.
 */
float calcular_hipotenusa(float cateto_a, float cateto_b);

#endif
