Implementá dos funciones que calculen una potencia de base real y exponente
entero sin usar `pow`:

```c
double potencia_iterativa(double base, int exp);
double potencia_rapida(double base, int exp);
```

La primera usa multiplicaciones sucesivas. La segunda usa exponenciación
binaria, reduciendo el exponente a la mitad en cada paso. Para exponentes
negativos, devolvé el recíproco de la potencia correspondiente.

Definí `0^0` como 1 y devolvé `NAN` (de `<math.h>`) para cero elevado a un
exponente negativo. El exponente puede tomar cualquier valor de `int`; evitá
negar `INT_MIN`. La versión iterativa puede requerir muchas iteraciones para
exponentes grandes. Los resultados de punto flotante están sujetos a redondeo
y a los límites de `double`.

Por ejemplo, ambas funciones devuelven 1024 para `2^10`, 0.125 para `2^-3`
y -8 para `(-2)^3`.
