# Cálculo de un par de raíces por Bairstow

A partir de los coeficientes en orden descendente de un polinomio real de grado al menos dos, encuentra mediante iteración de Bairstow un factor cuadrático `x² + u x + v` y devuelve sus dos raíces. `u_inicial` y `v_inicial` son las estimaciones iniciales del factor. Se aplican recurrencias de división sintética y Newton al residuo del cociente; se detiene cuando ambos residuos son menores que `tolerancia`.

## Interfaz
```c
int bairstow_par_raices(const double *coeficientes, size_t grado,
                         double u_inicial, double v_inicial, double tolerancia,
                         size_t max_iter, double *r1_real, double *r1_imag,
                         double *r2_real, double *r2_imag);
```

Devuelve 1 y escribe el par de raíces (componentes reales e imaginarias) si converge; devuelve 0 ante argumentos inválidos, Jacobiano singular, falta de convergencia o resultados no finitos. El polinomio debe tener coeficiente líder no nulo y los cuatro punteros de salida deben ser distintos.

## Caso de referencia

Para `p(x)=x⁴-5x²+4`, con `u₀=0`, `v₀=-1`, el método encuentra el factor `x²-1`, y devuelve las raíces `-1` y `1` (el orden puede variar).
