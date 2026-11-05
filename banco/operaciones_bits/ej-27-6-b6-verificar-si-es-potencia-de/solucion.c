int es_potencia_de_dos(int numero)
{
    return numero > 0 && (numero & (numero - 1)) == 0;
}
