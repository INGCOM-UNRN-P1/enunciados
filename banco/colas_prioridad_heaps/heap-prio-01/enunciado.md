# Min-Heap binario: inserción y extracción

Min-heap sobre un arreglo dinámico que crece bajo demanda. Conserva los prototipos originales: `heap_init(min_heap_t *)`, `heap_push(min_heap_t *, int)` (void) y `heap_pop(min_heap_t *, int *)` (retorna 1 si extrajo y 0 si está vacío o hay puntero inválido). `heap_destroy` libera el arreglo y reinicia el objeto. La reserva crece geométricamente; si falla, `heap_push` deja el heap sin cambios.

## Interfaz

La interfaz pública está declarada en `heap-prio-01.h`. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
min_heap_t h; heap_init(&h); heap_push(&h, 7); heap_push(&h, -2); heap_push(&h, 4); int x; assert(heap_pop(&h,&x) && x==-2); assert(heap_pop(&h,&x) && x==4); assert(heap_pop(&h,&x) && x==7); assert(!heap_pop(&h,&x)); for (int i=200;i>=0;i--) heap_push(&h,i); assert(h.tamano==201 && h.capacidad>=201); for(int i=0;i<=200;i++) assert(heap_pop(&h,&x) && x==i); heap_destroy(&h);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
