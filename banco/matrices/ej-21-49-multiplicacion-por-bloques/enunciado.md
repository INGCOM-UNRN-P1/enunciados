# Multiplicación de matrices por bloques

Multiplica matrices cuadradas A y B de orden n, representadas como n filas asignadas individualmente, mediante teselas. Los bordes parciales se procesan cuando tam_bloque no divide a n.

## Firma requerida

```c
double **multiplicar_bloques(double **A, double **B, int n, int tam_bloque);
```

## Memoria, errores y terminación

Devuelve una matriz n×n nueva con filas reservadas individualmente; liberar cada fila y luego el arreglo de filas. NULL ante argumentos inválidos, fallo de asignación o desbordamiento numérico no finito. A y B permanecen intactas.
