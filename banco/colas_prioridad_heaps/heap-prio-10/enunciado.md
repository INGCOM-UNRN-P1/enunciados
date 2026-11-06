# K-ésimo menor con heap de tamaño k

kth_smallest devuelve el k-ésimo menor (1-indexado), incluidos duplicados; false si k=0 o k>n.

## Algoritmo y complejidad

Se conserva un **min-heap de tamaño k** con los k candidatos menores. Para cada elemento posterior se barre el heap para ubicar su máximo; si el nuevo valor es menor, se reemplaza ese candidato y se repara el min-heap. Al final, otro barrido obtiene el k-ésimo menor. Complejidad: O(n·k) tiempo y O(k) espacio.

## Interfaz

La interfaz pública está declarada en `heap-prio-10.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
int a[]={7,2,9,2,-1,5}; int x; assert(kth_smallest(a,6,3,&x)&&x==2); assert(!kth_smallest(a,6,0,&x)); assert(!kth_smallest(a,6,7,&x));
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
