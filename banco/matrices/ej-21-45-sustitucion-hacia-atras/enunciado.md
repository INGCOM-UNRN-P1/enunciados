Resuelva el sistema triangular superior `Ux = b` por sustitución hacia atrás. La matriz debe tener `n` filas válidas; `U` y `b` deben ser válidos y `n` positivo.

Devuelva un vector reservado dinámicamente que debe liberar quien llama. Devuelva `NULL` ante argumentos inválidos, diagonal nula o fallo de reserva.

```c
double *sustitucion_atras(double **U, double *b, int n);
```
