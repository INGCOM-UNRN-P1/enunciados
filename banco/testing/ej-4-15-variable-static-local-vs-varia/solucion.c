int contador_llamadas(void)
{
    static int veces = 0;
    veces++;
    return veces;
}

int main(void)
{
    return 0;
}