# Planificador de tareas con min-heap

Implementá una cola de tareas en arreglo dinámico, ordenada por prioridad ascendente y FIFO entre prioridades iguales. Cada tarea tiene prioridad entera y secuencia de inserción. Proveer inicialización, inserción, extracción y destrucción; extracción informa false cuando está vacía. La capacidad crece geométricamente y se detecta overflow de tamaños.

La API completa y sus firmas están en `heap-prio-19.h`. Los tamaños son explícitos, los errores se reportan con `bool` y los valores de salida sólo se modifican al completar la operación, salvo que la documentación indique lo contrario.
