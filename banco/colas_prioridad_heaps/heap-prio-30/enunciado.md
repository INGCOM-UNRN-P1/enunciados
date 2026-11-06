# Cola de prioridad genérica con comparador

Implementá un min-heap genérico de elementos de tamaño fijo, comparador estilo qsort (negativo si a precede b), almacenamiento propiedad de la cola, push, peek, pop y destroy. Copia bytes de elementos; callback y tamaño son obligatorios. Devuelve false en error, capacidad insuficiente no aplica pues crece dinámicamente.

La API completa y sus firmas están en `heap-prio-30.h`. Los tamaños son explícitos, los errores se reportan con `bool` y los valores de salida sólo se modifican al completar la operación, salvo que la documentación indique lo contrario.
