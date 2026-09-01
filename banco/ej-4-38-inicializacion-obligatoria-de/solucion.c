int contar_multiplos(const int arr[], int n, int divisor)
{
    int contador; // ¡Variable no inicializada!
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % divisor == 0)
        {
            contador++;
        }
    }
    return contador;
}

int main(void)
{
    return 0;
}