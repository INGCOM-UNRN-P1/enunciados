# Eliminar elemento arbitrario del heap

heap_remove_at elimina el elemento en índice válido, conserva los demás y restaura un min-heap.

## Interfaz

La interfaz pública está declarada en `heap-prio-08.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
int h[]={1,3,2,7,6,5}; size_t n=6; assert(heap_remove_at(h,&n,1)); assert(n==5 && es_min_heap(h,n)); assert(!heap_remove_at(h,&n,8));
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
