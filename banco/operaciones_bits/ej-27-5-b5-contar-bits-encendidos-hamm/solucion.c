int contar_bits(unsigned int numero)
{
    int cantidad = 0;
    while (numero != 0)
    {
        numero &= numero - 1;
        cantidad++;
    }
    return cantidad;
}
