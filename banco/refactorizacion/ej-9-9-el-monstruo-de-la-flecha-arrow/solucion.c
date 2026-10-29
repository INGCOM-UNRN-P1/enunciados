int calificar(int nota, int asistencia)
{
    int r = 0;
    if (asistencia >= 75)
    {
        if (nota >= 0)
        {
            if (nota <= 100)
            {
                if (nota >= 60)
                {
                    if (nota >= 90)
                    {
                        r = 3; // Sobresaliente
                    }
                    else
                    {
                        r = 2; // Aprobado
                    }
                }
                else
                {
                    r = 1; // Reprobado
                }
            }
            else
            {
                r = -1; // Error nota
            }
        }
        else
        {
            r = -1; // Error nota
        }
    }
    else
    {
        r = 0; // Libre
    }
    return r;
}

int main(void)
{
    return 0;
}