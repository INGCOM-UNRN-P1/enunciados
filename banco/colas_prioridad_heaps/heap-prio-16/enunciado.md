# Montículo de Fibonacci: inserción y unión

Lista circular de raíces y puntero mínimo; insertar y concatenar raíces en O(1); unión consume origen.

## Interfaz

La interfaz pública está declarada en `heap-prio-16.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
fib_heap_t a,b; fib_init(&a); fib_init(&b); fib_insert(&a,6); fib_insert(&a,1); fib_insert(&b,-3); assert(fib_union(&a,&b)); int x; assert(fib_extract_min(&a,&x)&&x==-3); assert(fib_extract_min(&a,&x)&&x==1); fib_destroy(&a); fib_destroy(&b);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
