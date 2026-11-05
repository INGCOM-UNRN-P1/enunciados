Enciende el bit en la posición n sin alterar los demás.

```c
int set_bit(int numero, int n);
```

La posición 0 corresponde al bit menos significativo. Suponé `0 <= n < sizeof(int) * CHAR_BIT - 1`, para que la máscara sea representable como `int`.
