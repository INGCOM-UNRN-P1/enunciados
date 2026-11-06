# Búsqueda de rango en min-heap

Implementá una búsqueda que cuente los valores en intervalo inclusivo [lo, hi] en un arreglo que representa un min-heap. Aprovechá el orden para podar subárboles cuyo padre ya excede hi. Devuelve cantidad; rango invertido o heap vacío devuelve cero; puntero inválido con n>0 también cero. No presupongas validez del heap.

La API completa y sus firmas están en `heap-prio-28.h`. Los tamaños son explícitos, los errores se reportan con `bool` y los valores de salida sólo se modifican al completar la operación, salvo que la documentación indique lo contrario.
