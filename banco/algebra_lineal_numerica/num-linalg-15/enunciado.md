# Ajuste de Curvas por Mínimos Cuadrados Lineales

Ajusta y=a*x+b por mínimos cuadrados. Devuelve 1 al éxito; 0 ante datos inválidos o abscisas sin variación.

## Firma

```c
int minimos_cuadrados_lineales(const double *x, const double *y, int n, double *pendiente, double *ordenada);
```

Para x=(0,1,2), y=(1,3,5), devuelve pendiente 2 y ordenada 1.


Los arreglos de entrada tienen n elementos y son de solo lectura. Los valores no finitos y abscisas repetidas se rechazan con NAN.
