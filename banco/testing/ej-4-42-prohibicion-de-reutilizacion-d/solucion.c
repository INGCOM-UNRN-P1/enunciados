int calcular_estadisticas_ventas(int ventas[], int n)
{
    int aux = 0;
    // Uso 1: acumular suma
    for (int i = 0; i < n; i++)
    {
        aux += ventas[i];
    }
    int promedio = aux / n;

    // Uso 2: buscar maximo
    aux = ventas[0];
    for (int i = 1; i < n; i++)
    {
        if (ventas[i] > aux)
        {
            aux = ventas[i];
        }
    }
    return aux;
}

int main(void)
{
    return 0;
}