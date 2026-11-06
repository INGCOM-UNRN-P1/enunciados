# Montículo binomial: árboles binomiales

API de binomial min-heap enlazado: insertar, extraer mínimo y liberar; raíces de grado único y ordenadas por grado.

## Interfaz

La interfaz pública está declarada en `heap-prio-14.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
binomial_heap_t h; binomial_init(&h); assert(binomial_insert(&h,8)); binomial_insert(&h,-1); binomial_insert(&h,4); int x; assert(binomial_extract_min(&h,&x)&&x==-1); assert(binomial_extract_min(&h,&x)&&x==4); binomial_destroy(&h);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
