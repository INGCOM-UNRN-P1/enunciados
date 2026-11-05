Devuelve el valor del bit en la posición n de numero.

```c
int get_bit(int numero, int n);
```

La posición 0 corresponde al bit menos significativo. Suponé `0 <= n < sizeof(int) * CHAR_BIT - 1`, para que la máscara sea representable como `int`.
