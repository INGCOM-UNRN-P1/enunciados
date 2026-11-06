# Heapsort in-place

heapsort ordena ascendentemente n elementos en el mismo arreglo, sin memoria auxiliar proporcional a n.

## Interfaz

La interfaz pública está declarada en `heap-prio-03.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
int a[]={4,1,7,1,-3}; heapsort(a,5); int e[]={-3,1,1,4,7}; for(size_t i=0;i<5;i++) assert(a[i]==e[i]); heapsort(a,0);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
