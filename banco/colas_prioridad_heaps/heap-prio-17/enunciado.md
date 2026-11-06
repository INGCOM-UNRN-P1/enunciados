# Montículo oblicuo skew autoajustable

Skew min-heap enlazado: insertar por merge y extraer raíz; cada merge intercambia recursivamente hijo izquierdo/derecho.

## Interfaz

La interfaz pública está declarada en `heap-prio-17.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
skew_heap_t a,b; skew_init(&a); skew_init(&b); skew_insert(&a,8); skew_insert(&a,2); skew_insert(&b,5); skew_insert(&b,-1); assert(skew_merge(&a,&b)); int x; assert(skew_extract_min(&a,&x)&&x==-1); assert(skew_extract_min(&a,&x)&&x==2); skew_destroy(&a); skew_destroy(&b);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
