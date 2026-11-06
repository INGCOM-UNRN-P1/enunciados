# Cola de prioridad concurrente y segura

Implementá una cola de prioridad min de enteros protegida por mutex C11 threads (mtx_t). API: init, push, try_pop, destroy. Cada operación concurrente es linealizable; try_pop retorna false en vacío sin tocar la salida. Documentá que no se admite operación concurrente con destroy.

La API completa y sus firmas están en `heap-prio-27.h`. Los tamaños son explícitos, los errores se reportan con `bool` y los valores de salida sólo se modifican al completar la operación, salvo que la documentación indique lo contrario.
