# Mediana de flujo con dos heaps

stream_median mantiene min-heap superior y max-heap inferior; insertar O(log n); mediana como double y false en vacío.

## Interfaz

La interfaz pública está declarada en `heap-prio-12.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
median_stream_t s; median_init(&s); double m; assert(!median_get(&s,&m)); median_add(&s,1); median_add(&s,9); assert(median_get(&s,&m)&&m==5.0); median_add(&s,3); assert(median_get(&s,&m)&&m==3.0);
```

```{dibu}
:caption: Estado después de `median_add` de `1`, `9` y `3`: la mitad inferior en un max-heap y la superior en un min-heap, con tamaños que difieren a lo sumo en uno. La mediana es la raíz del heap más grande (`3`) o el promedio de ambas raíces si tienen el mismo tamaño.
- type: heap
  title: Mitad inferior
  kind: max
  build: none
  values: [3, 1]
- type: heap
  title: Mitad superior
  kind: min
  build: none
  values: [9]
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
