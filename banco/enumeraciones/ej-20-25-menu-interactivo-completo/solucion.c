enum tipo_figura
{
    FIGURA_CIRCULO,
    FIGURA_RECTANGULO,
    FIGURA_TRIANGULO
};
typedef struct
{
    double radio;
} circulo_t;
typedef struct
{
    double base;
    double altura;
} rectangulo_t;
typedef struct
{
    double lado_a;
    double lado_b;
    double lado_c;
} triangulo_t;
typedef struct
{
    enum tipo_figura tipo;
    union
    {
        circulo_t circulo;
        rectangulo_t rectangulo;
        triangulo_t triangulo;
    } datos;
} figura_t;


int proc_interactivo_completo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}