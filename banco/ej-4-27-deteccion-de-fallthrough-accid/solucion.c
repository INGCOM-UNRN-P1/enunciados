int dias_del_mes(int mes)
{
    int dias = 0;
    switch (mes)
    {
        case 2:
            dias = 28;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
        default:
            dias = -1;
    }
    return dias;
}

int main(void)
{
    return 0;
}