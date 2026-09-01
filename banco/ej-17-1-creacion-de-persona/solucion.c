typedef struct
{
    char *nombre;
    char *apellido;
    int edad;
} persona_t;
persona_t *persona_crear(const char *nombre, const char *apellido, int edad);


int proc__creacion_de_persona(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}