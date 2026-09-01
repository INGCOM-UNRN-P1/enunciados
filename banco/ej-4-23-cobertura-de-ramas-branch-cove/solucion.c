int evaluar_alumno(int parcial1, int parcial2, int asistencia_pct)
{
    if (asistencia_pct < 75)
    {
        return 0; // Libre por asistencia
    }
    if (parcial1 >= 60 && parcial2 >= 60)
    {
        return 2; // Promocionado
    }
    if (parcial1 >= 40 || parcial2 >= 40)
    {
        return 1; // Regular
    }
    return 0; // Reprobado
}

int main(void)
{
    return 0;
}