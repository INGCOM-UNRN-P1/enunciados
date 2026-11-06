# Multiplicación de Strassen

Multiplica matrices cuadradas A y B de orden n con Strassen recursivo (siete productos por nivel); para n que no sea potencia de dos, completa con ceros internamente y recorta la salida.

## Firma requerida

```c
double **strassen(double **A, double **B, int n);
```

## Memoria, errores y terminación

Devuelve una matriz n×n nueva, con filas asignadas individualmente; liberar cada fila y después el arreglo de filas. NULL ante argumentos inválidos, fallo de asignación o resultado no finito. A y B no se modifican.
