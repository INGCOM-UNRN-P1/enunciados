# Increase-key en max-heap

max_heap_increase_key actualiza el índice existente solo si el valor nuevo no es menor y restaura el invariante.

## Interfaz

La interfaz pública está declarada en `heap-prio-06.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
int h[]={10,8,9,2,5}; assert(max_heap_increase_key(h,5,3,20)); assert(h[0]==20); assert(es_max_heap(h,5)); assert(!max_heap_increase_key(h,5,1,1));
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
