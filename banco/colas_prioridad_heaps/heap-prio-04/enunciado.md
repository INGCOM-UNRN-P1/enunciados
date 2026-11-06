# Heapify lineal de arreglo desordenado

heapify_min reordena n enteros in-place como min-heap en O(n).

## Interfaz

La interfaz pública está declarada en `heap-prio-04.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
int a[]={9,4,7,1,-2,6}; heapify_min(a,6); assert(es_min_heap(a,6)); assert(a[0]==-2); heapify_min(a,0);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
