# Max-Heap binario: inserción y extracción del máximo

max_heap_t almacena hasta HEAP_CAPACITY enteros. push retorna 1 si inserta; pop retorna 1 y escribe el máximo, o 0 si está vacío.

## Interfaz

La interfaz pública está declarada en `heap-prio-02.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
max_heap_t h; max_heap_init(&h); max_heap_push(&h,3); max_heap_push(&h,9); max_heap_push(&h,-1); int x; assert(max_heap_pop(&h,&x)&&x==9); assert(max_heap_pop(&h,&x)&&x==3); assert(max_heap_pop(&h,&x)&&x==-1);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
