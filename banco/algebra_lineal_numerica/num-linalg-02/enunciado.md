# Búsqueda de raíz por bisección

Implementar bisección para la función fija f(x)=x²−2 en [a,b]. El intervalo debe contener un cambio de signo; usar tolerancia positiva y tope max_iter.

### Interfaz

```c
double biseccion(double a, double b, double tolerancia, size_t max_iter);
```

### Contrato

Devuelve la raíz aproximada; NAN si el intervalo no encierra raíz, los datos son inválidos o no converge.

Las matrices se representan en buffers contiguos row-major. Los tamaños se expresan en elementos, no en bytes.
