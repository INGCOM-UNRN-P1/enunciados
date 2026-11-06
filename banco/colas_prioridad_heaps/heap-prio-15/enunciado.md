# Fusión de montículos binomiales

binomial_union combina dos heaps y consume/vacía el segundo; devuelve false con punteros inválidos.

## Interfaz

La interfaz pública está declarada en `heap-prio-15.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
binomial_heap_t a,b; binomial_init(&a); binomial_init(&b); binomial_insert(&a,7); binomial_insert(&a,1); binomial_insert(&b,4); binomial_insert(&b,-2); assert(binomial_union(&a,&b)); assert(binomial_empty(&b)); int x; assert(binomial_extract_min(&a,&x)&&x==-2); assert(binomial_extract_min(&a,&x)&&x==1); binomial_destroy(&a); binomial_destroy(&b);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
