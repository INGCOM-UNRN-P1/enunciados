double operacion(int op, double a, double b)
{
    if (op == 1) {
        return a + b;
    } else if (op == 2) {
        return a - b;
    } else if (op == 3) {
        return a * b;
    } else if (op == 4) {
        if (b != 0) return a / b;
        else return 0;
    } else {
        return 0;
    }
}

int main(void)
{
    return 0;
}