# Tamaño y rendimiento

Medí en ejecución el tamaño de un `enum` ordinario y comparalo con `int`. En C11 el tamaño concreto del enum depende de la implementación; no supongas que siempre es igual a `int`. Explicá que `sizeof` permite medir la representación en la plataforma compilada, pero no medir por sí solo el rendimiento.

```c
size_t tamanio_enum_estado(void);
size_t tamanio_tipo_entero(void);
```

Investigá y documentá también el rendimiento de operaciones con enums frente a constantes, las optimizaciones posibles del compilador y las diferencias entre C y C++ al usar enums. Distinguí mediciones de conclusiones generales.
