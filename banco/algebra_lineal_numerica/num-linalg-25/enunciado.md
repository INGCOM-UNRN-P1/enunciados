# Resolución de sistemas tridiagonales por el algoritmo de Thomas

Resuelve `Ax=b`, donde `A` es tridiagonal de orden `n`. Los tres vectores diagonales y `b` tienen `n` elementos: `subdiagonal[0]` y `superdiagonal[n-1]` no se usan. Thomas aplica eliminación hacia adelante y sustitución hacia atrás sin pivoteo.

## Interfaz

```c
int resolver_thomas(const double *subdiagonal, const double *diagonal,
                    const double *superdiagonal, const double *b, size_t n,
                    double *x);
```

Devuelve 1 y escribe la solución en `x`; devuelve 0 ante punteros nulos, `n==0`, datos no finitos, pivote exactamente nulo o falta de memoria. Las entradas no se modifican; `x` debe ser un buffer distinto, sin solapamiento con las entradas, y solo se modifica tras resolver el sistema.

## Ejemplos

Para `A=[[2,-1,0],[-1,2,-1],[0,-1,2]]` y `b=[1,0,1]`, devuelve `[1,1,1]`. Para `n=1`, diagonal `[4]` y `b=[8]`, devuelve `[2]`. Una diagonal con pivote cero debe rechazarse.
