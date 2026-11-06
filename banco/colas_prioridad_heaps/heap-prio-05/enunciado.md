# Decrease-key en min-heap

min_heap_decrease_key actualiza el índice existente solo si el nuevo valor no es mayor y restaura el invariante.

## Interfaz

La interfaz pública está declarada en `heap-prio-05.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
int h[]={2,5,8,9,7}; assert(min_heap_decrease_key(h,5,3,1)); assert(h[0]==1); assert(es_min_heap(h,5)); assert(!min_heap_decrease_key(h,5,1,10));
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
