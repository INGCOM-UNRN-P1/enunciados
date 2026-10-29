enum color_predefinido
{
    COLOR_NEGRO,
    COLOR_BLANCO,
    COLOR_ROJO,
    COLOR_VERDE,
    COLOR_AZUL,
    COLOR_AMARILLO,
    COLOR_MAGENTA,
    COLOR_CIAN
};
typedef struct
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
} rgb_t;


int proc_tar_permisos_activos(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}