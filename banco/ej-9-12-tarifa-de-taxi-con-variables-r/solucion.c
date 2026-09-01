double calc(double k, int n)
{
    double t = 150.0; // Bajada de bandera
    if (k > 0) t += k * 80.0;
    if (n == 1) t = t * 1.20; // Recargo nocturno
    return t;
}

int main(void)
{
    return 0;
}