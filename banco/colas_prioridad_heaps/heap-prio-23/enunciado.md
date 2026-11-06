# Heap dinámico de eventos

Implementá un min-heap dinámico de eventos (instante uint64_t, id int), con inserción, extracción y liberación. Ordená por instante y luego id para desempatar determinísticamente. La capacidad aumenta geométricamente, con comprobación de desbordamiento y operaciones seguras para heap vacío.

La API completa y sus firmas están en `heap-prio-23.h`. Los tamaños son explícitos, los errores se reportan con `bool` y los valores de salida sólo se modifican al completar la operación, salvo que la documentación indique lo contrario.
