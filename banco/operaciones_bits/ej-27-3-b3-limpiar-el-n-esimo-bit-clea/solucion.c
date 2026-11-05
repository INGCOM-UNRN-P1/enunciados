int clear_bit(int numero, int n)
{
    return numero & ~(int)(1u << n);
}
