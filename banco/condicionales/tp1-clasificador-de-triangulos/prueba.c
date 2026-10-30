#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "triangulo.h"

static void probar_validez_triangulos_validos(void)
{
    assert(es_triangulo_valido(3.0f, 4.0f, 5.0f));
    assert(es_triangulo_valido(5.0f, 5.0f, 5.0f));
    assert(es_triangulo_valido(6.0f, 8.0f, 10.0f));
    assert(es_triangulo_valido(5.0f, 5.0f, 3.0f));
    assert(es_triangulo_valido(5.0f, 3.0f, 5.0f));
    assert(es_triangulo_valido(3.0f, 5.0f, 5.0f));
    assert(es_triangulo_valido(4.0f, 5.0f, 6.0f));
    assert(es_triangulo_valido(5.0f, 12.0f, 13.0f));
    assert(es_triangulo_valido(8.0f, 15.0f, 17.0f));
}

static void probar_validez_triangulos_invalidos(void)
{
    /* Casos degenerados: a + b == c */
    assert(!es_triangulo_valido(1.0f, 2.0f, 3.0f));
    assert(!es_triangulo_valido(2.0f, 1.0f, 3.0f));
    assert(!es_triangulo_valido(3.0f, 1.0f, 2.0f));
    assert(!es_triangulo_valido(5.0f, 2.0f, 3.0f));

    /* Desigualdad triangular rota: a + b < c */
    assert(!es_triangulo_valido(1.0f, 2.0f, 10.0f));
    assert(!es_triangulo_valido(10.0f, 1.0f, 2.0f));
    assert(!es_triangulo_valido(1.0f, 1.0f, 5.0f));

    /* Lados iguales a cero */
    assert(!es_triangulo_valido(0.0f, 4.0f, 4.0f));
    assert(!es_triangulo_valido(4.0f, 0.0f, 4.0f));
    assert(!es_triangulo_valido(4.0f, 4.0f, 0.0f));
    assert(!es_triangulo_valido(0.0f, 0.0f, 0.0f));

    /* Lados negativos */
    assert(!es_triangulo_valido(-3.0f, 4.0f, 5.0f));
    assert(!es_triangulo_valido(3.0f, -4.0f, 5.0f));
    assert(!es_triangulo_valido(3.0f, 4.0f, -5.0f));
    assert(!es_triangulo_valido(-1.0f, -1.0f, -1.0f));
}

static void probar_clasificacion_validos(void)
{
    /* Equiláteros */
    assert(clasificar_triangulo(7.0f, 7.0f, 7.0f) == TIPO_EQUILATERO);
    assert(clasificar_triangulo(1.5f, 1.5f, 1.5f) == TIPO_EQUILATERO);

    /* Isósceles en todas las rotaciones */
    assert(clasificar_triangulo(5.0f, 5.0f, 3.0f) == TIPO_ISOSCELES);
    assert(clasificar_triangulo(5.0f, 3.0f, 5.0f) == TIPO_ISOSCELES);
    assert(clasificar_triangulo(3.0f, 5.0f, 5.0f) == TIPO_ISOSCELES);
    assert(clasificar_triangulo(10.0f, 10.0f, 6.0f) == TIPO_ISOSCELES);
    assert(clasificar_triangulo(10.0f, 6.0f, 10.0f) == TIPO_ISOSCELES);
    assert(clasificar_triangulo(6.0f, 10.0f, 10.0f) == TIPO_ISOSCELES);

    /* Escalenos */
    assert(clasificar_triangulo(4.0f, 5.0f, 6.0f) == TIPO_ESCALENO);
    assert(clasificar_triangulo(3.0f, 4.0f, 5.0f) == TIPO_ESCALENO);
    assert(clasificar_triangulo(5.0f, 12.0f, 13.0f) == TIPO_ESCALENO);
}

static void probar_clasificacion_invalidos(void)
{
    assert(clasificar_triangulo(1.0f, 1.0f, 5.0f) == TIPO_INVALIDO);
    assert(clasificar_triangulo(1.0f, 2.0f, 3.0f) == TIPO_INVALIDO);
    assert(clasificar_triangulo(0.0f, 4.0f, 4.0f) == TIPO_INVALIDO);
    assert(clasificar_triangulo(-2.0f, 3.0f, 4.0f) == TIPO_INVALIDO);
    assert(clasificar_triangulo(0.0f, 0.0f, 0.0f) == TIPO_INVALIDO);
}

static void probar_rectangulo_pitagoricos(void)
{
    /* Terna 3-4-5 en todas las permutaciones */
    assert(es_triangulo_rectangulo(3.0f, 4.0f, 5.0f));
    assert(es_triangulo_rectangulo(4.0f, 3.0f, 5.0f));
    assert(es_triangulo_rectangulo(5.0f, 3.0f, 4.0f));
    assert(es_triangulo_rectangulo(5.0f, 4.0f, 3.0f));
    assert(es_triangulo_rectangulo(3.0f, 5.0f, 4.0f));
    assert(es_triangulo_rectangulo(4.0f, 5.0f, 3.0f));

    /* Terna 5-12-13 */
    assert(es_triangulo_rectangulo(5.0f, 12.0f, 13.0f));
    assert(es_triangulo_rectangulo(13.0f, 5.0f, 12.0f));
    assert(es_triangulo_rectangulo(12.0f, 13.0f, 5.0f));

    /* Terna 8-15-17 */
    assert(es_triangulo_rectangulo(8.0f, 15.0f, 17.0f));
    assert(es_triangulo_rectangulo(17.0f, 8.0f, 15.0f));
    assert(es_triangulo_rectangulo(15.0f, 17.0f, 8.0f));

    /* Múltiplo escalado 6-8-10 */
    assert(es_triangulo_rectangulo(6.0f, 8.0f, 10.0f));
}

static void probar_rectangulo_no_rectangulos_e_invalidos(void)
{
    /* Válidos pero no rectángulos */
    assert(!es_triangulo_rectangulo(5.0f, 5.0f, 5.0f));
    assert(!es_triangulo_rectangulo(4.0f, 5.0f, 6.0f));
    assert(!es_triangulo_rectangulo(5.0f, 5.0f, 3.0f));

    /* Inválidos */
    assert(!es_triangulo_rectangulo(0.0f, 0.0f, 0.0f));
    assert(!es_triangulo_rectangulo(-3.0f, 4.0f, 5.0f));
    assert(!es_triangulo_rectangulo(1.0f, 2.0f, 3.0f));
    assert(!es_triangulo_rectangulo(0.0f, 4.0f, 5.0f));
}

int main(void)
{
    probar_validez_triangulos_validos();
    probar_validez_triangulos_invalidos();
    probar_clasificacion_validos();
    probar_clasificacion_invalidos();
    probar_rectangulo_pitagoricos();
    probar_rectangulo_no_rectangulos_e_invalidos();
    printf("Todos los tests de triangulo pasaron correctamente.\n");
    return 0;
}
