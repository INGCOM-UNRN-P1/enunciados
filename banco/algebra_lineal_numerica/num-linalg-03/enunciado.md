# Método de la secante

Implementar secante para f(x)=x²−2, comenzando con x0 y x1. Detener al alcanzar tolerancia en la diferencia entre aproximaciones; max_iter limita iteraciones.

### Interfaz

```c
double secante(double x0, double x1, double tolerancia, size_t max_iter);
```

### Contrato

Devuelve la raíz aproximada; NAN ante datos inválidos, denominador degenerado o falta de convergencia.

Las matrices se representan en buffers contiguos row-major. Los tamaños se expresan en elementos, no en bytes.
