# Resolución de EDOs por Método de Heun

Integra y'=f(x,y) mediante Heun explícito de segundo orden; pasos positivos, dirección creciente o decreciente. NAN ante datos/cálculo no finitos.

## Firma

```c
double heun_edo(double (*f)(double, double), double x0, double y0, double x1, int pasos);
```

Para y'=y, y(0)=1, hasta x=1 con 100 pasos aproxima e.


El callback representa el lado derecho de la EDO y debe devolver derivadas finitas en cada estado evaluado. Los pasos pueden avanzar o retroceder según x1 y x0.

Nota sobre validación: las pruebas con derivadas de EDO se ejecutan en `pruebas.c`, donde se define un callback de dos argumentos. El harness YAML de Deckard solo inserta aserciones y no permite declarar ese callback local; por eso este registro no declara `tests_funciones`.
