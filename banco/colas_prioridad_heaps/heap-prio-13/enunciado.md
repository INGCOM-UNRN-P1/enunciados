# Montículo d-ario

dheap_t recibe d>=2 y almacena capacidad fija. Inserción y extracción de mínimo respetan padre=(i-1)/d.

## Interfaz

La interfaz pública está declarada en `heap-prio-13.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
dheap_t h; assert(dheap_init(&h,3)); dheap_push(&h,8); dheap_push(&h,2); dheap_push(&h,5); int x; assert(dheap_pop(&h,&x)&&x==2); assert(dheap_pop(&h,&x)&&x==5);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
