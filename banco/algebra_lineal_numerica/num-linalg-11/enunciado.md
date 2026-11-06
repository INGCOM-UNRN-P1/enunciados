# Cálculo de Autovalor Dominante por Método de las Potencias

Autovalor dominante por potencias; devuelve NAN con argumentos inválidos, vector inicial nulo, no convergencia o desbordamiento. Supone que el autovalor dominante en módulo es simple y que el vector inicial tiene componente en su autoespacio; el método no comprueba esas hipótesis.

## Firma

```c
double potencias_autovalor(double **A, double *vector_inicial, int n, double tolerancia, int max_iter);
```

Para A=diag(5,2), inicio (1,1), el autovalor aproximado converge a 5.


A se representa mediante n filas de n valores double. La rutina no toma propiedad de las filas. La convergencia al autovalor dominante requiere un autovalor dominante simple y una componente inicial en su autoespacio; esta condición matemática no puede verificarse de forma general a partir de la iteración.
