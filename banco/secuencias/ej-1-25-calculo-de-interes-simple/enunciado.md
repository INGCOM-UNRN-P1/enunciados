Calculá el interés simple ganado y el monto final a partir de un capital
inicial, una tasa de interés anual expresada en porcentaje y un período en años.
El interés se calcula sobre el capital inicial:

```text
interés = capital × (tasa anual / 100) × años
monto final = capital + interés
```

Implementá `int interes_simple(double capital, double tasa_anual, double anios,
double *interes, double *monto)`. Los valores de entrada deben ser finitos y no
negativos; las salidas deben apuntar a variables distintas. Retorná 0 y escribí
ambos resultados si el cálculo es finito. Para entradas inválidas, punteros
nulos, salidas iguales o resultados no finitos, retorná -1 sin modificar las
salidas. Escribí además un programa que lea los tres valores y muestre ambos
resultados con dos decimales.

Por ejemplo, con capital 1000, tasa anual 5 y 2 años, el interés es 100 y el
monto final es 1100.

:::{hint} Ayuda
Dividí la tasa porcentual por 100 para convertirla a decimal.
:::
