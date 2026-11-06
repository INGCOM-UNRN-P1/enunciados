# Cola de prioridad de tareas

Tarea contiene prioridad entera y etiqueta entera; cola estable (empates por orden de inserción), capacidad fija.

## Interfaz

La interfaz pública está declarada en `heap-prio-07.h`. Los arreglos usan capacidad `HEAP_CAPACITY` cuando corresponde. Las funciones que consultan o extraen retornan `false` ante índices, punteros o heaps vacíos inválidos; no modifican la salida en ese caso.

## Ejemplo

```c
cola_t c; cola_init(&c); cola_push(&c,(tarea_t){2,10}); cola_push(&c,(tarea_t){5,20}); cola_push(&c,(tarea_t){5,21}); tarea_t t; assert(cola_pop(&c,&t)&&t.id==20); assert(cola_pop(&c,&t)&&t.id==21); assert(cola_pop(&c,&t)&&t.id==10);
```

## Requisitos

- Mantener el invariante del heap después de cada operación.
- Aceptar valores negativos y repetidos.
- Manejar entrada vacía y errores sin acceso fuera de límites.
- Compilar con C11 y `-Wall -Wextra -Werror -pedantic`.
