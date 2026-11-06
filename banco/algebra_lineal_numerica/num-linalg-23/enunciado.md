# Generación de Números con Distribución Normal Box-Muller

Transforma dos uniformes independientes [0,1) en dos normales estándar. Devuelve 1 al éxito; 0 si punteros/dominio inválidos. u1=0 no está permitido.

## Firma

```c
int box_muller(double u1, double u2, double *z0, double *z1);
```

Con u1=e^-0.5 y u2=0, z0=1 y z1=0.


El llamador proporciona valores uniformes independientes y libera sus propios punteros de salida, que deben ser distintos. No se usa estado aleatorio oculto.
