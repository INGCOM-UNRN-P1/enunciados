# Aproximación de raíz cuadrada por Newton–Raphson

Aproximar √s por Newton–Raphson para s≥0. La tolerancia debe ser positiva y max_iter limita el proceso.

### Interfaz

```c
double raiz_newton(double s, double tolerancia, size_t max_iter);
```

### Contrato

Devuelve la aproximación; NAN si los datos son inválidos o no converge.

Las matrices se representan en buffers contiguos row-major. Los tamaños se expresan en elementos, no en bytes.
