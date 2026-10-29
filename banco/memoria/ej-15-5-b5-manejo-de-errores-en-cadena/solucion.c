struct persona_t
{
    char *nombre;
    char *apellido;
    struct direccion_t *direccion;
};
struct direccion_t
{
    char *calle;
    char *ciudad;
};


int proc_de_errores_en_cadena(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}