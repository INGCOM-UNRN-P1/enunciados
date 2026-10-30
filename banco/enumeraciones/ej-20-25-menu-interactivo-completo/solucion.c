typedef enum tipo_figura_e
{
    FIGURA_CIRCULO,
    FIGURA_RECTANGULO,
    FIGURA_TRIANGULO
} tipo_figura_e;

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

typedef union datos_figura_t
{
    circulo_t circulo;
    rectangulo_t rectangulo;
    triangulo_t triangulo;
} datos_figura_t;

typedef struct
{
    tipo_figura_e tipo;
    datos_figura_t datos;
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