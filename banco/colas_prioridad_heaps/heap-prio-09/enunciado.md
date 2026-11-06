# Fusión de dos min-heaps binarios

heap_merge copia dos min-heaps en destino y heapifica en O(n+m); destino tiene capacidad suficiente y no aliasa entradas.

## Interfaz

La interfaz pública está declarada en `heap-prio-09.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
int a[]={1,4,7},b[]={2,3}; int d[5]; assert(heap_merge(a,3,b,2,d)); assert(es_min_heap(d,5)); assert(d[0]==1);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
