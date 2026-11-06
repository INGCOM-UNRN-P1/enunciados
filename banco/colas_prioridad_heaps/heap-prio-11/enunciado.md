# K-ésimo mayor con heap de tamaño k

kth_largest devuelve el k-ésimo mayor (1-indexado), incluidos duplicados; false si k no está entre 1 y n.

## Algoritmo y complejidad

Se conserva un **max-heap de tamaño k** con los k candidatos mayores. Para cada elemento posterior se barre el heap para ubicar su mínimo; si el nuevo valor es mayor, se reemplaza ese candidato y se repara el max-heap. Al final, otro barrido obtiene el k-ésimo mayor. Complejidad: O(n·k) tiempo y O(k) espacio.

## Interfaz

La interfaz pública está declarada en `heap-prio-11.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
int a[]={7,2,9,2,-1,5}; int x; assert(kth_largest(a,6,2,&x)&&x==7); assert(kth_largest(a,6,5,&x)&&x==2); assert(!kth_largest(a,6,0,&x));
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
