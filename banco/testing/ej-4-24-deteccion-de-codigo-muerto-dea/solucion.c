int calcular_tarifa(int edad)
{
    if (edad < 0)
    {
        return -1;
    }
    if (edad >= 0 && edad <= 12)
    {
        return 50;
    }
    if (edad > 12)
    {
        return 100;
    }
    // ¿Puede ejecutarse esta línea alguna vez?
    return 0;
}

int main(void)
{
    return 0;
}