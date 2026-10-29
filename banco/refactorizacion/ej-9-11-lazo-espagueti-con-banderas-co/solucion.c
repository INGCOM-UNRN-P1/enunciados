int check(int n)
{
    int flag = 1;
    int i = 2;
    if (n <= 1) return 0;
    while (1)
    {
        if (i * i > n) break;
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }
    return flag;
}

int main(void)
{
    return 0;
}