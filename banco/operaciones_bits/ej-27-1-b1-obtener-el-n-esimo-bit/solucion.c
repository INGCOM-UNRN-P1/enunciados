int get_bit(int numero, int n)
{
    return (int)(((unsigned int)numero >> n) & 1u);
}
